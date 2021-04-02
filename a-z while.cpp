// Write a C program to print all alphabets from a to z. - using while loop
#include<iostream>
using namespace std;
int main()
{
	char ch='a';
	cout<<"enter alphabet ";
	cin>>ch;
	while(ch<='z')
	{
		cout<<ch<<"\t";
		ch++;
	}
	
	
}
