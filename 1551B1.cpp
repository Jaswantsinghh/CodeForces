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
        string str;
        cin >> str;
        vector<int> v(26, 0);
        for (int i = 0; i < str.length(); i++)
        {
            v[str[i] - 'a']++;
        }
        ll cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if (v[i] == 1 || v[i] == 2)
                cnt += v[i];
            else if (v[i] > 2)
                cnt += 2;
        }
        cout << cnt / 2 << "\n";
    }

    return 0;
}
