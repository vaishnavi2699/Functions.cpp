#include<iostream>
using namespace std;
void estrong()
{
	int num,rem,sum=0,temp,fact=1;
	cout<<"enter number to check strong number or not"<<"\n";
	cin>>num;
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		while(rem>0)
		{
			fact=fact*rem;
			rem--;
		}
	sum=sum+fact;
	fact=1;
	num=num/10;
	}
	if(sum==temp)
	{
		cout<<"strong number"<<"\n";
	}
	else
	{
		cout<<"not a strong number"<<"\n";
	}
}
void perfect()
{
	int num,sum=0,i;
	cout<<"enter number to check perfect number or not"<<"\n";
	cin>>num;
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	
	if(sum==num)
	{
		cout<<"perfect number";
	}
	else
	{
		cout<<"not a perfect number";
	}
}
int main()
{
	  int options;
      cout<<"enter options to execute the program :1.strong number 2.perfect number"<<"\n";
      cin>>options;
      switch(options)
      {
      	 case 1:
      	 {
		    estrong();
		    break;
         }
	    case 2:
	     {
	     	perfect();
	     	break;
	     }
	  }
return 0;
}

