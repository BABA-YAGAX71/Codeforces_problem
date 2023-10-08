
 

#define FIO                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,b)			for(int i=a;i<=b;i++)
#define rfo(i,a,b)			for(int i=a;i>=b;i--)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define ss second
#define ff first 
#define ub upper_bound
#define lb lower_bound
typedef vector<int> vi;



void solve(){
ll n;
cin >> n;
ll temp = 0;
ll c = 0;
vector<ll>v(n);
for(int i = 0; i < n ; i++) {
  cin >> v[i];
  if(v[i]==1) c++;
  temp+=v[i];
}
if(temp-n >=c && n!=1) cout << "YES\n";
else cout << "NO\n";
}
int main()
{
  FIO;
  int t;
  cin >> t;
  while (t--)
    solve();
}