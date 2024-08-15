/*Write a program to swap the two numbers using friend function
without using third variable */

#include<iostream>
using namespace std;

class Swap
{
	int a,b;
	
	public : 
			void get_num()
			{
				cout<<"Enter first number = ";
				cin>>a;
				cout<<endl<<"Enter second number = ";
				cin>>b;	
			}	
			friend void Swapping(Swap S);
};

void Swapping(Swap S)
{
	S.a=S.a+S.b;
	S.b=S.a-S.b;
	S.a=S.a-S.b;
	
	cout<<endl<<"-------After Swapping-------";
	cout<<endl<<"       --------------       ";
	cout<<endl<<"Number 1 = "<<S.a;
	cout<<endl<<endl<<"Number 2 = "<<S.b;	
}

main()
{
	Swap S;
	S.get_num();
	Swapping(S);
}
