/*Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/

#include<iostream>
#include<string>
using namespace std;

class Car
{
	private :
			string company;
			string model;
			int year;
	
	public :
			Car(string com,string mod,int y)
			{
				company=com;
				model=mod;
				year=y;
			}
			string getCompany()
			{
				return company;
			}
			string getModel()
			{
				return model;
			}
			int getYear()
			{
				return year;
			}
			void setCompany(string company)
			{
        		cout<<endl<<"Company : "<<company;
    		}
    		void setModel(string model)
			{
        		cout<<endl<<"Model : "<<model;
    		}
    		void setYear(int year)
			{
        		cout<<endl<<"Year : "<<year;
    		}
};

main()
{
    Car c("BMW","M5CS",2024);
    
    cout<<"Company : "<<c.getCompany();
    cout<<endl<<"Model : "<<c.getModel();
    cout<<endl<<"Year : "<<c.getYear()<<endl<<endl;
    
    c.setCompany("BMW");
    c.setModel("M760i");
    c.setYear(2024);
}
