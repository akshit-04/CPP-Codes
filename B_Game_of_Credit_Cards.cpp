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
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,c;
        cin>>c>>s;
        map<int,int> k1,k2;
        For(i,n) {
            k1[s[i]]++;
            k2[s[i]]++;
        }
 
        int ans1 = 0;
        For(i,n) {
            char cur = c[i];
            for (int j = cur + 1; j <= '9'; j++) {
                if (k1[j]) {
                    k1[j]--;
                    ans1++;
                    break;
                }
            }
        }
 
        int ans2 = n;
        For(i,n) {
            char cur = c[i];
            for (int j = cur; j <= '9'; j++) {
                if (k2[j]) {
                    k2[j]--;
                    ans2--;
                    break;
                }
            }
        }
 
        cout << ans2 << endl << ans1 << endl;

        
        
        
    }
    return 0;
    
}