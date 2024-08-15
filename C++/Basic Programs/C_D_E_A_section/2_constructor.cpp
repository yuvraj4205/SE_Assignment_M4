/*Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/

#include<iostream>
using namespace std;

class calc
{
	int a,b;
	
	public :
			calc(int x, int y)
			{
				a=x;
				b=y;
			}
			int add()
			{
				return a+b;
			}
			int sub()
			{
				return a-b;
			}
			int mul()
			{
				return a*b;
			} 
			int div()
			{
				return a/b;
			} 
};

main()
{
	int x,y;
	cout<<"Enter Number one : ";
	cin>>x;
	cout<<"Enter Number two : ";
	cin>>y;
	
	calc C(x,y);
	int choice;
	cout<<endl<<"Press 1 for Addition";
	cout<<endl<<"Press 2 for Subtraction";
	cout<<endl<<"Press 3 for Multiplication";
	cout<<endl<<"Press 4 for Division";
	
	cout<<endl<<endl<<"Enter your choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1 : 
				cout<<"Addition : "<<C.add();
				break;
		case 2: 
				cout<<"Subtraction : "<<C.sub();
				break;
		case 3: 
				cout<<"Multiplication : "<<C.mul();
				break;
		case 4 : 
				 cout<<"Division : "<<C.div();
				 break;
		default :
				cout<<"Invalid choice !!!!";
				break;
	}	
}
