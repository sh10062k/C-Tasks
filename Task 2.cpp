//Checking if a number is Even or Odd

#include<iostream>
using namespace std;

int main()
{
	int a;
	
	cout<<"Enter a number to check if it's even or odd: ";
	cin>>a;
	
	if ((a%2)==0)
		cout<<a<<" is Even.";
	else
		cout<<a<<" is Odd.";
	
	return 0;
}
