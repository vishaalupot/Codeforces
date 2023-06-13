#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n=0,no=0;
	cin>>n;
	
	while(n--)
	{
		cin>>no;
		set<int>s;
		vector<int>v;
		int a=0;
		for(int i=0;i<no;i++)
		{
			cin>>a;
			s.insert(a);
			v.push_back(a);
		}
		
		int alen=s.size(),blen=v.size();
		
		//cout<<blen-(blen-alen)*2;
		
		int nw=blen-alen;
		
		if(nw%2!=0)
		{
			nw++;
		}

		cout<<blen-nw<<endl;
		nw=0;
		
	}
	
}
