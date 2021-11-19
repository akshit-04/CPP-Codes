#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int N = 1000010;
char arr[1111][1111];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,cnt=0,max_y=INT_MIN,max_x=INT_MIN;
        int min_x=INT_MAX,min_y=INT_MAX;
        cin>>n>>m;
        For(i,n)
        {
            For(j,m)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='*')
                {
                    min_x = min(min_x, i);
					min_y = min(min_y, j);
					max_x = max(max_x, i);
					max_y = max(max_y, j);
					cnt++;
                }
            }
        }
        if(cnt==0)
        cout<<0<<"\n";
        else
        {
            //cout<<min_x<<" "<<max_x<<" ";
            int len = max(max_y - min_y+1, max_x - min_x + 1);
            cout<<(len/2)+1<<"\n";
        }
        
        

    }
      
    

    return 0;
    
}