#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    string s;
    getline(cin,s);
    std::vector<string> manip,beez;
    map<string,int> map;
    stringstream m(s);
    string n;
    int c=0,cntr=0;
    while(m>>n)
    {
        manip.push_back(n);
        beez.push_back(n);
        
        c++;
    }
    for(auto i=manip.begin();i!=manip.end();i++)
    {
       for(auto j=beez.begin();j!=beez.end();j++)
        {
            if(*i==*j)
            {
                cntr++;
            }
        }
        map.insert({*i,cntr});
        cntr=0;
    }
  
    for(auto i=map.begin();i!=map.end();i++)
    {
        cout<<'\t'<<i->first;
        cout<<'\t'<<i->second<<'\n';
    }
    return 0;
}
