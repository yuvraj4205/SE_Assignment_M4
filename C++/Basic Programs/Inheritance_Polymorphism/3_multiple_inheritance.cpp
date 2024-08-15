/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/

#include <iostream>
#include <string>
using namespace std;

class Person
{
	protected :
    		string name;
    		int age;

	public :
			void read_per()
			{
				cout<<"Name : ";
				cin>>name;
				cout<<"age : ";
				cin>>age;
			}
			void write_per()
			{
				cout<<endl<<"Name : "<<name;
				cout<<endl<<"age : "<<age;
			}
};

class Student : public Person
{
	protected :
			float percentage;
			
	public :
			void read_st()
			{
				read_per();
				cout<<"Enter percentage : ";
				cin>>percentage;
			}
			void write_st()
			{
				write_per();
				cout<<endl<<"percentage : "<<percentage;
			}
};

class Teacher : public Student
{
	protected :
			int salary;
			
	public :
			void read_tea()
			{
				read_per();
				cout<<"Enter teacher's salary : ";
				cin>>salary;
			}
			void write_tea()
			{
				write_per();
				cout<<endl<<"Salary : "<<salary;
			}
};

main()
{
	Student S;
	Teacher T;
	
	cout<<"---Enter student details---"<<endl;
    S.read_st();

    cout<<endl<<"---Enter teacher details---"<<endl;
    T.read_tea();

	cout<<endl<<"------------------------------"<<endl;
    cout<<endl<<"---Student details---";
    S.write_st();

    cout<<endl<<endl<<"---Teacher details---";
    T.write_tea();
}
