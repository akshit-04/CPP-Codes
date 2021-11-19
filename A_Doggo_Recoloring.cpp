#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)
    cout<<"Yes";
    else
    {
        /* code */
        map<char,int> map;
    for(char c:s)
    map[c]++;
    bool flag=false;
    for(auto& i:map)
    {
        if(i.second>=2)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    cout<<"Yes";
    else
    {
        cout<<"No";
    }
    }
    
    
    
    
}