#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int n,k,tmp;
    cin>>n>>k;
    VI vec(n*k);
    For(i,n*k)
    vec[i]=i+1;
 
    VI a(k);
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
        vec[a[i]-1]=0;
    }
 
 
    For(i,k)
    {   cout<<a[i]<<" ";
        for(int l=0;l<n-1;l++){
            for(int m=0;m<(n*k);m++)
            if(vec[m]!=0){
            cout<<vec[m]<<" ";
            vec[m]=0;
            break;}
        }
        cout<<endl;
 
    }


    return 0;
    
}