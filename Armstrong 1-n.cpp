// Write a C program to print all Armstrong numbers between 1 to n.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i=1,num,rem,sum=0,digits=0,temp=0;
	cout<<"enter n number: ";
	cin>>num;
	temp=num;
		while(num!=0)
	{
		rem=num%10;
		digits++;
		num=num/10;
	}
	num=temp;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+pow(rem,digits);
		num=num/10;
	}
	num=temp;
	if(sum==num)
	{
		cout<<num;
	}	
	
return 0;
}
