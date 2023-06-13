#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;
int main()
{
	int a,sum=0,sum1=0;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++)
	{
		cin>>b[i];
		sum=sum+b[i];
	}
	a=a+1;
	sum1=sum;
	while(sum1%a!=0)
	{
		sum1=sum1+1;
	} 
	if(sum==sum1)
	cout<<sum1;
	else
	cout<<sum1-sum;
	
}
