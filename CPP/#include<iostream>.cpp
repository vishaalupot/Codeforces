#include<iostream>
using namespace std;
int main()
{
    int a,n,b;
    cin>>a;
    if(a<10)
    {
        cout<<a;
    }
    else
    {
        n=a-9;
        if(n%2!=0)
        {
            b=n%2;
            cout<<b;
        }
        else
        {
            b=n%10;
            cout<<(b+9)/10;
        }
    }
}