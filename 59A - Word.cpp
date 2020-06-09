#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 string str;
 int up=0,low=0;
 cin >>str;
 for(int i=0;i<str.size();i++)
 {
   if(isupper(str[i]))
   {
    up+=1;
   }
   else if(islower(str[i]))
   {
   low+=1;
   }
 }
 if(low>=up)
 {
   for(int i=0;i<str.size();i++)
   {
   str[i]=tolower(str[i]);
   }
 }
 else
 {
   for(int i=0;i<str.size();i++)
   {
   str[i]=toupper(str[i]);
   }
 }
 cout << str;
 return 0;
 }
