/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data.(Single Inheritance) */

#include<iostream>
#include<iomanip>
using namespace std;

class Cricketer
{
	string name;
	int age;
	
	public :
			void get_data()
			{
				cout<<"Enter cricketer's name : ";
        		cin>>name;
        		cout<<"Enter cricketer's age : ";
        		cin>>age;
			}
			void display_data()
			{
				cout<<endl<<"Name : "<<name;
        		cout<<endl<<"Age : "<<age;
			}
};

class Batsman : public Cricketer
{
	int runs,matches;
	double average;
    int bestp;
    
    public :
    		void batsman_data()
    		{
    			get_data();
    			cout<<"Enter total runs : ";
        		cin>>runs;
        		cout<<"Enter best performance : ";
        		cin>>bestp;
        		cout<<"Enter number of matches played : ";
    			cin>>matches;
				average=runs/matches;
			}
			void display_batsman_data()
			{
				display_data();
				cout<<endl<<"Total Runs : "<<runs;
        		cout<<endl<<"Average Runs : "<<fixed<<setprecision(2)<<average;
        		cout<<endl<<"Best Performance : "<<bestp;
			}
};

main()
{
	Batsman B;
	B.batsman_data();
	B.display_batsman_data();
}
