#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	
	cin>>n;
	
	while(n--)
	{
		cin>>s;
		
		if(s.length()<10)
		{
			cout<<s;
		}
		else
		{
			cout<<s[0];cout<<s.length()-2;cout<<s[s.length()-1];
		}
		
	}
}
