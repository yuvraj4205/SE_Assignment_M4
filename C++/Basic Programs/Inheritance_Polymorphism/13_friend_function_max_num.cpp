/*Write a program to find the max number from given two numbers
using friend function */

#include<iostream>
using namespace std;

class Max
{
	int n1,n2;
	
	public : 
			void get_num()
			{
				cout<<"Enter number 1 = ";
				cin>>n1;
				cout<<"Enter number 2 = ";
				cin>>n2;
			}
			friend void Maximum(Max M);
};

void Maximum(Max M)
{
	if(M.n1>M.n2)
		cout<<endl<<"Number 1 is max.";
	else if(M.n2>M.n1)
		cout<<endl<<"Number 2 is max.";
	else
		cout<<endl<<"Entered numbers are equal.";
}

main()
{
	Max M;
	M.get_num();
	Maximum(M);
}
