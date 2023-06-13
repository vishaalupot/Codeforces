#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int isPalindrome(string R)
{
    string P = R; 
    reverse(P.begin(), P.end());
    if (R == P) {
        return '0';
    }
    else {
        return '1';
    }
}
  
int main()
{	
string s;
int k,l,n,count=0,X,index;
cin>>s;
cin>>k;
l=s.length();
n=l/k;

if(l%k!=0){
	cout<<"NO"<<endl;
	exit(0);
}

for(index=0;index<k;index++){
	std::string parts = s.substr ((index*n),n);
	X=isPalindrome(parts);
	if(X=='0'){
		count=count+1;	
	}	
	else
		count=0;
}
if(count==k)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;
	
return 0;
}
