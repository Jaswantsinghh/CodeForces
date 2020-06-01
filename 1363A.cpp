#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   long long t;
   cin >> t;
   for(int i=0;i<t;i++)
   {
       long long n,x,count_even=0,count_odd=0,even=0,odd=0;
       cin >> n;
       cin >> x;
       long long arr[n];
       for(long j=0;j<n;j++)
       {
           cin >> arr[j];
           if(arr[j]%2==0)
           {
               count_even=count_even+1;
           }
           else if(arr[j]%2!=0)
           {
               count_odd=count_odd+1;
           }
       }
       for(int i=1;i<=x;i=i+2)
       {
           if(count_odd>=i&&count_even>=x-i)
           {

               even=even+1;
           }
           else
           {

               odd=odd+1;
           }
       }
       if(even>0)
       {
           cout << "YES" << "\n";
       }
       else if(even==0)
       {
           cout << "NO" << "\n";
       }
       if(x==0)
       {
           cout << "NO" << "\n";
       }

   }


return 0;
}
