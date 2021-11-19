#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int N = 1000010;
char arr[1111][1111];
int main()
{
    fast;
    int n;
    cin>>n;
    bool pow=1,neg=1;
    float a[n];
    int b[n];
    ll sum=0;
    For(i,n)
    {
        cin>>a[i];
        int temp=(int)a[i];
        b[i]=temp;
        sum+=b[i];
        cout<<b[i]<<" ";
    }
    For(i,n)
    {
        if(sum==0)
        cout<<b[i]<<"\n";
        else
        {
            if(a[i]==b[i])
            cout<<b[i]<<"\n";
            else if(sum<0 && a[i]>0)
            {
                cout<<b[i]+1<<"\n";
                sum+=1;
            }
            else if(sum>0 && a[i]<0)
            {
                cout<<b[i]-1<<"\n";
                sum-=1;
            }
            else
            cout<<b[i]<<"\n";
            
        }
        
    }
    return 0;
    
}