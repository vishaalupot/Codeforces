#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>a;
	int n=0,val=0,sum=0,cntr=0;
	cin>>n;
	while(n--)
	{
		int n1,n2;
		cin>>n1>>n2;
		
		for(int i=0;i<n1;i++)
		{
			cin>>val;
			a.push_back(val);
		}
		sort(a.begin(),a.end(),greater<int>());
		for(auto i: a)
		{
		    if(sum<=n2)
		    {
			sum=sum+i;
			cntr++;
		    }
		    
		}
		 cout<<"f  "<<n1-cntr<<endl;
		 sum=0;cntr=0;
	}
}
