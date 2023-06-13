#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	int n,new1,new2,temp,temp1,x;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		x=s.length();
		for(int j=x-1;x>=0;j--)
		{
			if(s[j]=='5')
			{
				temp=j;
				new1=(x-1)-(temp+1);
				for(int l=j;l>=0;l--)
				{
					if(s[l]=='2')
					{
						cout<<new1+(temp-l)+1;
						break;
					}
					else if(s[l]=='7')
					{
						cout<<new1+(temp-l)+1;
						break;
					}
				}
			}
			else if(s[j]=='0')
			{
				temp1=j;
				new2=(x-1)-(temp1+1);
				for(int k=j;k>=0;k--)
				{
					if(s[k]=='2')
					{
						cout<<new2+(temp1-k)+1;
						break;
					}
					else if(s[k]=='7')
					{
						cout<<new2+(temp1-k)+1;
						break;
					}
				}
			}
		}
		
	}
}
