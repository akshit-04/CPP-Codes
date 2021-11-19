#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 998244353;
//#define M_PI 3.14159265358979323846

int main() {
	fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int,int> map;
        For(i,n)
        {
            cin>>a[i];
            map[a[i]]++;
        }
        bool flag=false;
        int f;
        for(auto& i:map)
        {
            if(i.second==1)
            {
                f=i.first;
                flag=true;
                break;
            }
        }
        if(!flag)
        cout<<-1<<"\n";
        else
        {
            For(i,n)
            {
                if(a[i]==f)
                {
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
        
        
        
        
    }

	return 0;
}
  