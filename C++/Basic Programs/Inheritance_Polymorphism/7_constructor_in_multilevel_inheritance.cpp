//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include <iostream>
using namespace std;

class GrandParent 
{
	public :
		    GrandParent()
			{
		        cout<<"GrandParentconstructor called";
		    }
};

class Parent : public GrandParent
{
	public :
		    Parent()
			{
		        cout<<endl<<"Parent constructor called";
		    }	
};

class Child : public Parent
{
	public :
		    Child()
			{
		        cout<<endl<<"Child constructor called";
		    }
};

main()
{
    Child obj;
}
