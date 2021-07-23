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
        ll one = 0, two = 0;
        if (n >= 3)
        {
            ll rem = n % 3;
            n = n - rem;
            one = n / 3;
            two = n / 3;
            if (rem == 1)
                one++;
            else if (rem == 2)
                two++;
        }
        else if (n == 2)
            two++;
        else if (n == 1)
            one++;
        cout << one << " " << two << "\n";
    }

    return 0;
}
