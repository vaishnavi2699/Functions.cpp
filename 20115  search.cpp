#include<iostream>
using namespace std;
void search()
{
	int i,n,search,count=0,arr[100];
	cout<<"how many values do you want to enter: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter search element: ";
	cin>>search;
	for(i=0;i<n;i++)
	{
	    if(search==arr[i])
	  {
		count++;
		break;
	  }
    }
       if(count!=0)
      {
	   cout<<"yes";
      }
       else
      {
	    cout<<"no";
      }
}
int main()
{
	search();
	return 0;
}

