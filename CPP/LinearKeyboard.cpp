#include <iostream>
#include <iterator>
#include <map>
#include <bits/stdc++.h>
using namespace std;
void pr(string st,string str)
{
	map <char,int> m;
	int x=st.length();
	int xr=str.length(),b=0,sum=0;
	for(int i=0;i<x;i++)
	{
		char str=st[i];
		m.insert(pair<char, int>(str, i+1));
	}
	for(int i=0;i<xr-1;i++)
	{
		auto it=m.find(str[i]);
		auto itr=m.find(str[i+1]);
        //cout<<it->second<<endl;
        int c=it->second;
        int d=itr->second;
        sum=sum+abs(c-d);
	}
	cout<<sum<<endl;
}

int main()
{
	string s,n;
	int no;
	cin>>no;
	while(no--)
	{
	cin>>s;
	cin>>n;
	pr(s,n);
	}
}
