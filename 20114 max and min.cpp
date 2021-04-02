#include<iostream>
using namespace std;
void max()
{
	int num,i,max=0,arr[100];
	cout<<"How many values do you want to enter: ";
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout<<"max number is: "<<max;
}
void min()
{
	int num,i,min=0,arr[100];
	cout<<"How many values do you want to enter: ";
	cin>>num;
	cin>>min;
     for(i=0;i<num;i++)
	{
		cin>>arr[i];
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"min value is: "<<min;
}
int main()
{
	int options;
	cout<<"enter options to execute the program: 1.max 2.min"<<"\n";
	cin>>options;
	switch(options)
	{
		case 1:
		{
			max();
			break;
		}
		case 2:
		{
			min();
			break;
		}
	}
return 0;
}
