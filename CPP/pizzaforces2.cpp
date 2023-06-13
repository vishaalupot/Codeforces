#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned long long int a,n,nw;
	cin>>n;
	for(int j=0;j<n;j++)
	{
	cin>>a;
	nw=(a*2)+(a/2);
	
	if(nw<=15)
	{
		cout<<"15"<<endl;
	}
	else
	{
	while(nw%5!=0)
	{
	nw=nw+1;
	}
	cout<<nw<<endl;
	}
	}
}


