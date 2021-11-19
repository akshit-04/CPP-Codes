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
    int t;
    cin>>t;
    while(t--)
    {
        int n,c0,c1,h,z=0,o=0;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        For(i,n)
        {
            if(s[i]=='0')
            z++;
            else
            {
                o++;
            }
            
        }
        int sum=INT_MAX,sum1=INT_MAX,sum2=INT_MAX,mn=INT_MAX;
            sum=(h*o)+(c0*n);
            sum1=(h*z)+(c1*n);
            sum2=(c1*o)+(c0*z);
            mn=min(sum,min(sum1,sum2));
            cout<<mn<<"\n";
        
        
        
    }
	return 0;
}
  