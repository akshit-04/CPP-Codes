#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int main()
{
    fast;
    int n,b,a;
    cin>>n>>b>>a;
    int maxa=a,maxb=b;
    VI s(n);
    For(i,n)
    cin>>s[i];
    int cnt=0;
    For(i,n)
    {
        if(s[i]==1)
        {
            if(a==maxa && b>0)
            {
                cnt++;
                a--;
                //cout<<b<<" "<<a<<"\n";
            }
            else if(b>0)
            {
                cnt++;
                b--;
                a++;
                //cout<<b<<" "<<a<<"\n";
            }
            else if(a>0)
            {
                cnt++;
                a--;
                //cout<<b<<" "<<a<<"\n";
            }
            else if(a==0 && b==0)
            break;
        }
        else
        {
            if(a>0)
            {
                cnt++;
                a--;
                //cout<<b<<" "<<a<<"\n";
            }
            else if(b>0)
            {
                cnt++;
                b--;
                //cout<<b<<" "<<a<<"\n";
            }
            else
            {
                break;
            }
            
        }
        
    }
    cout<<cnt;
    
    return 0;
}