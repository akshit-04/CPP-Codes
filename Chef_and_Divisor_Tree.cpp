#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int nax = 1e6 + 5;
bool is_prime[nax];
vector<int> divisorrr[nax];

ll find_base(ll a, ll b)
{
    return (a + b - 1) / b;
}

int main()
{
    ll lower, highe;
    cin >> lower >> highe;
    ll ans = 0;
    //	cout<<"cm mnn m\n";
    for (ll i = 2; i < nax; i++)
        is_prime[i] = true;

    for (ll i = 2; i < nax; i++)
    {
        if (is_prime[i])
        {
            for (ll j = (i * i); j < nax; j += i)
                is_prime[i] = false;
            for (ll x = find_base(lower, i) * i; x <= highe; x += i)
            {
                divisorrr[x - lower].push_back(i);
            }
        }
    }
    for (ll x = lower; x <= highe; x++)
    {
        vector<ll> times;
        ll tmpor = x;
        for (ll i = 0; i < divisorrr[x - lower].size(); i++)
        {
            ll prime = divisorrr[x - lower][i];
            int count = 0;
            while (tmpor % prime == 0)
            {
                tmpor = tmpor / prime;
                ++count;
            }
            if (count)
                times.push_back(count);
        }
        if (tmpor != 1)
            times.push_back(1);
        sort(times.begin(), times.end());

        while (times.size())
        {

            ll h = 1;
            for (ll a = 0; a < times.size(); a++)
            {
                h *= (times[a] + 1);
            }
            ans += h;
            times.back()--;

            if (times.back() == 0)
                times.pop_back();
            if (times.size())
                sort(times.begin(), times.end());
        }
    }
    cout << ans << "\n";
}