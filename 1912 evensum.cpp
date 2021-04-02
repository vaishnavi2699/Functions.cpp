#include<iostream>
using namespace std;
void evensum()
{
	int i=1,n,evensum=0;
	cout<<"enter number to check sum of even values: ";
	cin>>n;
	while(i<=n)
	{
		if(i%2==0)
		{
			evensum=evensum+i;
        }
        i++;
	}
	cout<<"evensum is: "<<evensum<<"\n";
}
void oddsum()
{
	int i=1,n,oddsum=0;
	cout<<"enter number to check sum of odd values: ";
	cin>>n;
	while(i<=n)
	{
		if(i%2!=0)
		{
			oddsum=oddsum+i;
        }
        i++;
	}
	cout<<"oddsum is: "<<oddsum<<"\n";
}
int main()
{
	evensum();
	oddsum();
	return 0;
}
