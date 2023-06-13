#include <iostream>
using namespace std;
  
int main()
{	
int t,n,i,flag=0;
string s;
cin>>t;
while(t--)
{
cin>>n>>s;
for(i=0;i<n;i++){
	if((s[i]=='L' && s[i+1]=='L') || (s[i]=='R' && s[i+1]=='R'))
		{flag=1;
		break;}
	else
		flag=0;
}

if(flag==1)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;
}

return 0;
}
