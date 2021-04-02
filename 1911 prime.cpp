#include<iostream>
using namespace std;
void isprime()
{
	int num,i,count=0;
	cout<<"enter number to check prime or not: ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"prime number"<<"\n";
	}
	else
	{
		cout<<"not a prime number"<<"\n";
	}
}
int main()
{
	isprime();
	return 0;
}

