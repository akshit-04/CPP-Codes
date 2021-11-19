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
        int n;
        string no;
        cin>>n>>no;
        bool r=false,b=false;
        int i=0;
        while(i<n)
        {
            if((i+1)%2&&(no[i]-'0')%2)
            r=true;
            if((i+1)%2==0&&(no[i]-'0')%2==0)
            b=true;
            
            i++;
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