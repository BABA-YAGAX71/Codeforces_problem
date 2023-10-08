#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
 
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  int y, w;
  cin >> y >> w;
  int mx = max(y, w);
  int val = 6 - mx+1;
 
    cout<<lcm(val,6)/6<<"/"<<lcm(val,6)/val;
  return 0;
}