//Checking if a given year is Leap Year

#include<iostream>
using namespace std;

int main()
{
	int yr;
	
	cout<<"Enter a year to check if it's leap: ";
	cin>>yr;
	
	if((yr%4)==0)
		cout<<yr<<" is a leap year.";
	else
		cout<<yr<<" is not a leap year.";
		
	return 0;
}
