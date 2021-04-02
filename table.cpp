// Write a C program to print multiplication table of any number.
#include<iostream>
using namespace std;
int main()
{
	int i=1,num,sum=0;
	cout<<"enter any number to print multiplication of the table";
	cin>>num;
	for(i=1;i<=10;i++)
	{
	    sum=sum*num;
		cout<<"Sum is: "<<sum;	
	}
	
}
