#include<iostream>
using namespace std;
int main()
{
    int a,b,n,m,p;
    cin>>a>>b;
    n=b;
    m=a;
    if(a<b)
    {
        n=a;
        m=b;
    }
    cout<<n<<" "<<(m-n)/2;
}