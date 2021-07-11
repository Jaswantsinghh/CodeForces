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
        ll plus = 0, minus = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                minus += abs(a[i] - b[i]);
            else if (a[i] < b[i])
                plus += abs(a[i] - b[i]);
        }
        if (minus != plus)
        {
            cout << "-1\n";
        }
        else
        {
            cout << plus << "\n";
            stack<int> up;
            stack<int> down;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > b[i])
                {
                    for (int j = 0; j < abs(a[i] - b[i]); ++j)
                    {
                        down.push(i + 1);
                    }
                }
                else if (a[i] < b[i])
                {
                    for (int j = 0; j < abs(a[i] - b[i]); ++j)
                    {
                        up.push(i + 1);
                    }
                }
            }
            for (int i = 0; i < plus; ++i)
            {
                cout << down.top() << " " << up.top() << "\n";
                up.pop();
                down.pop();
            }
        }
    }
    return 0;
}
