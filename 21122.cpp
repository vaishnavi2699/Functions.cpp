//Function with parameters and with return value.
#include<iostream>
using namespace std;
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int c;
    c=add(10,20);
    cout<<c;
}
