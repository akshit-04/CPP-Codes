#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int n;
    cin>>n;
    vector<int> a(n);
    bool flag=true;
    For(i,n)
    {
        cin>>a[i];
        if(a[i])
        flag=false;
    }
    if(flag)
    cout<<0;
    else
    {
        int i=0,f,l;
        while(1)
        {
            if(a[i]==1)
            {
                f=i;
                break;
            }
            i++;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i])
            {
                l=i;
                break;
            }
        }
        int ans=1,cntz=0;
        for(int i=f+1;i<=l;i++)
        {
            if(a[i])
            {
                if(cntz)
                {
                    ans+=2;
                    cntz=0;
                }
                else
                {
                    ans++;
                    cntz=0;
                }
                
            }
            else
            {
                cntz++;
            }
            
        }
        cout<<ans;
    }
    
    
    
}