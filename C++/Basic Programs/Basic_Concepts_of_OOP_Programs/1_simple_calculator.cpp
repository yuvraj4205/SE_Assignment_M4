//WAP to create simple calculator using class

#include <iostream>
using namespace std;

class Calculator
{	
	public : 
			void addition(float n1,float n2)
			{
				cout<<endl<<"Addition = "<<n1+n2;
			}
			void subtraction(float n1,float n2)
			{
				cout<<endl<<"Subtraction = "<<n1-n2;
			}
			void multiplication(float n1,float n2)
			{
				cout<<endl<<"Multiplication = "<<n1*n2;
			}
			void Division(float n1,float n2)
			{
			if(n1!=0 || n2!=0)
            	cout<<endl<<"Division = "<<n1/n2;
			else
            	cout<<endl<<"Error! Division by zero is not allowed.";
            }
};

main()
{
	Calculator C;
	int Calc;
	float n1,n2;
	
	cout<<"Enter number 1 = ";
	cin>>n1;
	cout<<endl<<"Enter number 2 = ";
	cin>>n2;
	
	cout<<endl<<"-----------Calculator-------------";
	cout<<endl<<"1.Addition";
	cout<<endl<<"2.Subtraction";
	cout<<endl<<"3.Multiplication";
	cout<<endl<<"4.Division";
	cout<<endl<<"----------------------------------";
	
	cout<<endl<<"Enter a number = ";
	cin>>Calc;

	switch(Calc)
	{
		case 1:
				C.addition(n1,n2);
				break;
		case 2:
				C.subtraction(n1,n2);
				break;
		case 3:
				C.multiplication(n1,n2);
				break;
		case 4:
				C.Division(n1,n2);
				break;
		default :
				cout<<endl<<"Error! Invalid choice...";
				break;
	}
}
