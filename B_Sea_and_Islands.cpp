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
    int n,k;
    cin>>n>>k;
    char a[n][n];
    For(i,n)
    For(j,n)
    a[i][j]='S';
    int t=n/2,temp;
    if(n%2)
    {
        temp=(t*t)+((t+1)*(t+1));
    }
    else
    {
        temp=n*t;
    }
    if(k>temp)
    cout<<"NO";
    else
    {
        int cnt=0;
        cout<<"YES\n";
        For(i,n)
        {
            For(j,n)
            {
                if((i%2==0 && j%2==0 && cnt<k) || (i%2 && j%2 && cnt<k))
                {
                    cout<<'L';
                    cnt++;
                }
                else
                {
                    cout<<a[i][j];
                }
            }
            cout<<"\n";
        }
    }
    
    
    return 0;
}