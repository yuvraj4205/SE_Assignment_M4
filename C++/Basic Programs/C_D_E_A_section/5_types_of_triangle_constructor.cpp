/*Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include <iostream>
using namespace std;

class Triangle
{
	private :
    		double side1,side2,side3;

	public :
		    Triangle(double s1,double s2,double s3)
			{
		        side1=s1;
		        side2=s2;
		        side3=s3;
		    }
		    void Types()
			{
		        if(side1==side2 && side2==side3)
				{
		            cout<<endl<<"Equilateral triangle";
		        }
				else if(side1==side2 || side2==side3 || side1==side3)
				{
		            cout<<endl<<"Isosceles triangle";
		        }
				else
				{
		            cout<<endl<<"Scalene triangle";
		        }
		    }
};

main()
{
    double s1,s2,s3;

    cout<<"Enter the lengths of the first side : ";
    cin>>s1;
    cout<<"Enter the lengths of the second side : ";
    cin>>s2;
    cout<<"Enter the lengths of the third side : ";
    cin>>s3;

    Triangle t(s1,s2,s3);
    t.Types();
}
