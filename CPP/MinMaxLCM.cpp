#include <iostream>
using namespace std;
int main() 
{
	long int n=0,a=0,b=0;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(a==b)
		{
			cout<<"2"<<endl;
		}
		else if(b%2==0)
		{
			cout<<(abs(b-a)+1)*2<<endl;
		}
		else if(b%2!=0)
		{
			cout<<abs(b-a)*2<<endl;
		}
	}
}
