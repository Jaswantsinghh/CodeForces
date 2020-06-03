#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  long long a,b;

  cin >> a;
  cin  >> b;
  int n=b;
  for(int i=0;i<n;i++)
  {
      a=3*a;
      b=2*b;
      if(a>b)
      {
          cout << i+1;
          break;
      }
  }
  return 0;
}
