#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,temp;
    cin>>a>>b;
    int i=1;
    while(1)
    {
        if(i%2)
        {
            if(i<=a)
            {
                a-=i;
                i++;
            }
            else
            {
                temp=i;
                break;
            }
        }
        else
        {
            if(i<=b)
            {
                b-=i;
                i++;
            }
            else
            {
                temp=i;
                break;
            }
        }
    }
    if(temp%2)
    cout<<"Vladik";
    else
    cout<<"Valera";
}