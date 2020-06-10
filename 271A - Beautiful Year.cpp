#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int year,a,b,c,d,copy;
cin >> year;
copy=year+2;
year=year+1;
a = year%10;
year=year/10;
 b=year%10;
year=year/10;
 c=year%10;
year=year/10;
 d=year%10;
while(a==b||b==c||c==d||a==c||b==d||a==d)
{
year=copy;
 a = year%10;
year=year/10;
 b=year%10;
year=year/10;
 c=year%10;
year=year/10;
 d=year%10;
 copy++;
}
cout << copy-1 <<"\n";
return 0;
}
