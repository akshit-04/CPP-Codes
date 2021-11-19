#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1e9+7;
//char arr[1111][1111];
//int a[101],r[10001],ans[10001];
// evon byross
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=0,b=0,c=0;
        For(i,s.size())
        {
            if(s[i]=='A')
            a++;
            else if(s[i]=='B')
            b++;
            else
            {
                c++;
            }
            
        }
        int cnt=0;
        bool flag=true;
        if(a+b==c)
        {
            if(s[0]=='A' || s[0]=='B')
            {
                For(i,s.size())
                {
                    if(s[i]=='A' || s[i]=='B')
                    cnt++;
                    else
                    {
                        cnt--;
                    }
                    if(cnt<0)
                    {
                        flag=false;
                        break;
                    }
                    
                }
                if(cnt!=0 || !flag)
                cout<<"NO\n";
                else cout<<"YES\n";
            }
            else
            {
                cnt=0;
                For(i,s.size())
                {
                    if(s[i]=='A' || s[i]=='B')
                    cnt--;
                    else
                    {
                        cnt++;
                    }
                    if(cnt<0)
                    {
                        flag=false;
                        break;
                    }
                    
                }
                if(cnt!=0 || !flag)
                cout<<"NO\n";
                else cout<<"YES\n";
            }
            

        }
        else if(b+c==a)
        {
            if(s[0]=='B' || s[0]=='C')
            {
                For(i,s.size())
                {
                    if(s[i]=='B' || s[i]=='C')
                    cnt++;
                    else
                    {
                        cnt--;
                    }
                    if(cnt<0)
                    {
                        flag=false;
                        break;
                    }
                    
                }
                if(cnt!=0 || !flag)
                cout<<"NO\n";
                else cout<<"YES\n";
            }
            else
            {
                cnt=0;
                For(i,s.size())
                {
                    if(s[i]=='B' || s[i]=='C')
                    cnt--;
                    else
                    {
                        cnt++;
                    }
                    if(cnt<0)
                    {
                        flag=false;
                        break;
                    }
                    
                }
                if(cnt!=0 || !flag)
                cout<<"NO\n";
                else cout<<"YES\n";
            }
            

        
        }
        else
        {
            if(s[0]=='C' || s[0]=='A')
            {
                For(i,s.size())
                {
                    if(s[i]=='A' || s[i]=='C')
                    cnt++;
                    else
                    {
                        cnt--;
                    }
                    if(cnt<0)
                    {
                        flag=false;
                        break;
                    }
                    
                }
                if(cnt!=0 || !flag)
                cout<<"NO\n";
                else cout<<"YES\n";
            }
            else
            {
                cnt=0;
                For(i,s.size())
                {
                    if(s[i]=='C' || s[i]=='A')
                    cnt--;
                    else
                    {
                        cnt++;
                    }
                    if(cnt<0)
                    {
                        flag=false;
                        break;
                    }
                    
                }
                if(cnt!=0 || !flag)
                cout<<"NO\n";
                else cout<<"YES\n";
            }
            

        
        }
        
        
    }
    return 0;  
}
 