#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n,ya=0,p,q;
 cin >> n;
 for(int i=0;i<n;i++)
 {
   cin >> p;
   cin >> q;
   if(q-p>=2)
   {
    ya+=1;
   }
 }
 cout << ya;
 return 0;
 }
