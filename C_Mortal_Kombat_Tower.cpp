#include<bits/stdc++.h>
using namespace std;
#define For(i,n) for(int i=0;i<n;i++)
const int MX = 200001; 
int n;
int a[MX],arr[2][MX];
int solve(int ch,int boss_no)
{
    if(boss_no>=n)
        return 0;
    if(arr[ch][boss_no]!=-1)
        return arr[ch][boss_no];
    if(ch)
    {
        return arr[ch][boss_no]=min(a[boss_no]+solve(ch^1,boss_no+1),a[boss_no]+a[boss_no+1]+solve(ch^1,boss_no+2));
    }
    return arr[ch][boss_no]=min(solve(ch^1,boss_no+1),solve(ch^1,boss_no+2));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //int n;
        cin>>n;
        For(i,n)
        cin>>a[i];
        For(i,2)
        {
            For(j,n+1)
                arr[i][j]=-1;
        }
        cout<<solve(1,0)<<endl;
    }
    return 0;
}