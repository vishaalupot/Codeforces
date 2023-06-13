#include <bits/stdc++.h>
using namespace std;

int main()
{
long long int t,n,k,ans=0;
cin>>t;
while(t--){
cin>>n>>k;

if (n%k==0)
    ans=n/k;
else
    for(int i=1;i<=10;i++){
        if((k*i)%n==0){
            ans=i;
            break;
        }
    }
cout<<ans<<endl;
}
return 0;
}
