//Converting a string into all lowercase letters

#include<iostream>
using namespace std;
#include<string>

int main()
{
	string str1; int i;
	
	cout<<"Enter a string to convert it into lowercase: ";
	cin>>str1;
	
	for(i=0; i<str1.length(); i++)
	{
		if (str1[i]>=65 && str1[i]<=90)
			str1[i] = str1[i]+32;	
	}
	cout<<"\nThe converted string is: "<<str1;
}
