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
        string s, t;
        cin >> s >> t;
        bool flag = false;
        int left = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == t[0])
            {
                ll pointer_s = i, pointer_t = 1;
                while (true)
                {
                    if (pointer_t > t.length() - 1)
                    {
                        flag = true;
                        break;
                    }
                    if (s[pointer_s + 1] == t[pointer_t] && left != 1)
                    {
                        if (left == 0)
                            left = 2;
                        pointer_s = pointer_s + 1;
                        pointer_t++;
                    }
                    else if (s[pointer_s - 1] == t[pointer_t])
                    {
                        left = 1;
                        pointer_s = pointer_s - 1;
                        pointer_t++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        if (flag == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
