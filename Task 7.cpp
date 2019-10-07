//Swapping two numbers using functions

#include<iostream>
using namespace std;

void SWAP(int num1, int num2);

int main()
{
	int num1, num2;
	
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
	SWAP(num1, num2);

}
void SWAP(int num1, int num2)
{
	int temp;
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout<<"After swapping, first number becomes "<<num1<<" and second number becomes "<<num2;
}
