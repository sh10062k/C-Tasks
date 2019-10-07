//Printing the ASCII code of an input character.

#include<iostream>
using namespace std;

int main()
{
	char c;
	cout<<"Enter a character to print its ASCII code: ";
	cin>>c;
	cout<<"\nThe ASCII code of "<<c<<" is: "<<int(c);
	return 0;
}
