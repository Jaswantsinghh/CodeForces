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
        string a,b;
        cin >> a >> b;
        ll arr[2][n];
        for(int i=0;i<n;++i)
        {
          arr[0][i]=a[i]-48;
          arr[1][i]=b[i]-48;
        }
        ll c = 0;
        for(int i=0;i<n;++i)
        {
            if(arr[1][i]==1)
            {
                if(arr[0][i]==0)
                {
                    c++;
                    arr[0][i] = -1;
                }
                else if(i>0 && arr[0][i-1]==1)
                {
                    c++;
                    arr[0][i-1] = -1;
                }
                else if(i<n-1 && arr[0][i+1]==1)
                {
                    c++;
                    arr[0][i+1] = -1;
                }
            }
        }
        cout << c <<"\n";
    }

    return 0;
}
