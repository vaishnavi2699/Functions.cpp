#include<iostream>
using namespace std;
void primenumbers()
{
	int arr[100],prime[100],i,j,n,x=0,count=0;
	cout<<"enter number: ";
	cin>>n;
    for(i=0;i<=n;i++)
	{
		cin>>arr[i];
	    while(j<=n)
    {
	    for(i=1;i<=j;i++)
    {
	    if(j%i==0)
	  {
        count++;
	  }
    }
    if(count==2)
    {
   	cout<<j<<"\t";
    }
    j++;
    count=0;
  }
}
    cout<<"prime array values are: "<<"\n";
    for(i=0;i<x;i++)
    {
   	cout<<prime[i]<<"\t";
    }
}
int main()
{
	primenumbers();
	return 0;
}

