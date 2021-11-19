#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
aa:
    while (t--)
    {
        ll inp;
        cin >> inp;
        ll count = 0;
        ll div = inp / 4;
        count += ((div * 4) * 11);
        if (inp % 4 == 0)
        {
            if (inp / 4)
                count += (4 * 4);
        }
        else if (inp % 4 == 1)
        {
            count += 20;
            if (inp / 4)
                count += (4 * 3);
        }
        else if (inp % 4 == 2)
        {
            count += (18 * 2);
            if (inp / 4)
                count += 8;
        }
        else
        {
            if (inp / 4)
                count += 4;
            count += (18 * 2);
            count += 15;
        }
        cout << count << "\n";
    }

    return 0;
}