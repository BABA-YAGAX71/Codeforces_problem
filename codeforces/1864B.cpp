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

void rahi(){
    ll n,k,oddcnt = 0, evencnt = 0;
    cin>>n>>k;
    string s;
    cin>>s;

    vector<char> odd,even;
    for(int i=0;i<(ll)s.size();i++){
        if(i%2==0){
            odd.pb(s[i]);
        }
        else{
            even.pb(s[i]);
        }
    }
    if(k%2==0){
        sort(s.begin(), s.end());
        cout<<s;
    }
    else{
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout<<odd[oddcnt++];
            }
            else{
                cout<<even[evencnt++];
            }
        }
    }
    cout<<endl;
}
int32_t main(){
    fucking_fast;
    ll t;
    cin>>t;
    while(t--){
        rahi();
    }
    dead;
}