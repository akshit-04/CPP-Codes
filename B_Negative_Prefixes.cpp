#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        ll p=0,ne=0;
        bool l[n],flagn=true,flagp=true;
        vector<int> v;
        
        For(i,n)
        {
            cin>>a[i];
            if(a[i]>0)
            p+=a[i];
            if(a[i]<0)
            ne+=a[i];
            if(a[i]<=0)
            flagp=false;
        }

        For(i,n)
        {
            cin>>l[i];
            if(!l[i])
            v.push_back(a[i]);
        }

        if(flagp||(p+n<0))
        {
            For(i,n)
            cout<<a[i]<<" ";
            cout<<endl;
        }
        else
        {
            ll p[n];
            sort(v.begin(),v.end(),greater<int>());
            int j=0;
            For(i,n)
            {
                if(!l[i])
                {
                    a[i]=v[j];
                    j++;
                }
                
            }
            For(i,n)
            cout<<a[i]<<" ";
            cout<<endl;
        }
        
    }
    
}