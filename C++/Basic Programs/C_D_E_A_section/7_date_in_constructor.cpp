/*Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/

#include <iostream>
using namespace std;

class Date
{
	private :
		    int day;
		    int month;
		    int year;
	
	public :
			Date(int d,int m,int y)
			{
		        day=d;
		        month=m;
		        year=y;
		    }
		    void setDay(int d)
			{
		        day=d;
		    }
		    int getDay()
			{
		        return day;
		    }
		    void setMonth(int m)
			{
		        month=m;
		    }
		    int getMonth()
			{
		        return month;
		    }
		    void setYear(int y)
			{
		        year=y;
		    }
		    int getYear()
			{
		        return year;
		    }
		    bool isValidDate()
			{
		        if(month<1 || month>12)
				{
		            return false;
		        }
		        if(day<1 || day>31)
				{
		            return false;
		        }
		        if((month==4 || month==6 || month==9 || month==11) && day>30)
				{
		            return false;
		        }
		        if(month==2)
				{
		            bool isLeapYear=(year%4==0 && year%100!=0) || (year%400==0);
		            if(isLeapYear && day>29)
					{
		                return false;
		            }
					else if(!isLeapYear && day>28)
					{
		                return false;
		            }
		        }
		        return true;
		    }
};

main()
{
    int d,m,y;
    cout<<"Enter day : ";
    cin>>d;
    cout<<"Enter month : ";
    cin>>m;
    cout<<"Enter year : ";
    cin>>y;

    Date D(d,m,y);
    if(D.isValidDate())
	{
        cout<<endl<<"Date is valid : "<<D.getDay()<<"/"<<D.getMonth()<<"/"<<D.getYear();
    }
	else
	{
        cout<<endl<<"Invalid date.";
    }
}
