#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int n,m;
    cin>>n>>m;
    char s[n][m];
    int a[n][m];
	For(i,n)
	{
		For(j,m)
		{
			cin>>s[i][j];
			a[i][j]=0;
		}
	}
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<m-1;j++)
		{
			if(s[i+1][j]=='#' && s[i-1][j]=='#' && s[i][j+1]=='#' && s[i][j-1]=='#' && s[i+1][j+1]=='#' && s[i-1][j-1]=='#'&& s[i-1][j+1]=='#'&& s[i+1][j-1]=='#')
			{
				a[i+1][j]=1;
				a[i-1][j]=1;
				a[i+1][j+1]=1;
				a[i+1][j-1]=1;
				a[i][j-1]=1;
				a[i][j+1]=1;
				a[i-1][j+1]=1;
				a[i-1][j-1]=1;
            }
			
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(s[i][j]=='#' && a[i][j]==0)
			{
				cout<<"NO";
				return 0;
			}
		}
    }
	
   cout<<"YES";
        
        
        
        
        
    
    return 0;
    
}