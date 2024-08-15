/*Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor */

#include<iostream>
#include<string>
using namespace std;

class Employee
{
	string name;
	int employeeID;
	double salary;
	
	public : 
			Employee(string n,int id,double s)
			{
				name=n;
				employeeID=id;
				salary=s;
			}
			void Salary(double performanceRating)
			{
	        	if(performanceRating>=4.0)
				{
	        	    salary*=1.10;
	        	}
				else if(performanceRating>=3.0)
				{
	            	salary*=1.05;
	        	} 
				else
				{
	        	    salary*=0.95;
	        	}
	        }
    		void Emp_Details()
			{
		        cout<<"Name : "<<name;
		        cout<<endl<<"Employee ID : "<<employeeID;
		        cout<<endl<<"Salary : "<<salary;
		    }
};

main()
{
	Employee E("Dennis Ritchie",101,50000.0);
	cout<<"------Employee Details------"<<endl;
	E.Emp_Details();
	E.Salary(4.1);
	cout<<endl<<endl<<"------Updated Employee Details------"<<endl<<endl;
	E.Emp_Details();
}
