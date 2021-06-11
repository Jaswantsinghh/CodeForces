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
        ll n, l, r;
        cin >> n >> l >> r;
        ll arr[n];
        ll sum = 0;
        for (ll i = 0; i < n; ++i)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        ll res = 0;
        if (sum > l)
        {
            sort(arr, arr + n);
            ll i = 0, j = n - 1;
            while (i < j)
            {
                ll summ = arr[i] + arr[j];
                if ((summ >= l) && (summ <= r))
                {
                    res++;

                    if (j == i + 1)
                    {
                        i++;
                        j = n - 1;
                    }
                    else
                    {
                        j--;
                    }
                }

                else if (summ < l)
                {
                    i++;
                    j = n - 1;
                }

                else if (summ > r)
                    j--;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
