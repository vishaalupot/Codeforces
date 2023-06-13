#include <iostream>
#include <string>
using namespace std;
int main()
{	
	int x,y,n;
	cin>>x>>y>>n;
	int a[x][y];
	int b[1000][1000]={{0}};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
		b[a[i][0]-1][a[i][1]-1]=3;
		//cout<<b[a[i][0]][a[i][1]];
	}
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			if(b[i][j]==3)
			{
				c++;
			}
			if(c==2)
			{
				if(b[j][i]==3 && b[])
			}
		} 
		cout<<endl;
	}
}
