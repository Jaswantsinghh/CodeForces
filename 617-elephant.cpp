#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long num;
    cin >>num;
    if(num<=5)
    {
        cout << "1";
    }
    else if(num>5)
    {
        if(num%5==0)
        {
            cout <<num/5;
        }
        else
        {
            cout << (num/5)+1;
        }
    }
    return 0;
}
