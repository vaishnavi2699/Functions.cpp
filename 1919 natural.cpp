//WAP in functions nd accept number and print naturalnumbers betwwen 1-n?
#include<iostream>
using namespace std;
void natural()
{
	int i=1,num;
	cout<<"enter number: ";
	cin>>num;
	while(i<=num)
	{
		cout<<i<<"\n";
		i++;
	}
}
void sum()
{
	int i=1,num,sum=0;
	cout<<"enter number to find sum of digits";
	cin>>num;
	while(i<=num)
	{
		sum=sum+i;
		i++;
	}
cout<<"sum of digits: "<<sum<<"\n";
}
int main()
{
	natural();
	sum();
	return 0;
}
