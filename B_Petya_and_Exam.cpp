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
    int k,q,l,w,y,i,j,h[27]={0};
    string g,s;
    cin>>g>>s;
	k=s.size();
	for(i=0;i<g.size();i++) 
    h[g[i]-'a']=1;
	cin>>q;
	while(q--)
	{
        string a;
		cin>>a;
		l=a.size();
		w=l-k+1;
		i=0,j=0;
		if(w<0) 
        {
            cout<<"NO\n";
            continue;
        }
		while(i<k)
		{
			if(j<l && s[i]=='?' && h[a[j]-'a'])
			{
                i++;
                j++;
            }
			else if(s[i]=='*')
			{
				for(y=1;y<=w&&j<l;y++,j++)
					if(h[a[j]-'a']) 
                    break;
				if(y<=w) 
                break;
				i++;
			}
			else if(j<l&&s[i]==a[j]) 
            {
                i++;
                j++;
            }
			else 
            break;
		}
		if(i<k||j<l) 
        cout<<"NO\n";
		else 
        cout<<"YES\n";
	}  
    return 0;
}