#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
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
        VI a(n);
        VI v[n+1];
        For(i,n)
        {
            cin>>a[i];
            v[a[i]].push_back(i);
        }
        VI answ(n+1,INT_MAX);
        for(int i=1;i<=n;i++)
        {
            if(v[i].size()>1)
            {
                v[i].push_back(n);
                int rep=1;
                for(int j=1;j<v[i].size();j++)
                {
                    rep=max(rep,v[i][j]-v[i][j-1]);
                }
                rep=max(rep,v[i][0]+1);
                answ[rep]=min(answ[rep],i);
            }
            else if(v[i].size()==1)
            {
                answ[max(n-v[i][0],v[i][0]+1)]=min(answ[max(n-v[i][0],v[i][0]+1)],i);
            }
            
        }
        for(int i=1;i<=n;i++)
        {
            answ[i]=min(answ[i],answ[i-1]);
            if(answ[i]!=INT_MAX)
            cout<<answ[i]<<" ";
            else
            {
                cout<<-1<<" ";
            }
            
        }
        cout<<"\n";
        

        
        
    }

    return 0;
    
}