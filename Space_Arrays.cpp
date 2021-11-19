#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        long long sumtotal=0;
        bool flag=true;
        int j=1;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            //cin>>a[i];
            if(a[i]>j)
            flag=false;
            sumtotal+=(j-a[i]);
            j++;
        }
        if(!flag)
        cout<<"Second\n";
        else if(sumtotal%2)
        cout<<"First\n";
        else
        cout<<"Second\n";
        

    }
    return 0;  
}
 