//Write a function to display below options?
#include<iostream>
using namespace std;
void hallticketnum()
{
	int num,marks;
	cout<<"enter your hallticket number: "<<"\n";
	cin>>num;
	cout<<"enter your marks to check pass or fail: "<<"\n";
	cin>>marks;
	if(marks>=100)
	{
		cout<<"pass"<<"\n";
	}
	else
	{
		cout<<"fail";
	}
	
}
void viewoptions()
{
	int options;
	cout<<"choose your options: "<<"\n";
	cout<<"1.hallticket num"<<"\n";
	cout<<"2.course"<<"\n";
	cin>>options;
	switch(options)
	{
		case 1:
			{
				hallticketnum();
				break;
			}
	}
}
int main()
{
	viewoptions();
	return 0;
}
