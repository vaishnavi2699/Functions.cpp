//write a function to print alternate primenumbers between 1-n? //2,3,5,7,11,13,17,19
#include<iostream>c 
using namespace std;
void primenumbers()
{
	int i=1,n,count=0,j=1,pc=0;
	cout<<"enter n value: ";
	cin>>n;
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
   	     pc++;
   	     if(pc%2!=0)
         {
       	    cout<<j<<"\t";
	     }
       }
       j++;
       count=0;
   }  
}
int main()
{
	primenumbers();
	return 0;
}
    
	

