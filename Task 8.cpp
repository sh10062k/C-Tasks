#include<iostream>
using namespace std;
#include<string>

int main()
{
	string S1, S2, S11, S22; int i, j, m;
	
	cout<<"Enter first string: ";
	cin>>S1;
	cout<<"Enter second string: ";
	cin>>S2;
	
	S11 = S1;
	S22 = S2;
	if (S1.length() != S2.length())
		cout<<S1<<" and "<<S2<<" are not Anagram.";
	else
	{
		for (i=0; i<S1.length(); i++)
		{
			for (j=i+1; j<S1.length(); j++)
			{
				if (S1[i]>S1[j])
				{
					m = S1[i];
					S1[i] = S1[j];
					S1[j] = m;
				}
			}
		}
		
		for (i=0; i<S2.length(); i++)
		{
			for (j=i+1; j<S2.length(); j++)
			{
				if (S2[i]>S2[j])
				{
					m = S2[i];
					S2[i] = S2[j];
					S2[j] = m;
				}
			}
		}
		for (i=0; i<S1.length(); i++)
		{
			if(S1[i]!=S2[i])
			{
				cout<<S11<<" and "<<S22<<" are not Anagram.";
				return 0;
			}	
		}
		cout<<S11<<" and "<<S22<<" are Anagram.";
	}
}
