#include <iostream> 
#include <iterator>
#include <list> 
 using namespace std;
int main() 
{ 
	list <char> l1, l2;
	string s;
	cin>>s;
	int x=s.length();
	for(int i=0;i<x;i++)
	{
		char s1=s[i];
		if(s1!=']' && s1!='[' && s1!=',' )
		{
			l1.push_back(s1);
		}
	}
	l1.sort();
	cout<<"[";
	for(auto it=l1.begin();it!=l1.end();it++)
	{
		cout<<*it;
	}
	cout<<"]";
} 

