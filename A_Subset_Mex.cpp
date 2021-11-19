#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[101]={0},sum=0;
        For(i,n)
        {
            int temp;
            cin>>temp;
            a[temp]++;
        }
        int cnt=0;
        For(i,101)
        {
            if(cnt==0)
            {
                if(a[i]==0)
                {
                    sum=i*2;
                    break;
                }
                else if(a[i]==1)
                {
                    sum+=i;
                    cnt++;
                }
            }
            else
            {
                if(a[i]==0)
                {
                    sum+=i;
                    break;
                }
            }
            
            
            
        }
        cout<<sum<<endl;

    }
    
}