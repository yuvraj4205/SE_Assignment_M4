/*Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;

class Rectangle 
{
	private :
			float length;
			float width;
			
	public :
			void get_data()
			{
				cout<<"Enter length : ";
				cin>>length;
				cout<<"\nEnter width : ";
				cin>>width;	
			}
			
			void area_rectangle()
			{
				cout<<"\n\nArea of Rectangle : "<<length*width;	
			}	
			
			void perimeter()
			{
				cout<<"\n\nPerimeter of Rectangle : "<<2*(length+width);
			}
};

main()
{
	Rectangle r;
	r.get_data();
	r.area_rectangle();
	r.perimeter();
}
