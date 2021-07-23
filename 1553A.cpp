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
        ll n, ans = 1;
        cin >> n;
        if (n < 9)
        {
            cout << "0\n";
        }
        else
        {
            n = n - 9;
            if (n == 0)
            {
                cout << ans << "\n";
            }
            else
            {
                ans += n / 10;
                cout << ans << "\n";
            }
        }
    }

    return 0;
}
