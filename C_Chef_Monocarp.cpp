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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        VI a(n);
        map<int,int> map;
        For(i,n)
        {
            cin>>a[i];
            map[a[i]]++;
        }
        //sort(a.begin(),a.end());
        int temp=1,sum=0;
        for(auto& i:map)
        {
            if(temp<=i.first)
            {
                i.second-=1;
                if(i.second%2)
                {
                    if(i.first-temp>=i.second/2+1)
                    {
                        int k=(i.second/2)+1;
                        sum+=(k*(k+1))/2;
                        i.second-=k;
                        sum+=(i.second*(i.second+1))/2;
                        temp=i.first+i.second+1;
                    }
                    else
                    {
                        int k=i.first-temp;
                        sum+=(k*(k+1))/2;
                        i.second-=k;
                        sum+=(i.second*(i.second+1))/2;
                        temp=i.first+i.second+1;
                    }
                    
                }
                else
                {
                    if(i.first-temp>=i.second/2)
                    {
                        int k=(i.second/2);
                        sum+=(k*(k+1))/2;
                        i.second-=k;
                        sum+=(i.second*(i.second+1))/2;
                        temp=i.first+i.second+1;
                    }
                    else
                    {
                        int k=i.first-temp;
                        sum+=(k*(k+1))/2;
                        i.second-=k;
                        sum+=(i.second*(i.second+1))/2;
                        temp=i.first+i.second+1;
                    }
                }
                
            }
            else
            {
                for(int j=temp;i.second!=0;j++)
               {
                   sum+=abs(i.first-j);
                   temp=j+1;
                   i.second-=1;
               } 
            }
            
            
            
            
        }
        cout<<sum<<"\n";
        
        
    }
    return 0;
    
}