#include <iostream>
using namespace std;
int check(int c,int d);
int main() {
	float n,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin >>a>>b;										
	c=check(a,b);
	}
	//cout<<c;
}
int check(float c,float d)
{
	float m=0;
	float n;
	if((c/d)>=1.6 && (c/d)<=1.7)
	{
		m++;
	}
	n=c/d;
	cout<<n;
	return m;
}
