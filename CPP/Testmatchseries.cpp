#include <iostream>
using namespace std;
int main()
{
	int n,a[10000],c=0,c1=0;
	cin>>n;
	while(n--)
	{
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
			if(a[i]==2)
			{
				c++;
			}
			else if(a[i]==1)
			{
				c1++;
			}
		}
		if(c==c1)
		{
			cout<<"DRAW"<<endl;
		}
		else if(c>c1)
		{
			cout<<"ENGLAND"<<endl;
		}
		else
		{
			cout<<"INDIA"<<endl;
		}
		c=c1=0;
	}
}
