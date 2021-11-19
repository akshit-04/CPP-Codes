#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int cnt=0;
    vector<pair<int,int>> v;
    bool flag=true;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(a[i][j]>0)
            {
                if(a[i][j+1]>0&&a[i+1][j]>=1&&a[i+1][j+1]>=1)
                {
                    a[i][j]=2;
                    a[i][j+1]=2;
                    a[i+1][j]=2;
                    a[i+1][j+1]=2;
                    v.push_back({i,j});
                    cnt++;
                }
            }
           
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                flag=false;
                break;
            }
            
        }
    }
    if(!flag)
    cout<<-1<<endl;
    else
    {
        cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
    cout<<v[i].first+1<<" "<<v[i].second+1<<endl;    
    }
    
    
    return 0;
    
    

}