#include<iostream>
using namespace std;
int main()
{
	unsigned long long int a[4],b=0;
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
	}
	sort(a,a+4);
	for(int i=0;i<3;i++)
	{
			if(a[i]==a[i+1])
			{
				b++;
			}
	}
	cout<<b;
}
