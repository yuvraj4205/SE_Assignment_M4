/*Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/

#include<iostream>
using namespace std;

class Circle 
{
	private :
			int r;
			float pi;
			
	public :
			void get_data()
			{
				pi=3.14;
				cout<<"Enter radious : ";
				cin>>r;	
			}
			
			void area_circle()
			{
				cout<<"\n\nArea of Circle : "<<pi*r*r;	
			}	
			
			void circumference()
			{
				cout<<"\n\nCircumference of Circle : "<<2*pi*r;
			}
};

main()
{
	Circle C;
	C.get_data();
	C.area_circle();
	C.circumference();
}
