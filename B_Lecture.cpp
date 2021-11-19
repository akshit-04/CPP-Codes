#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	fast;
    int n,m;
    cin>>n>>m;
    map<string,string> map;
    while(m--)
    {
        string a,b;
        cin>>a>>b;
        map[a]=b;
    }
    string str="";
    For(i,n)
    {
        string x,temp;
        cin>>x;
        temp=map[x];
        if(temp.size()<x.size())
        str+=temp;
        else
        {
            str+=x;
        }
        if(i!=n-1)
        str+=" ";
        else
        {
            str+="\n";
        }
        
        
    }
    cout<<str;
	return 0;
}
  