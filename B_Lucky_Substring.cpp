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
        string s;
        int four=0,sev=0;
        cin>>s;
        for(char c:s)
        {
            int a=c-'0';
            if(a==4)
            four++;
            else if(a==7)
            sev++;
        }
        if(four==0 && sev==0)
        cout<<-1;
        else if(four>=sev)
        cout<<4;
        else
        {
            cout<<7;
        }
        


        
        
        
    }

    return 0;
    
}