#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int t;
    cin>>t;
    while(t--)
    {
        int n,no;
        cin>>n>>no;
        bool r=false,b=false;
        int i=n;
        while(no!=0)
        {
            if(i%2&&(no%10)%2)
            r=true;
            if(i%2==0&&(no%10)%2==0)
            b=true;
            no/=10;
            i--;
        }
        if(n%2)
        {
            if(r)
            cout<<1<<endl;
            else
            {
                cout<<2<<endl;
            }
            
        }
        else
        {
            if(b)
            cout<<2<<endl;
            else
            {
                cout<<1<<endl;
            }
            
        }
        

        
    }
    
}