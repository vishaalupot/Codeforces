#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0;
	cin>>a>>b;
	for(int j=a+1;j<=b;j++)
	{
		for(int i=2;i<=100;i++)
		{
			if(j%i==0)
			{
				c++;
			}
		}
		if(c==1 && j<b)
		{
		 cout<<"NO";
		 exit(0);
		}
		else if(c==1 && j==b)
		{
		 cout<<"YES";
		 exit(0);
		}
		c=0;
		
	}
	cout<<"NO";
}
