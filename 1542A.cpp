#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[2 * n];
        ll even = 0, odd = 0;
        for (int i = 0; i < 2 * n; ++i)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == even)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
