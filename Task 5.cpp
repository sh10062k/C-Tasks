//Finding largest and smallest element in array

#include<iostream>
using namespace std;

int main()
{
	int A[10], n, i, ans;
	
	cout<<"Enter the maximum number of elements of array: ";
	cin>>n;
	
	cout<<"Enter the elements of array:-\n";
	for(i=0; i<n; i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>A[i];
	}
	
	//For finding the largest element
	ans=A[0];
	for(i=1; i<n; i++)
	{
		if (A[i]>ans)
			ans=A[i];
	}
	cout<<"\nThe largest element of this array is: "<<ans;
	
	//For finding the smallest element
	ans=A[0];
	for(i=1; i<n; i++)
	{
		if (A[i]<ans)
			ans=A[i];
	}
	cout<<"\nThe largest element of this array is: "<<ans;
	
}
