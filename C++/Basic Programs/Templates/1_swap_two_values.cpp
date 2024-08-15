//Write a program of to swap the two values using template

#include<iostream>
using namespace std;

template<class T>
void swapping(T a, T b)
{
	T temp;
	cout<<endl<<"------Before Swapping------";
	cout<<endl<<"a= "<<a<<endl<<"b= "<<b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<endl<<endl<<"------After Swapping------";
	cout<<endl<<"a= "<<a<<endl<<"b= "<<b;
}

main()
{
	float a,b;
	cout<<"Enter A : ";
	cin>>a;
	cout<<endl<<"Enter B : ";
	cin>>b;	
	swapping(a,b);
}
