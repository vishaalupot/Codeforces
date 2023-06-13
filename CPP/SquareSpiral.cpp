#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		int l=-1,r=a+1,c1=0,c2=a+2,l2=-1,r2=a,c3=1,c4=a;
		for(int i=0;i<(a/2)+1;i++)
		{
			
			for(int i=0;i<(a);i++)
			{
				if(c1<=l && c1==i)
				{
					cout<<" ";
					c1=c1+2;
				}
				else
				{
				cout<<"#";
				}
			}
			for(int i1=0;i1<(a)+1;i1++)
			{
				if(c2<a+1 && c2==i1)
				{
					cout<<" ";
					c2=c2+2;	
				}
				else
				{
					cout<<"#";
				}		
			}
			l=l+2;
			c1=0;
			r=r-2;
			c2=r;
			cout<<endl;
			
			
			for(int i2=0;i2<a;i2++)
			{
				if(c3<=l2 && c3==i2)
				{
					cout<<"#";
					c3=c3+2;
				}
				else
				{
					cout<<" ";
				}
			}
			for(int i3=0;i3<a+1;i3++)
			{
				
				if(c4<a+1 && c4==i3)
				{
					
					if(c4==0)
					{
						cout<<" ";
						c4=c4+2;
					}
					else
					{
					cout<<"#";
					c4=c4+2;
					}
					
					
				}
				
				else
				{
					cout<<" ";
					
				}
				
			}
			c3=1;
			l2=l2+2;
			r2=r2-2;
			c4=r2;
			cout<<endl;
		}
		
		//SECOND HALF OF THE PATTERN
		
		int length1=a-1,length2=a-2,mid=4,length3=a-1,length4=a-2,mid1=4;
		
		for(int i=0;i<(a/2);i++)
		{
			for(int i=0;i<length1;i++)
			{
				if(i%2==0)
				{
					cout<<" ";
				}
				else
				{
					cout<<"#";
				}
			}
			for(int i=0;i<mid;i++)
			{
				cout<<"#";
			}
			cout<<" ";
			for(int i=0;i<length2;i++)
			{
				if(i%2==0)
				{
					cout<<"#";
				}
				else
				{
					cout<<" ";
				}
			}
			length1=length1-2;
			length2=length2-2;	
			mid=mid+4;
			cout<<endl;
			
			
			
			for(int i=0;i<length3;i++)
			{
				if(i%2==0)
				{
					cout<<" ";
				}
				else
				{
					cout<<"#";
				}
			}
			for(int i=0;i<mid1;i++)
			{
				cout<<" ";
			}
			cout<<" ";
			for(int i=0;i<length4;i++)
			{
				if(i%2==0)
				{
					cout<<"#";
				}
				else
				{
					cout<<" ";
				}
			}
			length3=length3-2;
			length4=length4-2;	
			mid1=mid1+4;
			cout<<endl;
	}
}
}

