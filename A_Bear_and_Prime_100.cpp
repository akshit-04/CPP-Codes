#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int a[4]={4,9,25,49};
    int b[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    bool flag=false;
    For(i,4)
    {
        string s;
        cout<<a[i]<<endl;
        cin>>s;
        if(s=="yes")
        {
            cout<<"composite";
            flag=true;
            break;
        }
    }
    if(!flag)
    {
        int cnt=0;
        For(i,15)
        {
            string s;
            cout<<b[i]<<endl;
            cin>>s;
            if(s=="yes")
            cnt++;
            if(cnt==2)
            break;
        }
        if(cnt==2)
        cout<<"composite";
        else
        {
            cout<<"prime";
        }
        
    }
    
}