#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> a;
	a.push(8);
	a.push(20);
	a.push(6);
	a.push(11);
	
	while(!a.empty())
	{
	 
	 int m=a.top();
	 cout<<m;
	 
	 a.pop();
	}
}
