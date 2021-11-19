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
        int n,h,sum=0;
        cin>>n>>h;
        int a[n];
        For(i,n)
        {
            cin>>a[i];
            if(a[i]>h)
            sum+=2;
            else
            {
                sum+=1;
            }
            
        }
        cout<<sum;
        
    }
	return 0;
}
  