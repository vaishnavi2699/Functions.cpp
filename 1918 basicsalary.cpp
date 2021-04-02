//if basicsalary<=10000,hra=25%;da=11% find its grosssalry?
#include<iostream>
using namespace std;
void basicsalary()
{
	int basicsalary,hra,da,gross_salary;
	cout<<"enter basicsalary to check grosssalary: ";
	cin>>basicsalary;
	if(basicsalary<=10000)
	{
		hra=(basicsalary/100)*25;
		da=(basicsalary/100)*11;
		gross_salary=hra+da+basicsalary;
		cout<<"hra is: "<<hra<<"\n";
		cout<<"da is: "<<da<<"\n";
		cout<<"gross_salary: "<<gross_salary<<"\n";
	}
}
int main()
{
	basicsalary();
	return 0;
}
