#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e5+1;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string b;
        cin>>b;
        int temp=0;
        For(i,n)
        {
            if(b[i]=='1')
            {
                if(temp==2)
                {
                    cout<<0;
                    temp=1;
                }
                else
                {
                    cout<<1;
                    temp=2;
                }
                
            }
            else
            {
                if(temp==2)
                {
                    cout<<1;
                    temp=1;
                }
                else if(temp==1)
                {
                    /* code */
                    cout<<0;
                    temp=0;
                }
                else
                {
                    cout<<1;
                    temp=1;
                }
                
                
            }
            
        }
        cout<<"\n";
    }
}