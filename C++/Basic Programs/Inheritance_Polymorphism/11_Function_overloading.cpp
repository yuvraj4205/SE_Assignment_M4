/*Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth 
Circle: Pi * Area *Area */

#include<iostream>
#include<cmath>
using namespace std;

class Shape
{
	public:
		    void calculateArea(int length,int breadth) {
		        double area=length*breadth;
		        cout<<endl<<"Area of Rectangle : "<<area;
		    }
		    void calculateArea(double base,double height) {
		        double area=0.5*base*height;
		        cout<<endl<<"Area of Triangle : "<<area;
		    }
		    void calculateArea(int radius) {
		    	double PI = 3.14159;
        		double area=PI*radius*radius;
        		cout<<"Area of Circle : "<<area;
    		}
};

main()
{
    Shape s;

    s.calculateArea(4,5);
    s.calculateArea(3.0,4.0);
    s.calculateArea(5);
}
