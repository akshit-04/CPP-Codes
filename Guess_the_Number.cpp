#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 2000, i = 1;
        while (n--)
        {
            int a;
            cout << (i * i)<<"\n";
            cin >> a;
            if (a == 0)
            {
                i++;
            }
            else if (a == 1)
            {
                break;
            }
        }
    }
    return 0;
}
