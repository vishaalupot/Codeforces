#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n,pos=-1,pos1=-1,x=0;
	int a[100],b[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		for(int j=0;j<x;j++)
		{
			cin>>a[j];
			b[j]=a[j];
		}
	
	sort(b,b+x);
	int m=x;
	pos=pos1=-1;
	for(int k=0;k<x || m>=0;k++)
	{
		if((a[k]==b[0] || a[k]==b[x-1]) && pos==-1)
		{
		pos=k;
		//cout<<a[k];
		}
		if((a[m]==b[0] || a[m]==b[x-1]) && pos1==-1)
		{
		pos1=m;
		//cout<<a[m];
		}
		m--;
	}
	//cout<<pos<<" "<<pos1<<" "<<b[0];
	if(pos1-pos < ((x-1)-pos1) || ((x-1)-pos1)==0)
	{
		if(pos>=(x/2) || pos1>=x/2)
		{
			cout<<(x-pos1)+(pos1-pos)<<endl;
		}
		else
		cout<<pos+1+(pos1-pos)<<endl;
	}
	else
	{
		cout<<pos+((x-1)-pos1)+2<<endl;
	}
	
}
}
