//Printing the sum of a given array

#include<iostream>
using namespace std;

main()
{
	int A[10], i, j, sum=0;
	
	cout<<"Enter the maximum number of elements in array: ";
	cin>>j;
	
	cout<<"\nEnter the elements of Array:-"<<endl;
	for(i=0; i<j; i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>A[i];
	}
	
	for(i=0; i<j; i++)
	{
		sum=sum+A[i];
	}
	cout<<"\nThe sum of elements of array that you entered is: "<<sum;
	return 0;
	
}
