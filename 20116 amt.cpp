//WAP to accept amount and print number of notes? 100,200,500,1000,2000;
#include<iostream>
using namespace std;
void amt()
{ 
   int amt,a,b,c,d,e;
   cout<<"enter amt to print number of notes: ";
   cin>>amt;
   if(amt%100==0)
   {
   	     if(amt>=2000)
   	    {
   	 	a=amt/2000;
   	 	amt=amt-(a*2000);
   	 	cout<<"2000 rupees notes are: "<<a<<"\n";
   	    }
   	     if(amt>=1000)
   	    {
   	 	b=amt/1000;
   	 	amt=amt-(b*1000);
   	 	cout<<"1000 rupees notes are: "<<b<<"\n";
   	    }
   	     if(amt>500)
   	    {
   	 	c=amt/500;
   	 	amt=amt-(c*500);
   	 	cout<<"500 rupees notes are: "<<c<<"\n";
   	    }
   	     if(amt>=200)
   	    {
   	 	d=amt/200;
   	 	amt=amt-(d*200);
   	 	cout<<"200 rupees notes are: "<<d<<"\n";
   	    }
   	     if(amt>=100)
   	    {
   	 	e=amt/100;
   	 	amt=amt-(e*100);
   	 	cout<<"100 rupees notes are: "<<e;
   	    }
   	}
   	     else
   	    {
   		cout<<"invalid amount";
        }
}
 int main()
 {
 	amt();
 	return 0;
 }
