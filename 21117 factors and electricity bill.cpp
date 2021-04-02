// Write a C program to input electricity unit charges and calculate total     electricity bill according to the given condition:
    //For first 50 units Rs. 0.50/unit
    //For next 100 units Rs. 0.75/unit
    //For next 100 units Rs. 1.20/unit
     //For unit above 250 Rs. 1.50/unit
     //An additional surcharge of 10% is added to the bill
//WAP to accept number and print number of factors?
#include<iostream>
using namespace std;
void factors()
{
	int i,num;
	cout<<"enter number to display all  factors: ";
	cin>>num;
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			cout<<i<<"\t";
		}
	}
}
void electricity_bill()
{
	int units,surcharge;
	float bill;
	cout<<"enter units to calculate bill: ";
	cin>>units;
	if(units<=50)
	{
		bill=(units*0.50);
	}
	else if(units<=150)
	{
		bill=(units*0.50)+(units-50)*0.75;
	}
	else if(units<=250)
	{
		bill=(units*0.50)+(units-50)*0.75+(units-150)*1.20;
	}
	else if(units>250)
	{
		bill=(units*0.50)+(units-50)*0.75+(units-150)*1.20+(units-250)*1.50;
	}
	surcharge=(bill/100)*10;
	cout<<"float bill is: "<<bill<<"\n";
}
int main()
{
	int options;
	cout<<"enter options to execute the program: 1.factors 2.electricity_bill"<<"\n";
	cin>>options;
	switch(options)
	{
		case 1:
			{
				factors();
				break;
			}
		case 2:
			{
				electricity_bill();
				break;
			}
		default:
			{
			  cout<<"invalid option";	
			}
	}
return 0;
}

