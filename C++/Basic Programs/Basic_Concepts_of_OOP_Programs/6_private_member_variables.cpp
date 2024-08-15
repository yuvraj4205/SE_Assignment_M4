/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.*/

#include<iostream>
#include<string>
using namespace std;

class person
{

	private :
			string name;
			int age;
			string country;
			
	public :
			void get_person()
			{
				cout<<"Enter name : ";
				cin>>name;
				cout<<"\n\nEnter age : ";
				cin>>age;
				cout<<"\n\nEnter country : ";
				cin>>country;
			}
	
			void print_person()
			{
				cout<<"\n\nName : "<<name;
				cout<<"\n\nAge : "<<age;
				cout<<"\n\nCountry : "<<country;
			}
};

main()
{
	person p;
	p.get_person();
	p.print_person();
}
