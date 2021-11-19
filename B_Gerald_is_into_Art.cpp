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
        int x,y,a,b,c,d;
        cin>>x>>y>>a>>b>>c>>d;
        int i,j,k,l;
        i=a+c;
        j=max(b,d);
        k=a+d;
        l=max(b,c);

        if((x>=i && y>=j) || (x>=j && y>=i) || (x>=k && y>=l) || (x>=l && y>=k))
        cout<<"YES";
        else
        {
            swap(a,b);
            i=a+c;
            j=max(b,d);
            k=a+d;
            l=max(b,c);
            if((x>=i && y>=j) || (x>=j && y>=i) || (x>=k && y>=l) || (x>=l && y>=k))
            cout<<"YES";
            else
            {
                cout<<"NO";
            }
            

        }  
    }

    return 0;
    
}