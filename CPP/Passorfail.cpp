#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	int n=0,a=0,b=0,c=0,m=0,l=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
			cin>>a>>b>>c;
			m=b*3;
			l=a-b;
			if((m-l)>=c)
			{
				cout<<"PASS"<<endl;
			}
			else
			{
				cout<<"FAIL"<<endl;
			}
	}
}
