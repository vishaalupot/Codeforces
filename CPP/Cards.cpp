#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n=0,sum=0,nw=0,m=0;

	vector<int> a;
  
    for (int i = 1; i <= 5; i++)
        a.push_back(i);
  
    cout << "Output of begin and end: ";
    for (auto i = a.begin(); i != a.end(); ++i)
        cout << *i << " ";
        
        
	/*for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}*/
	m=n/2;
	nw=(sum/(m));
	/*for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{	
			if(a[i]+a[j]==nw)
			{  
			   
			    cout<<i+1<<" "<<j+1<<endl;
				a[j]=0;
				
				break;
			}
		}
	}*/
	
}
