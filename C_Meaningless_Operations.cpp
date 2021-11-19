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
    aa:while(t--)
    {
        int a;
        cin>>a;
        int k=a,temp=a,msb=0,no=0;
        while(k!=0)
        {
            k/=2;
            msb++;
        }
        For(i,msb)
        {
            no+=pow(2,i);
        }
        //cout<<no<<" ";
        if(no!=a)
        no^=a;
        else
        {
            for(int i=2;i*i<=a;i++)
			{
                if(a%i==0){
					cout<<a/i<<"\n";
					goto aa;
				}
            }	
			cout<<1<<"\n";
			continue;
        }
        //cout<<no<<" ";
        int ans=__gcd((a^no),(a&no));
        cout<<ans<<"\n";

    }
    return 0;
    
}