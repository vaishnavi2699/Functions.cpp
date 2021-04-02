#include<iostream>
using namespace std;
void palindrome()
{
	int num,rev=0,rem,temp;
	cout<<"enter number to find palindrome number or not";
	cin>>num;
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
     if(rev==temp)
    {
	cout<<"palindrome number";
    }
     else
    {
	cout<<"not a palindrome number";
    }
}
int main()
{
	palindrome();
	return 0;
}


