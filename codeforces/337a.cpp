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

int main()
{
    fucking_fast;
 
    int m,n,k,d=999;
    cin>>n>>m;
    int a[k=m];
    while(k--)cin>>a[k];sort(a,a+m);--n;m-=n;
    while(m--)d=min(d,a[m+n]-a[m]);cout<<d;

    dead;
}