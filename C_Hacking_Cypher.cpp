#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    long long n,a,b;
    cin>>n>>a>>b;
    int org=n,cnt=0;
    bool flag=false;
    while(org!=0)
    {
        cnt++;
        org/=10;
    }
    for(int i=1;i<cnt;i++)
    {
        long long temp=pow(10,i);
        if(n/temp!=0&&n%temp!=0&&(n/temp)%a==0&&(n%temp)%b==0)
        {
            cout<<"YES"<<endl;
            cout<<n/temp<<endl<<n%temp;
            flag=true;
            break;
            
        }
    }
    if(!flag)
    cout<<"NO";
    
}