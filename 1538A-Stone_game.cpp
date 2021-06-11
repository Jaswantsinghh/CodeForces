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
        for (ll i = 0; i < n; ++i)
            cin >> arr[i];
        ll left = 0, right = 0, midd = 0;
        ll minn = arr[0], maxx = arr[0];
        ll indmax = 0, indmin = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] > maxx)
            {
                indmax = i;
                maxx = arr[i];
            }
            if (arr[i] < minn)
            {
                indmin = i;
                minn = arr[i];
            }
        }
        //cout << indmax << " " << indmin << "\n";
        left = max(indmax, indmin) + 1;
        right = n - min(indmax, indmin);
        midd = (min(indmax, indmin) + 1) + (n - max(indmax, indmin));
        //cout << left << " " << right << " " << midd << "\n";
        ll res = min(left, right);
        res = min(res, midd);
        cout
            << res << "\n";
    }
    return 0;
}
