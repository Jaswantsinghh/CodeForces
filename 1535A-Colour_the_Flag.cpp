#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char arr[n][m];
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> arr[i][j];

        int turn = 0;
        int res1 = 0;
        int res2 = 0;
        char one[n][m];
        char two[n][m];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; j++)
            {
                one[i][j] = arr[i][j];
                two[i][j] = arr[i][j];
            }
        }
        if (m % 2 == 0)
        {
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    if (turn == 0 && j != 0)
                        turn = 1;
                    else if (turn == 1 && j != 0)
                        turn = 0;
                    if (one[i][j] == '.')
                    {
                        if (turn == 0)
                        {
                            one[i][j] = 'W';
                        }
                        else
                        {
                            one[i][j] = 'R';
                        }
                    }
                    else if (((one[i][j] == 'W') && (turn == 1)) || ((one[i][j] == 'R') && (turn == 0)))
                    {
                        res1 = -1;
                        break;
                    }
                }
                if (res1 == -1)
                    break;
            }
            turn = 1;
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    if (turn == 0 && j != 0)
                        turn = 1;
                    else if (turn == 1 && j != 0)
                        turn = 0;
                    if (two[i][j] == '.')
                    {
                        if (turn == 0)
                        {
                            two[i][j] = 'W';
                        }
                        else
                        {
                            two[i][j] = 'R';
                        }
                    }
                    else if (((two[i][j] == 'W') && (turn == 1)))
                    {
                        res2 = -1;
                        break;
                    }
                    else if (((two[i][j] == 'R') && (turn == 0)))
                    {
                        res2 = -1;
                        break;
                    }
                }
                if (res2 == -1)
                    break;
            }
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    if (turn == 0)
                        turn = 1;
                    else
                        turn = 0;
                    if (one[i][j] == '.')
                    {
                        if (turn == 0)
                        {
                            one[i][j] = 'W';
                        }
                        else
                        {
                            one[i][j] = 'R';
                        }
                    }
                    else if (((one[i][j] == 'W') && (turn == 1)) || ((one[i][j] == 'R') && (turn == 0)))
                    {
                        res1 = -1;
                        break;
                    }
                }
                if (res1 == -1)
                    break;
            }
            turn = 1;
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    if (turn == 0)
                        turn = 1;
                    else
                        turn = 0;
                    if (two[i][j] == '.')
                    {
                        if (turn == 0)
                        {
                            two[i][j] = 'W';
                        }
                        else
                        {
                            two[i][j] = 'R';
                        }
                    }
                    else if (((two[i][j] == 'W') && (turn == 1)))
                    {
                        res2 = -1;
                        break;
                    }
                    else if (((two[i][j] == 'R') && (turn == 0)))
                    {
                        res2 = -1;
                        break;
                    }
                }
                if (res2 == -1)
                    break;
            }
        }

        if (res1 == -1 && res2 == -1)
            cout << "NO\n";
        else if (res1 == 0 && res2 == -1)
        {
            cout << "YES\n";
            for (int i = 0; i < n; ++i)
            {

                for (int j = 0; j < m; ++j)
                {
                    cout << one[i][j];
                }
                cout << "\n";
            }
        }
        else if (res2 == 0 && res1 == -1)
        {
            cout << "YES\n";
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    cout << two[i][j];
                }
                cout << "\n";
            }
        }
        else if (res1 == 0 && res2 == 0)
        {
            cout << "YES\n";
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < m; ++j)
                {
                    cout << two[i][j];
                }
                cout << "\n";
            }
        }
    }

    return 0;
}
