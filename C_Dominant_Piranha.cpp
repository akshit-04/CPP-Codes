#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> v(n);
        ll ma=0;
        bool flag=true;
        For(i,n)
        {
            cin>>v[i];
            ma=max(v[i],ma);
            if(i!=0)
            {
                if(v[i]!=v[i-1])
                flag=false;
            }
        }
        //cout<<ma<<" ";
        if(flag)
        {
            cout<<-1<<"\n";
            continue;
        }
        int ind;
        For(i,n)
        {
            if(v[i]==ma)
            {
                if(i==0 && v[i+1]<ma)
                {
                    ind=i+1;
                    //cout<<1<<" ";
                    break;
                }
                else if(i==n-1&& v[i-1]!=ma)
                {
                    ind=i+1;
                    //cout<<2<<" ";
                    break;
                }
                else if(i!=0 && i!=n-1)
                {
                    if(v[i+1]!=ma || v[i-1]!=ma)
                    {ind=i+1;
                    //cout<<3<<" ";
                    break;}
                }
                
            }
        }
        cout<<ind<<"\n";
        
        

        
    }

    return 0;
    
}