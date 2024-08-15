//Write a program to concatenate the two strings using Operator Overloading

#include<iostream>
#include<cstring>
using namespace std;

class String
{
	public:
		    char str[100];
		
		    String(char *s="") {
		        strcpy(str,s);
		    }
		
		    String operator+(String &other) {
		        String temp;
		        strcpy(temp.str,str);
		        strcat(temp.str,other.str);
		        return temp;
		    }
		
		    void display() {
		        cout<<str;
		    }
};

main()
{
    String s1("Hello"),s2("World!");
    String s3=s1+s2;
    s3.display();
}
