//Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class Matrix
{
	public :
		    int *arr;
		    int size;
		
		    Matrix(int n) {
		        size=n;
		        arr=new int[n];
		    }
		
		    Matrix operator+(const Matrix &other) {
		        if(size!=other.size) {
		            cerr<<endl<<"Error: Matrix sizes don't match.";
		            exit(1);
		        }
		
		        Matrix result(size);
		        for(int i=0;i<size;i++) {
		            result.arr[i]=arr[i]+other.arr[i];
		        }
		        return result;
		    }
		
		    void display() {
		        for(int i=0;i<size;i++) {
		            cout<<endl<<arr[i]<<" ";
		        }
		    }
};

main()
{
    int n;
    cout<<"Enter the size of the matrices : ";
    cin>>n;

    Matrix A(n),B(n);

    for(int i=0;i<n;i++) {
    	cout<<"Enter elements of matrix A : ";
        cin>>A.arr[i];
    }

    for(int i=0;i<n;i++) {
    	cout<<"Enter elements of matrix B : ";
        cin>>B.arr[i];
    }
    Matrix C=A+B;

    cout<<endl<<"Matrix A : ";
    A.display();
    cout<<endl<<"Matrix B : ";
    B.display();
    cout<<endl<<"Matrix C(A+B) : ";
    C.display();
}
