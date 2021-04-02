#include<iostream>
using namespace std;
void ascending()
{
	int num,i,j,temp,arr[100];
	cout<<"how many values do you want to enter: ";
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<num;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
void descending()
{
	int num,i,j,temp,arr[100];
	cout<<"how many values do you want to enter: ";
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<num;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
int main()
{
	int options;
	cout<<"enter options to execute the program 1.ascending 2.desending"<<"\n";
	cin>>options;
	switch(options)
	{
		case 1:
		{
		  ascending();
		  break;
	    }
		case 2:
		{
		  descending();
		  break;
	    }
	}
return 0;
}

