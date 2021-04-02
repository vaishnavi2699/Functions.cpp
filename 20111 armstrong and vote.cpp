#include<iostream>
using namespace std;
void armstrong()
{
	int num,rem,temp,sum=0;
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
void vote()
{
	int age,i;
	cout<<"enter age to check eligible or not: ";
	cin>>age;
	if(age>=18)
	{
		cout<<"eligible for voting";
	}
	else
	{
		cout<<"not eligible for voting";
	}
}
int main()
{
	int options;
	cout<<"enter options to execute the program: 1.armstrong 2.vote"<<"\n";
	cin>>options;
	switch(options)
	{
		case 1:
		{
		  armstrong();
		  break;
	    }
		case 2:
		{
		  vote();
		  break;
	    }
	}
return 0;
}

