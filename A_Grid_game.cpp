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
    string s;
	cin>>s;
	bool v=false, h=false;
	For(i,s.size()){
		if(s[i]=='0'){
			if(v)
				cout<<"3 4\n";
			else
				cout<<"1 4\n";
			v=!v;
		} else {
			if (h)
				cout<<"4 3\n";
			else
				cout<<"4 1\n";
			h=!h;
		}
	}

    return 0;
}