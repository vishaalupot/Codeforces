
#include<iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;
int main()
{
	
		string s;
		int n,i=0;
		cin>>s;
		n=s.length();
		while(i!=n)
		{
			if(s[i]=='H' || s[i]=='Q' || s[i]=='9' || s[i]=='+' )
			{
				cout<<"YES";
				exit(0);
			}
			else if(s[i]=='7'|| s[i]=='8'|| s[i]=='5' || s[i]=='4')
			{
				if(s[i]=='7' && s[i+1]=='2')
				{
					cout<<"YES";
					exit(0);
				}
				else if(s[i]=='8' && s[i+1]=='1')
				{
					cout<<"YES";
					exit(0);
				}
				else if(s[i]=='5' && s[i+1]=='7')
				{
					cout<<"YES";
					exit(0);
				}

				
			}
			i++;
			
		}
		cout<<"NO";
		
}
