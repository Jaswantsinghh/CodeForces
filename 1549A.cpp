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
        ll a=2,b;
        b = n%2==0? n : n-1;
        cout << a <<" "<< b <<"\n";
    }
    return 0;
}
