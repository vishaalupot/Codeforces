#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	unsigned long long int n,a,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		m=a-1;
		if(m==0)
		cout<<m<<" "<<a<<endl;
		else
		cout<<"-"<<m<<" "<<a<<endl;
		
	}
}
