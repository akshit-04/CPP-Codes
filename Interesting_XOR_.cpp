#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1e9 + 7;
//char arr[1111][1111];
//int a[101],r[10001],ans[10001];
// evon byross
int toggle(int n)
{
    int temp = 1;
    while (temp <= n)
    {
        n = n ^ temp;
        temp = temp << 1;
    }
    return n;
}
unsigned int countBits(unsigned int n)
{
   unsigned int count = 0;
   while (n)
   {
        count++;
        n >>= 1;
    }
    return count;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        int cnt=countBits(n);
        ll s=0,l=0;
        for(int i=cnt-1;i>=0;i--)
        {
            ll no=(n&(1<<i));
            //cout<<no<<" ";
            //cout<<(1<<i)<<" ";
            if(no)
            {
                s+=no;
                //cout<<"a";
                if(s>l)
                {
                    swap(s,l);
                }
                
            }
            else
            {
                s+=(1<<i);
                l+=(1<<i);
            }
            n-=(1<<i);
            //cout<<l<<" "<<s<<" "<<"\n";
            
        }
        cout<<s*l<<"\n";
    }
    return 0;
}
