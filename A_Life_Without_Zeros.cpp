#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int c=a+b;
        int i=1,sum1=0,sum2=0,sum3=0;
        while(a!=0)
        {
            int temp=a%10;
            if(temp!=0)
            {
                sum1+=temp*i;
                i*=10;
            }
            a/=10;
        }
        i=1;
        while(b!=0)
        {
            int temp=b%10;
            if(temp!=0)
            {
                sum2+=temp*i;
                i*=10;
            }
            b/=10;
        }
        i=1;
        while(c!=0)
        {
            int temp=c%10;
            if(temp!=0)
            {
                sum3+=temp*i;
                i*=10;
            }
            c/=10;
        }
        if(sum1+sum2==sum3)
        cout<<"YES";
        else
        {
            cout<<"NO";
        }
        
        
        
    }
	return 0;
}
  