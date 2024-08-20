//Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
#include<iomanip>
using namespace std;

class Student
{
	protected :
			string name;
			int rollno;
			
	public :
			void get_data()
			{
				cout<<"Enter name of student : ";
				cin>>name;
				cout<<"Enter rollno. of student : ";
				cin>>rollno;
			}
			void display_data()
			{
				cout<<"Name : "<<name;
				cout<<endl<<"Rollno. : "<<rollno;
			}
};

class Marks : public Student
{
	protected :
			float marks[5];
			
	public :
			void getMarks()
			{
	        	for(int i=0;i<5;i++)
				{
					cout<<"Enter marks for "<<i+1<<" subjects : ";
	        	    cin>>marks[i];
	        	}
    		}
    		int Total()
			{
        		int total=0;
        			for (int i=0;i<5;i++)
					{
            			total+=marks[i];
        			}
        		return total;
    		}
    		float Percentage()
    		{
        		return Total()/5;
    		}
};

class StudentMarks : public Marks
{
	public :
		    void Marksheet()
			{
		        display_data();
		        cout<<endl<<"---Marks---";
		        for(int i=0;i<5;i++)
				{
		            cout<<endl<<"Subject "<<i+1<<" : "<<marks[i];
		        }
		        cout<<endl<<"Total Marks : "<<Total();
		        cout<<endl<<"Percentage : "<<fixed<<setprecision(2)<<Percentage()<<"%";
		    }
};

main()
{
    StudentMarks M;
    M.get_data();
    M.getMarks();
    cout<<endl<<"-------------------"<<endl;
    M.Marksheet();
}
