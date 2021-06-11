#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll sum = 0;
        for (ll i = 0; i < n; ++i)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        ll res = 0;
        if (n == 1)
            res = 0;

        else if (sum % n != 0)
            res = -1;
        else
        {
            ll div = sum / n;
            for (ll i = 0; i < n; i++)
                if (arr[i] > div)
                    res++;
        }
        cout << res << "\n";
    }
    return 0;
}
