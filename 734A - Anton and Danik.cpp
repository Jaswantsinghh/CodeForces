#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 string str;
 int n;
 cin >>n;
 cin >> str;
 
 int an=0,da=0;
 for(int i=0;i<n;i++)
 {
  if(str[i]=='A')
  {
   an+=1;
  }
  else if(str[i]=='D')
  {
   da+=1;
  }
 }
 if(an>da)
 {
 cout << "Anton";
 }
 else if(an<da)
 {
 cout << "Danik";
 }
 else
 {
 cout << "Friendship";
 }
 return 0;
 }
