#include<iostream>
using namespace std;
void armstrong()
{
	int num,rem,sum=0,temp;
    cout<<"enter number to check armstrong number or not: ";
    cin>>num;
    temp=num;
    while(num!=0)
    {
    	rem=num%10;
    	sum=sum+(rem*rem*rem);
    	num=num/10;
	}
	if(sum==temp)
	{
		cout<<"armstrong number";
	}
	else
	{
		cout<<"not a armstrong number";
	}
}
int main()
{
armstrong();
return 0;	
}
