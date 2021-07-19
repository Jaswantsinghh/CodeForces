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
        ll m, n;
        cin >> m >> n;
        ll arr[m][n];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                arr[i][j] = 0;
        if (m > 2)
        {
            for (int j = 0; j < n; j = j + 2)
                arr[0][j] = 1, arr[m - 1][j] = 1;

            for (int i = 2; i < m - 2; i += 2)
                arr[i][n - 1] = 1, arr[i][0] = 1;
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}
