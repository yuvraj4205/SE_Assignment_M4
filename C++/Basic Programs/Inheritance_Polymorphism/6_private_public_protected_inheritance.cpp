//Write a C++ Program to show access to Private Public and Protected using Inheritance

#include<iostream>
using namespace std;

class Base
{
	private :
			int pri_var;
				
	protected :
			int pro_var;
				
	public :
			int pub_var;
				
			void get_private()
			{
				pri_var=100;
				cout<<"Private var : "<<pri_var;	
			}	
};

class Derived : public Base
{
	public :
			void get_protected()
			{
				pro_var=200;
				cout<<endl<<"Protected var : "<<pro_var;	
			}
			void get_public()
			{	
				pub_var=400;
				cout<<endl<<"Public var : "<<pub_var;	
			}	
};

main()
{
	Derived D;
	
	D.get_private();
	D.get_protected();
	D.get_public();
}
