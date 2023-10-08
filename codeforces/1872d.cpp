#define fucking_fast                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
#define dead return 0;


ll gcd(ll  a, ll  b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    fucking_fast;
    int t;
    cin>>t;
    while(t-->0)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        ll Lcm=lcm(x,y),a=(n/x)-(n/Lcm),b=(n/y)-(n/Lcm);
        ll v2=(b*(b+1))/2;
        ll v1=(n*(n+1))/2-((n-a)*(n-a+1))/2;
        cout<<v1-v2<<endl;
    }
    dead;
}