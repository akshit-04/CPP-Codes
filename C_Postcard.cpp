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
        string s;
        int k;
        cin>>s>>k;
        int snow=0,candy=0;
        for(char c:s)
        {
            if(c=='?')
            candy++;
            else if(c=='*')
            snow++;
        }
        if(k<(s.size()-(2*(snow+candy))))
        cout<<"Impossible";
        else
        {
            if(k>(s.size()-(snow+candy)))
            {
                int temp=k-(s.size()-(snow+candy));
                if(snow==0)
                {
                    cout<<"Impossible";
                    return 0;
                }
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]=='?')
                    continue;
                    else if(s[i]=='*')
                    {
                        if(temp)
                        {
                            for(int j=0;j<temp;j++)
                            {
                                cout<<s[i-1];
                            }
                            temp=0;
                        }
                        else
                        {
                            continue;
                        }
                        
                    }
                    else
                    {
                        cout<<s[i];
                    }
                    
                }
            }
            else
            {
                int temp=k-(s.size()-(2*(snow+candy)));
                for(int i=0;i<s.size()-1;i++)
                {
                    if(s[i]=='?' || s[i]=='*')
                    continue;
                    else if(s[i+1]=='?' || s[i+1]=='*')
                    {
                        if(temp)
                        {
                            cout<<s[i];
                            temp--;
                        }
                        else
                        {
                            i++;
                        }
                        
                    }
                    else
                    {
                        cout<<s[i];
                    }
                    
                }
                if(s[s.size()-1]!='*' && s[s.size()-1]!='?')
                cout<<s[s.size()-1];
            }
            
        }
        
    }
	return 0;
}
  