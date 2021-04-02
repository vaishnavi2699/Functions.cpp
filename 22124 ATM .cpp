//write a functions to display deposit amt,withdraw amt and bal enq,exit?
#include<iostream>
using namespace std;
void viewoptions();
void validate();
void deposit();
void withdraw();
void num_of_notes(int amt);
int bal=5000,pincount=1,wcount=1;  //Global variable;
void validate()
{
	int pin;
	cout<<"enter pin number: ";
	cin>>pin;
	if(pin==5678)
	{
		viewoptions();
	}
	else
	{
		pincount++;
		if(pincount<=3)
		{
		cout<<"wrong pin,try again"<<"\n";
		validate();	
		}
		else
		{
			cout<<"your card is blocked for the one day";
		}
		
	}
}
void Deposit()
{
	int amt;
	cout<<"Enter Deposit amt: ";
	cin>>amt;
	if(amt%100==0)
	{
		if(amt<=40000)
		{
		bal=bal+amt;
	    cout<<"available balance is : "<<bal<<"\n";	
		}
		else
		{
			cout<<"Deposit limit 40000 only";
		}
	}
	else
	{
		cout<<"please enter multiple of 100 only"<<"\n";
	}
	
}
void num_of_notes(int amt)
{
	int a,b,c;
	if(amt>=2000)
	    {
			a=amt/2000;
			amt=amt-(a*2000);
			cout<<"2000 rupees notes are: "<<a<<"\n";
		}
		if(amt>=500)
		{
			b=amt/500;
			amt=amt-(b*500);
			cout<<"500 rupees notes are: "<<b<<"\n";
		}
		if(amt>=100)
		{
			c=amt/100;
			amt=amt-(c*100);
			cout<<"100 rupees notes are: "<<c<<"\n";
		}
	
}
void withdraw()
{
	int amt;
	cout<<"enter withdraw amt";
	cin>>amt;
	if(amt%100==0)
	{
		if(amt<=20000)
		{                              //2000,1000,500,100;
			if(amt<=bal)
			{
		       bal=bal-amt;
		       num_of_notes(amt);
			   wcount++;
	           cout<<"available balance is : "<<bal<<"\n";		
			}
	    	else
			{
				cout<<"Insufficient funds"<<"\n";
			}
		}
		else
		{
			cout<<"withdraw limit 20000 only"<<"\n";
		}
	    
	}
	else
	{
	cout<<"please enter multiplies of 100 only";	
	}
}
void viewoptions()
{
	int option;
	cout<<"choose your option: "<<"\n";
	cout<<"1.Deposit"<<"\n";
	cout<<"2.withdraw"<<"\n";
	cout<<"3.bal enq"<<"\n";
	cout<<"0.EXIT"<<"\n";
	cin>>option;
	switch(option)
	{
		case 1:
			{
				Deposit();
				viewoptions();
				break;
				
			}
		case 2:
			{
				if(wcount<=3)
				{
				withdraw();
				}
				else
				{
					cout<<"withdraw limit is over for the day"<<"\n";
				}
				viewoptions();
				break;
				
			}
		case 3:
			{
			cout<<"available balance is : "<<bal;		
			}
	}
}
int main()
{
	validate();
	return 0;
}
	

