#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define VL vector<ll>
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)

int main()
{
    fast;
    int t;
    cin >> t;
    aa:while (t--)
    {
        ll n,e,h,a,b,c;
        ll ans2=0,ans3=0,cnt=0;
        cin>>n>>e>>h>>a>>b>>c;
        VL v;
        if(e/2>=n)
        v.pb(n*a);
        else
        {
            cnt+=(e/2);
            ans2=a*(e/2);
            ans3=ans2;
            if(h/3>=n-cnt)
            {
                ans2+=(n-cnt)*b;
                v.pb(ans2);
                if(e%2)
                v.pb(ans2-b+c);
                //ans3+=(h/2)*b;

            }
            else
            {
                ans3+=(h/3)*b;
                cnt+=(h/3);
                if(h%3 && e%2 && n-cnt==1)
                {
                    ans3+=c;
                    v.pb(ans3);
                }
                
                
                
            }
            

        }
        ans2=0,ans3=0,cnt=0;
        if(h/3>=n)
        v.pb(n*b);
        else
        {
            cnt+=(h/3);
            ans2=b*(h/3);
            ans3=ans2;
            if(e/2>=n-cnt)
            {
                ans2+=(n-cnt)*a;
                v.pb(ans2);
                if(h%3==1)
                v.pb(ans2-a+c);
                else if(h%3==2 && n-cnt>=2 && e-(2*(n-cnt))+4>=2)
                v.pb(ans2-(2*a)+(2*c));
                //ans3+=(h/2)*b;

            }
            else
            {
                ans3+=(e/2)*a;
                cnt+=(e/2);
                if(h%3 && e%2 && n-cnt==1)
                {
                    ans3+=c;
                    v.pb(ans3);
                }
                
                
            }
            

        }
        ans2=0,ans3=0,cnt=0;
        if(min(e,h)>=n)
        v.pb(c*n);
        else
        {
            cnt=min(e,h);
            ans2=min(e,h)*c;
            ans3=ans2;
            ll l=e,m=h;
            l-=min(e,h);
            m-=min(e,h);
            if(m>l && n-cnt<=(m/3))
            {
                ans2+=(n-cnt)*b;
                v.pb(ans2);
            }
            else if(l>m && n-cnt<=(l/2))
            {
                ans3+=(n-cnt)*a;
                v.pb(ans3);
            }
            
            
        }
        ans2=0,ans3=0,cnt=0;
        if(a<=b && a<=c)
        {
            if(e/2 < n)
            {
                cnt+=(e/2);
                ans2+=(e/2)*a;
                if(b<=c && h/3<=n-cnt)
                {
                    cnt+=(h/3);
                    ans2+=(h/3)*b;
                    if(n-cnt==0)
                    v.pb(ans2);
                    else if(n-cnt==1 && e%2 && h%3)
                    v.pb(ans2+c);
                }
            }
        }
        if(v.size()==0)
        cout<<-1<<"\n";
        else
        {
            sort(v.begin(),v.end());
        cout<<v[0]<<"\n";
            
        }
        
        
        


        
    }
    return 0;
}
