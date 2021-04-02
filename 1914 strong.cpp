#include<iostream>
using namespace std;
void strong()
{
	int num,rem,fact=1,sum=0,temp;
	cout<<"enter number to find strong number or not: ";
	cin>>num;
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		while(rem>=1)
		{
			fact=fact*rem;
			rem--;
		}
		sum=sum+fact;
		fact=1;
		num=num/10;
	}
	if(sum==temp)
	{
		cout<<"strong number";
	}
	else
	{
		cout<<"not a strong number";
	}
}
int main()
{
	strong();
	return 0;
}
