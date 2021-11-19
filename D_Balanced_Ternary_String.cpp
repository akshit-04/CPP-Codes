#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int n = 1e6;

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0,c=0,k=n/3;
        For(i,n)
        {
            if(s[i]=='0')
            a++;
            else if(s[i]=='1')
            b++;
            else c++;
        }
        if(a==k && b==k && c==k)
        cout<<s;
        else
        {
            a-=k,b-=k,c-=k;
            if(a<0)
            {
                For(i,n)
                {
                    if(a==0)
                    break;
                    if(s[i]=='1' && b>0)
                    {
                        a++;
                        b--;
                        s[i]='0';
                    }
                    else if(s[i]=='2' && c>0)
                    {
                        a++;
                        c--;
                        s[i]='0';
                    }
                    
                }
            }
                if(c<0)
                {
                    for(int i=n-1;i>=0;i--)
                    {
                        if(c==0)
                        break;
                        if(s[i]=='1' && b>0)
                        {
                            c++;
                            b--;
                            s[i]='2';
                        }
                        else if(s[i]=='0' && a>0)
                        {
                            c++;
                            a--;
                            s[i]='2';
                        }
                    }
                }
                if(b<0)
                {
                    for(int i=n-1;i>=0;i--)
                    {
                        if(b==0)
                        break;
                        if(s[i]=='2' && c>0)
                        {
                            c--;
                            b++;
                            s[i]='1';
                        }
                        else if(s[i]=='0' && a>0)
                        {
                            b++;
                            a--;
                            s[i]='1';
                        }
                    }
                }
            
            
            cout<<s;

        }
        
    }
}