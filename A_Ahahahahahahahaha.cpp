#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); 
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        bool flag=false;
        cin>>n;
        int a[n],o=0,z=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i])
            o++;
            else
            {
                z++;
            }
            
        }
           if(z>=o)
           {
               cout<<n/2<<endl;
               for(int i=1;i<=n/2;i++)
               cout<<0<<" ";
               cout<<endl;
           } 
           else
           {
               if(n/2%2)
               flag=true;
               if(flag)
               {
                   cout<<(n/2)+1<<endl;
                   cout<<1<<" ";
               }
               else
               {
                   cout<<n/2<<endl;

               }
               
                for(int i=1;i<=n/2;i++)
               cout<<0<<" ";
               cout<<endl;
           }
           
        
        
        
    }

}