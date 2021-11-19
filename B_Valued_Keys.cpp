#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int t=1;
    //cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        bool flag=true;
        for(int i=0;i<s1.size();i++)
        {
            if((int)(s2[i]-'0')>(int)(s1[i]-'0'))
            {
                flag=false;
                break;
            }
            
        }
        if(!flag)
        cout<<-1;
        else
        {
            cout<<s2;
        }
        
    }
    
}