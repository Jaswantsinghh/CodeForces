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
        ll a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        reverse(a, a + n);
        reverse(b, b + n);
        ll suma = 0, sumb = 0;
        for (int i = 0; i < n; i++)
        {
            suma += a[i];
            a[i] = suma;
            sumb += b[i];
            b[i] = sumb;
        }
        ll index = n - n / 4;
        ll a_sum = a[index - 1];
        ll b_sum = b[index - 1];
        ll c = 0;
        while (a_sum < b_sum)
        {
            c++;
            a_sum += 100;
            index++;

            if (index >= n)
            {
                b_sum = b[n - 1];
            }
            else
            {
                b_sum = b[index - 1];
            }
        }
        cout << c << "\n";
    }

    return 0;
}
