#include<iostream>
using namespace std;
void factors()
{
	int num,i;
	cout<<"enter number to check number of factors: ";
	cin>>num;
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			cout<<i<<"\t";
		}
	}
}
int main()
{
	factors();
	return 0;
}
