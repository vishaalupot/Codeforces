#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	int n,a,b,max=0,k=0,cntr=0,l=0,cntr1=0,d[10000];
	string s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		cin>>s;
		for(int j=0;j<30;j++)
		{
			l++;
			if(s[j]=='1')
			{
				cntr++;
				cntr1++;
			}		
			else if(s[j]=='0')
			{
				d[k]=cntr1;
				k++;
				cntr1=0;
			}
			else if(l==29)
			{
				if(s[j])
				cntr1++;
				d[k]=cntr1;
				cout<<"f";
				k++;
				cntr1=0;
			}
		}
		sort(d,d+k);
		cout<<d[k-1];
		//cout<<(cntr*a)+(d[k-1]*b)<<endl;
		cntr=cntr1=max=0;
		
	}
}
