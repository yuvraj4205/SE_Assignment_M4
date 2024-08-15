/*Write a program to find the multiplication values and the cubic values using
inline function */

#include<iostream>
using namespace std;

class Multiplication
{
	int n;
	
	public : 
			void get_num(int num)
			{
				n=num;
			}
			
			inline get_square()
			{
				return n*n;
			}
			
			inline get_cube()
			{
				return n*n*n;
			}
};

main()
{
	Multiplication M;
	M.get_num(5);
	int sq=M.get_square();
	int cu=M.get_cube();
	
	cout<<"Square = "<<sq<<endl<<endl;
	cout<<"Cube = "<<cu;
}
