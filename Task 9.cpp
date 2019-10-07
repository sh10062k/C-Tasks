//Converting a given number of days into years, weeks and days.

#include<iostream>
using namespace std;

int main()
{
	int days, weeks, years;
	
	cout<<"Enter the number of days: ";
	cin>>days;
	
	years = days/365;
	weeks = days%365;
	days = weeks%7;
	weeks = weeks/7;
	
	cout<<"\nGiven number of days can be written as "<<years<<" Years"<<", "<<weeks<<" Weeks and "<<days<<" days.";
	
	return 0;
}
