#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,one=0,two=0,three=0;
        cin>>n;
        int a[n];
        VI on,tw,th;
        For(i,n)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                one++;
                on.push_back(i);
            }
            else if(a[i]==2)
            {
                two++;
                tw.push_back(i);
            }
            else
            {
                three++;
                th.push_back(i);
            }
            
        }
        int ans=min(one,min(two,three));
        cout<<ans<<"\n";
        For(i,ans)
        {
            cout<<on[i]+1<<" "<<tw[i]+1<<" "<<th[i]+1<<"\n";
        }
            

        
        
    }

    return 0;
    
}