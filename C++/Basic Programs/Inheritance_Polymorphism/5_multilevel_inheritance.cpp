/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;

class Students
{
	protected : 
				int rollno;
				
	public : 
			void Roll_num()
			{
				cout<<"Enter Roll no. : ";
				cin>>rollno;
			}
};

class Test : public Students
{
	protected :
				int sub1,sub2;
				
	public :
			void Marks()
			{
				cout<<"\nEnter first subject's marks : ";
				cin>>sub1;
				cout<<"\nEnter second subject's marks : ";
				cin>>sub2;
			}
};

class Result : public Test
{
	protected : 
				int Total;
				
	public : 
			void Result_sub()
			{
				Total=sub1+sub2;
				cout<<"\nTotal marks of both subjects : "<<Total;
			}
};

main()
{
	Result R;
	R.Roll_num();
	R.Marks();
	R.Result_sub();
}
