    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str,rev;
    cin >> str;
    cin >> rev;
    reverse(str.begin(), str.end());
    if(str==rev)
    {
    cout << "YES";
    }
    else
    {
    cout << "NO";
    }
    return 0;
    }
