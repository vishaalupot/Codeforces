
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,a1,a2,a3,a4,m,n;
    cin>>a>>b>>c;
    a1=2*a+2*b;
    a2=2*a+2*c;
    a3=2*b+2*c;
    a4=a+b+c;
    n=a2;
    m=a4;
    if(a1<a2)
    {
        n=a1;
    }
    if(a3<a4)
    {
        m=a3;
    }
    if(n<m)
    {
        cout<<n;
    }
    else
    {
        cout<<m;
    }
}