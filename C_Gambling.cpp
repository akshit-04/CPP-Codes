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
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        const int N=1e5+5;
        cin>>n;
        VI a(N),b(N);
        For(i,n)
        cin>>a[i];
        For(i,n)
        cin>>b[i];
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
        int A=1,i=0,j=0,cnt=0;
        ll asum=0,bsum=0;
        while(cnt<2*n)
        {
            cnt++;
            if(A)
            {
                if(a[i]>=b[j])
                {
                    asum+=a[i];
                    i++;
                }
                else
                {
                    j++;
                }
                
            }
            else
            {
                if(b[j]>=a[i])
                {
                    bsum+=b[j];
                    j++;
                }
                else
                {
                    i++;
                }
                
            }
            A^=1;
            
        }
        cout<<asum-bsum;
        
        
        
    }
	return 0;
}
  