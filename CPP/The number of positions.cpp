#include<iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(b+c>=a || c==0)
	{
		cout<<a-b;
	}
	else
	{
		cout<<c+1;
	}
	
}
