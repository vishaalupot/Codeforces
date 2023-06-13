#include<iostream>
using namespace std;
int main()
{
	string s;
	int n=0;
	cin>>s;
	sort(s.begin(),s.end());
	n=s.length();
	for(int i=(n/2);i<n;i++)
	{
		cout<<s[i];
		if(i<(n-1))
		cout<<"+";
	}
}
