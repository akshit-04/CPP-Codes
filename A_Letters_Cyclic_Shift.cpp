#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n-1;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        string s,str="";
        cin>>s;

        if(s[0]!='a')
        {
            int i=0;
            while(s[i]!='a' && i<s.size())
            {
                str+=s[i]-1;
                i++;
            }
            for(int j=i;j<s.size();j++)
            {
                str+=s[j];
            }
            cout<<str;
        }
        else
        {
            int i=0;
            bool flag=false;
            while(s[i]!='a' && i<s.size())
            {
                str+=s[i];
                i++;
            }
            while(s[i]=='a' && i<s.size())
            {
                str+=s[i];
                i++;
            }
            while(s[i]!='a' && i<s.size())
            {
                str+=s[i]-1;
                flag=true;
                i++;
            }
            for(int j=i;j<s.size();j++)
            {
                str+=s[j];
            }
            if(!flag)
            str[s.size()-1]='z';
            cout<<str;
        }
        
        //cout<<(cnt+1)/2<<"\n";
        
        
        
    }
    return 0;
    
}