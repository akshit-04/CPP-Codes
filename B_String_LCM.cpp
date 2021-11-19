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
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,ans,temp;
        cin>>a>>b;
        if(b.size()>a.size())
        {
            temp=a;
            a=b;
            b=temp;
        }
        ans=a;
        int i=0,j=0;
        bool flag=true;
        while(a[i]==b[j])
        {
            i++;
            j++;
            if(i==a.size() && j==b.size())
            {
                flag=true;
                break;
            }
            if(i==a.size())
            {
                i=0;
                ans+=a;
            }
            if(j==b.size())
            j=0;

        }
        if(a[i]!=b[j])
        flag=false;
        if(flag)
        cout<<ans<<"\n";
        else
        {
            cout<<-1<<"\n";
        }
        
    }
    
}