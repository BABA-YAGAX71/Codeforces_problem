
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
typedef vector<ll> vi1;
#define dead return 0;
void solve(){
    ll n,a,b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    ll cnt = 0;
    for(ll i=0;i<b;i++) if(s[i]=='+') cnt++;
   
    if(cnt+a < n){
        cout << "NO\n";
        return;
    }
    if(a==n){
        cout << "YES\n";
        return;
    }
    for(ll i=0;i<b;i++){
        if(s[i]=='+')a++;
        else a--;
        if(a==n){
            cout << "YES\n";
            return;
        }
    }
    cout << "MAYBE\n";
}
 
int main(){
    fucking_fast;
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
    dead;
}