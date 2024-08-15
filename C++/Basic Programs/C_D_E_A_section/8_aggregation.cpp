/*Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation */

#include<iostream>
#include<string>
using namespace std;

class student
{
	public :
			string name;
			int rollno;
			
			student(string name,int rollno)
			{
				this->name=name;
				this->rollno=rollno;
			}
};

class student_result
{
	private : student *st;
			
	public :
			int classn;
			int marks;
			char grade;
			
			student_result(student *st,int classn,int marks,char grade)
			{
				this->classn=classn;
				this->marks=marks;
				this->grade=grade;
				this->st=st;
			}
			void print()
			{
				cout<<"Name of student : "<<st->name;
				cout<<endl<<"Roll no. of student : "<<st->rollno;
				cout<<endl<<"Class no. of student : "<<classn;
				cout<<endl<<"Total marks of student : "<<marks;
				cout<<endl<<"Grade of student : "<<grade;
			}
};

main()
{
	student s("Jhon Doe",19);
	
	student_result sr(&s,11,680,'A');
	sr.print();
}
