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
    int n,sum=0;
    string s;
    cin>>n>>s;
    int a[n];
    bool flag1=true;
    For(i,n)
    {
        sum+=s[i]-'0';
        a[i]=sum;
        if(i>0 && s[i]!=s[i-1])
        flag1=false;
    }
    if(flag1)
    {
        cout<<"YES";
        return 0;
    }

    For(i,n-1)
    {
        int temp=a[i],tsum=0;
        bool flag=true;
        for(int j=i+1;j<n;j++)
        {
            tsum+=s[j]-'0';
            if(tsum==temp)
            {
                tsum=0;
            }
            else if(tsum>temp)
            {
                flag=false;
                break;
            }
            else if(j==n-1 && tsum<temp && tsum!=0)
            {
                flag=false;
                break;
            }
            else if(j==n-1 && temp==a[n-2])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

    return 0;
}