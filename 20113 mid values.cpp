#include<iostream>
using namespace std;
void midvalues()
{
	int i,num,arr[100];
	cout<<"how many values do u want to enter: ";
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	if(num%2==0)
	{
		cout<<"mid values are: "<<arr[(num/2)-1]<<"and"<<arr[num/2];
	}
	else
	{
		cout<<"mid value is: "<<arr[num/2];
	}
}
int main()
{
	midvalues();
	return 0;
}
