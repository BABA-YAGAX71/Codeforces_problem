
 

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

int main(){
    FIO;
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<ll> a;
        for(ll i= 0;i<n;i++) {
            ll x;
            cin>>x;
            a.push_back(x);
        }
 
        sort(a.begin(),a.end());
 
        ll ans = -1;
        for(ll i=0;i<n-1;i++) {
            ll k = a[i+1] - a[i];
            if(ans == -1 || ans >k) {
                ans = k;
            }
        }
 
        cout<<ans<<endl;
    }
}