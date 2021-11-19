#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 998244353;
//#define M_PI 3.14159265358979323846

int main() {
	fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string a,b;
        cin>>a>>b;
        VI l(26),r(26);
        for(auto c:a)
        l[c-'a']++;
        for(auto c:b)
        r[c-'a']++;
        int cnt=0;
        bool flag=true;
        For(i,26)
        {
            if(l[i]==r[i])
            continue;
            if(abs(l[i]-r[i])%k)
            {
                flag=false;
                break;
            }
            if(l[i]>r[i])
            cnt+=(l[i]-r[i])/k;
            else if(cnt<(r[i]-l[i])/k)
            {
                flag=false;
                break;
            }
            else
            {
                cnt-=(r[i]-l[i])/k;
            }
            
        }
        cout<<(flag&&cnt==0?"Yes":"No")<<"\n";
    }

	return 0;
}
  