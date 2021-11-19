#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e5+1;

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    map<char,int> map;
    For(i,a.size())
    {
        if(a[i]==' ')
        continue;
        map[a[i]]++;
    }
    bool flag=false;
    For(i,b.size())
    {
        if(b[i]==' ')
        continue;
        if(map[b[i]]>0)
        map[b[i]]--;
        else
        {
            flag=false;
            //cout<<i<<"\n";
            break;
        }
        
    }
    if(flag)
    cout<<"YES";
    else
    {
        cout<<"NO";
    }
    
}