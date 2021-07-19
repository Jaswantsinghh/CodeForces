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
        ll n, c = 0;
        cin >> n;
        while (n > 0)
        {
            ll temp = n, m = 0, p = 1;
            while (temp)
            {
                int rem = temp % 10;
                temp = temp / 10;
                if (rem != 0)
                    m += p;
                p *= 10;
            }
            c++;
            n = n - m;
        }
        cout << c << "\n";
    }

    return 0;
}
