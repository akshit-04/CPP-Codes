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
        int n,cnt=0;
        cin>>n;
		int ans=10*((n%10)-1);
        while(n!=0)
        {
            cnt++;
            n/=10;
        }
        if(cnt==1)
        ans+=1;
        else if(cnt==2)
        ans+=3;
        else if(cnt==3)
        ans+=6;
        else
        {
            ans+=10;
        }
        cout<<ans<<"\n";
        
    }

    return 0;
    
}