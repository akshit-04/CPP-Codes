#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=1;i<=n;i++)


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int n,m,q;
    cin>>n>>m>>q;
    int mat[n][m];
    map<int,int> map;
    vector<pair<int,int>> v; 
    For(i,n)
        For(j,m)
            mat[i][j]=0;
    int cnt=0;
    while(q--)
    {
        int t;
        cin>>t;
        if(t<3)
        {
            int rc;
            cin>>rc;
            if(cnt>=1)
            {
                cnt=0;
                for(int i=v.size()-1;i>=0;i--)
                {
                    if(v[i].first==1)
                    {
                        int a=v[i].second;
                        int temp=mat[a][m];
                        for(int j=m-1;j>0;j--)
                        {
                            mat[a][j+1]=mat[a][j];
                        }
                        mat[a][1]=temp;

                    }
                    else
                    {
                        int a=v[i].second;
                        int temp=mat[n-1][a-1];
                        for(int j=n-1;j>0;j--)
                        {
                            mat[j+1][a]=mat[j][a];
                        }
                        mat[1][a]=temp;
                    }
                    
                }

            }
            v.push_back(make_pair(t,rc));

            
        }
        else
        {
            int row,col,x;
            
            cin>>row>>col>>x;
            mat[row][col]=x;
            cnt++; 
        }
        
    }
    if(cnt>=1)
            {
                cnt=0;
                for(int i=v.size()-1;i>=0;i--)
                {
                    if(v[i].first==1)
                    {
                        int a=v[i].second;
                        int temp=mat[a][m];
                        for(int j=m-1;j>0;j--)
                        {
                            mat[a][j+1]=mat[a][j];
                        }
                        mat[a][1]=temp;

                    }
                    else
                    {
                        int a=v[i].second;
                        int temp=mat[n][a];
                        for(int j=n-1;j>0;j--)
                        {
                            mat[j+1][a]=mat[j][a];
                        }
                        mat[1][a]=temp;
                    }
                    
                }

            }
    For(i,n)
    {
        For(j,m)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
        return 0;
        
        
    
    
}