#include<iostream>
using namespace std;

int main()
{
	int A[10], n, i, j, temp;
	
	cout<<"Enter the maximum number of elements of array: ";
	cin>>n;
	
	cout<<"Enter the elements of array:-\n";
	for(i=0; i<n; i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>A[i];
	}
	
	for (i=0; i<n-1; i++)
	{
		for (j=0; j<n-1-i; j++)
		{
			if (A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	
	cout<<"The sorted array is:-\n";
	for(i=0; i<n; i++)
	{
		cout<<A[i]<<"   ";
	}
}
