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
    ll n;
    cin >> n;
    ll arr[n];
    ll one = 0, two = 0, three = 0, four = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        switch (arr[i])
        {
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        }
    }
    ll cnt = 0;
    cnt += four;
    four = 0;
    if (three > 0)
    {
        if (three >= one)
        {
            cnt += three;
            three = 0;
            one = 0;
        }
        else
        {
            cnt += three;
            one -= three;
            three = 0;
        }
    }
    if (two > 0)
    {
        if (two % 2 == 0)
        {
            cnt += two / 2;
            two = 0;
        }

        else
        {
            cnt += two / 2;
            cnt++;
            two = 0;
            if (one > 2)
            {
                one -= 2;
            }
            else
            {
                one = 0;
            }
        }
    }
    if (one > 0)
    {
        if (one % 4 == 0)
        {
            cnt += one / 4;
            one = 0;
        }
        else
        {
            cnt += one / 4;
            cnt++;
            one = 0;
        }
    }
    cout << cnt << "\n";
    return 0;
}
