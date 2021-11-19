#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        VI a(n);
        For(i,n)
        cin>>a[i];
        bool flag=false;
        int len=1,length=0,cnt=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
            {
                len++;
                flag=true;
            }
            else
            {
                if(cnt==0)
                {
                    cnt++;
                    len++;
                    if(i<n-1 && a[i-1]+1>=a[i+1])
                    {
                        length=max(length,len);
                        cnt=0;
                        len=1;
                        flag=false;
                    }
                    
                }
                else
                {
                    cnt=0;
                    length=max(length,len);
                    len=1;
                    flag=false;
                }
                
            }
            
        }
        if(flag && cnt==0 && len+1>length && len+1<=n)
        cout<<len+1<<"\n";
        else
        {
            cout<<max(length,len)<<"\n";
        }
        
        
        
        
    }

    return 0;
    
}