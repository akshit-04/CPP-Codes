#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        if(s.size()<=2)
        cout<<1<<"\n";
        else
        {
            VI rep;
            int cnt=1;
            for(int i=1;i<n;i++)
            {
                if(s[i] == s[i-1])
                cnt++;
                else
                {
                    rep.push_back(cnt);
                    cnt=1;
                }
                
            }
            rep.push_back(cnt);
            cnt=0;
            int j=0;
            For(i,rep.size())
            {
			    j=(i>j)?i:j;
			    while(j < rep.size())
                {
				    if(rep[j] > 1)
                    {
					    --rep[j];
					    break;
				    }
				    j++;
			    }
			    if(j == rep.size())
                {
				    rep.pop_back();
				    --j;
			    }
			    cnt++;
		    }
            cout<<cnt<<"\n";
        }
        
    }

    return 0;
}