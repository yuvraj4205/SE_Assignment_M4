//Write a program of to sort the array using templates

#include<iostream>
using namespace std;

template<class T>
void sortArray(T arr[],int n)
{
    for(int i=0;i<n-1;i++)
	{
        int Index=i;
        for(int j=i+1;j<n;j++)
		{
            if(arr[j]<arr[Index])
			{
                Index=j;
            }
        }
        T temp=arr[Index];
        arr[Index]=arr[i];
        arr[i]=temp;
    }
}

template <class T>
void printArray(T arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}

main()
{
    int arr1[]={64,34,25,12,22,11,90};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    sortArray(arr1,n1);
    cout<<"Sorted array : ";
    printArray(arr1,n1);
}
