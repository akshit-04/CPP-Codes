#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
#define M_PI 3.14159265358979323846
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int n;
    cin>>n;
    int a[n];
    map<int,int> map;
    For(i,n)
    {
        cin>>a[i];
        map[a[i]]++;
    }
    ll ans=0,ans1,ans2,ans3;
    ans3=min(map[1],min(map[2],map[4]));
    ans+=ans3;
    if(ans>0)
    {map[1]-=ans;
    map[2]-=ans;
    map[4]-=ans;
    }
    ans1=min(map[1],min(map[2],map[6]));
    ans+=ans1;
    if(ans1>0)
    {
    
    map[1]-=ans1;
    map[2]-=ans1;
    map[4]-=ans1;}
    ans2=min(map[1],min(map[3],map[6]));
    ans+=ans2;

    
    if(ans==0 || ans!=n/3)
    cout<<-1<<endl;
    else 
    {
        For(i,ans3)
        cout<<1<<" "<<2<<" "<<4<<"\n";
        For(i,ans1)
        cout<<1<<" "<<2<<" "<<6<<"\n";
        For(i,ans2)
        cout<<1<<" "<<3<<" "<<6<<"\n";
    }
    
    
	return 0;
}