/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */

#include<iostream>
using namespace std;

class Mathematics
{
	int x,y;
	float f;
	
	public :
			void add(int a,int b) {
				x=a,y=b;
				cout<<"Addition : "<<x+y;
			}
			void add(int a,int b,float c) {
				x=a,y=b,f=c;
				cout<<endl<<"Addition : "<<x+y+f;
			}
			void sub(int a,int b) {
				x=a,y=b;
				cout<<endl<<"Subtraction : "<<x-y;
			}
			void sub(int a,int b,float c) {
				x=a,y=b,f=c;
				cout<<endl<<"Subtraction : "<<x-y-f;
			}
			void mul(int a,int b) {
				x=a,y=b;
				cout<<endl<<"Multiplication : "<<x*y;
			}
			void mul(int a,int b,float c) {
				x=a,y=b,f=c;
				cout<<endl<<"Multiplication : "<<x*y*f;
			}
			void div(int a,int b) {
				x=a,y=b;
				cout<<endl<<"Division : "<<x/y;
			}
			void div(int a,int b,float c) {
				x=a,y=b,f=c;
				cout<<endl<<"Division : "<<x/y/f;
			}
};

main()
{
	Mathematics M;
	
	M.add(10,20);
	M.add(10,20,30.7);
	M.sub(20,10);
	M.sub(20,10,5.6);
	M.mul(5,4);
	M.mul(5,4,3.5);
	M.div(50,5);
	M.div(50,5,2.5);
}
