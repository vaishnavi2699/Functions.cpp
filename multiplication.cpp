//write a program to print multiplication of the any number?
#include<iostream>
using namespace std;
int main()
{
	int i,num;
	cout<<"enter number to find multiplication of the table: ";
	cin>>num;
	for(i=1;i<=10;i++)
	{
		cout<<num<<"*"<<i<<"="<<num*i<<"\n";
	}
return 0;
}
