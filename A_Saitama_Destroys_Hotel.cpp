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
        int n,tf;
        cin>>n>>tf;
        VI a(tf+1);
        For(i,tf+1)
        a[i]=0;
        while(n--)
        {
            int f,t;
            cin>>f>>t;
            a[f]=max(t,a[f]);
        }
        //sort(v.begin(),v.end(),greater<int>());
        int sum=0;
        for(int i=tf;i>0;i--)
        {
            if(a[i]>sum)
            {
                sum+=(a[i]-sum);
            }
            sum+=1;
        }
        cout<<sum;

        


        
        
        
    }

    return 0;
    
}