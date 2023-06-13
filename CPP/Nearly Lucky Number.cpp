#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int c=0;
	unsigned long long int n=0;
	string s;
	cin>>s;
	n=s.length();
	for(int i=0;i<n;i++)
	{
	if(s[i]=='7' || s[i]=='4')
	{
	c++;
	}
	}
	if(c==4 || c==7)
	{
	cout<<"YES";
	}
	else
	{
	cout<<"NO";
	}
}
