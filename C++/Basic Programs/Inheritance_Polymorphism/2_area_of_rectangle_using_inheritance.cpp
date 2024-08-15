//Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;

class Shape
{
    protected :
        	int width,height;
    public :
        	void setWidth(int w)
			{
            	width=w;
        	}
        	void setHeight(int h)
			{
            	height=h;
        	}
};

class Rectangle : public Shape
{
    public :
        	int getArea()
			{
        	    return (width*height);
        	}
};

main()
{
    Rectangle r;
    r.setWidth(5);
    r.setHeight(7);
    cout<<"Area of Rectangle : "<<r.getArea();
}
