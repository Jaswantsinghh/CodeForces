#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,m,a,rect,sq;
    cin >> n;
    cin >> m;
    cin >> a;
    rect = n*m;
    sq = a*a;
    if((rect)%(sq)==0)
    {
        if(n%a==0&&m%a==0)
        {
            cout << rect/sq;
        }
        else if(n%a!=0&&m%a==0)
        {
            cout << ((m*(n-(n%a)))/(a*a))+m/a;
        }
        else if(n%a==0&&m%a!=0)
        {
            cout << ((n*(m-(m%a)))/(a*a))+n/a;
        }


    }
    else
    {
        if(n%a==0&&m%a!=0)
        {
            cout << ((n*(m-(m%a)))/(a*a))+n/a;
        }
        else if(n%a!=0&&m%a==0)
        {
            cout << ((m*(n-(n%a)))/(a*a))+m/a;
        }
        else if(n%a!=0&&m%a!=0)
        {
            cout << (((m-(m%a))*(n-(n%a)))/(a*a))+n/a+m/a+1;
        }
    }
    return 0;
}
