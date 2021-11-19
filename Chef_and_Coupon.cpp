#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1e9+7;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int d,c;
        cin>>d>>c;
        int a[3],b[3],sum=0,suma=0,sumb=0;
        For(i,3)
        {
            cin>>a[i];
            suma+=a[i];
        }
        For(i,3)
        {
            cin>>b[i];
            sumb+=b[i];
        }
        sum+=(d*2);
        sum+=suma+sumb;
        int temp=sum;
        bool flag=false;
        if(suma>=150)
        {
            temp-=d;
            flag=true;
        }
        if(sumb>=150)
        {
            temp-=d;
            flag=true;
        }
        if(flag)
        temp+=c;
        if(temp<sum)
        cout<<"YES\n";
        else
        cout<<"NO\n";


    }
    return 0;  
}
 