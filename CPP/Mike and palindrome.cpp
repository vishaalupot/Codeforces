#include<iostream>
using namespace std;
int main()
{
    char a[15];
    int k=0,n,x;
    cin>>a;
    x=a.length();
    n=x/2;
    if(x%2==0)
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=n;j<x;j++)
            {
            if(a[i]!=a[j])
            {
                k++;
            }
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=n;j<x;j++)
            {
            if(a[i]!=a[j])
            {
                k++;
            }
            }
        }  
    }
    if(k==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    

}
