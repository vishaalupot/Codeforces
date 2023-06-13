#include<iostream>
#include <bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    set<pair<int,int>>p1;
	p1.insert(make_pair(2,3));
	p1.insert(make_pair(5,7));
	
	for(int &i : p1)
	{
     cout<<(*i).first;
	}
	
	
	
	
}
