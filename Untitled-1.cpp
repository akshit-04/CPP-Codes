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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int flag=0;
    For(i,n)
     {
          if(s[i]=='1')
          {
               if(i==0 && n>1 && s[i+1]=='1')
               {
                   flag=1;
                   break;
               }
               else if(i==n-1 && s[i-1]=='1')
               {
                   flag=1;
                   break;
               }
               else if(s[i-1]=='1' || s[i+1]=='1')
               {
                   flag=1;
                   break;
               }
               
          }
          else
          {
               if(i==0 && n>1 && s[i+1]=='0')
               {
                   flag=1;
                   break;
               }
               else if(i==0 && n==1)
               {
                   flag=1;
                   break;
               }
               else if(i==n-1 && s[i-1]=='0')
               {
                   flag=1;
                   break;
               }
               else if(s[i-1]=='0' && s[i+1]=='0')
               {
                   flag=1;
                   break;
               }
          }
     }
     if(flag==0)
     cout<<"Yes"<<endl;
     else
     cout<<"No"<<endl;
        
    
    
    
    
  
    
    
}