#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num,t;
    cin >> t;
    cin >> num;
        while(num--)
        {
            if(t%10==0)
            {
                t=t/10;
            }
            else if(t%10!=0)
            {
                t=t-1;
            }
        }
        cout << t;
        return 0;
}
