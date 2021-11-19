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
    VI a(k),s(n+1);
    for(int i=1;i<=n+1;i++)
    s[i]=i;
    int index=0;
    For(i,k)
    {
        int inp;
        cin>>inp;
        int temp=(inp+index)%n;
        index=temp;
        cout<<s[temp]+1<<" ";
        s.erase(s.begin()+temp);
        n--;
    }
        return 0;
    

    
    

    
    
}