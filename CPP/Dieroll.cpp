#include <iostream>
using namespace std;
int main()
{
	int x,y,nw;
	cin>>x>>y;
	if(x>y)
	{
		nw=6-x;
		switch(nw)
		{
			case 5: cout<<"1/1";break;
			case 2: cout<<"1/2";break;
			case 3: cout<<"2/3";break;
			case 4: cout<<"5/6";break;
			case 1: cout<<"1/3";break;
			case 0: cout<<"1/6";break;
		}
		
	}
	else
	{
		nw=6-y;
		switch(nw)
		{
			case 5: cout<<"1/1";break;
			case 2: cout<<"1/2";break;
			case 3: cout<<"2/3";break;
			case 4: cout<<"5/6";break;
			case 1: cout<<"1/3";break;
			case 0: cout<<"1/6";break;
		}
		
	}
}
