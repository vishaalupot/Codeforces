#include<iostream>
using namespace std;
int main()
{
    int sum=0,n=0,max=0,c=0,X=0,nw=0;
    string s;
    cin>>s;
    n=s.length();
    max=0;
    for(int i=n-1;i>=0;i--)
    {
        
             switch(s[i])
          {
                  case 'I': c=1;break;
                  case 'V': c=5;break;
                  case 'L': c=50;break;
                  case 'C': c=100;break;
                  case 'D': c=500;break;
                  case 'M': c=1000;break;
                  case 'X': c=10;break;
          } 
      
      if(c>=max )
      {
        sum=sum+c;
        max=c;
      }
      else
      {
		nw=nw+(max-c);
		sum=sum-c;
      }
      X++;
    }
    cout<<sum<<" ";
}
