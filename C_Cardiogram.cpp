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
    int n;
	cin>>n;
	VI a(n);
	int sum=0;
	For(i,n){
		cin>>a[i];
		sum+=a[i];
	}
	vector<vector<char>> m(2002,vector<char>(sum,' '));
	int pre=1001;
	int p=0;
	int mn=pre,mx=pre;
	For(i,n){
		if(i%2){
			For(j,a[i]){
				m[pre+j][p+j]='\\;
                mx=max(pre+j,mx);
			}
			pre=pre+a[i]-1;
            p+=a[i];
		}
		else{
			For(j,a[i]){
				m[pre-j][p+j]='/';
                mn=min(pre-j,mn);
			}
			pre=pre-a[i]+1;
            p+=a[i];
		}
		
	}
    for(int i=mn;i<=mx;i++){
		For(j,sum)
		cout<<m[i][j];
		cout<<"\n";
	}

    return 0;
}