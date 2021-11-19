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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        string m="RGB";
        cin>>s;
        int ans = 1e9;
		For (j, n - k + 1) {
			For (i,3) {
				int cur = 0;
				For (pos,k) {
					if (s[j + pos] != m[(pos + i) % 3]) {
						++cur;
					}
				}
				ans = min(ans, cur);
			}
		}
		cout << ans << endl;
    }
	return 0;
}
  