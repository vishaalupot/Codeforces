#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x;
	double y,z;
	cin>>x;
	cin>>y;
	if(x%5==0 && (x+0.5)<y)
	{
		z=y-x-0.5;
		cout<<std::fixed<<std::setprecision(2)<<z;	
	}
	else
	{
		cout<<std::fixed<<std::setprecision(2)<<y;
	}
}
