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
#define fr(i,n) for(int i=0;i<n;i++)
#define fr2(i,n) for(int i=1;i<=n;i++)

int main(){
    fucking_fast;
    ll n,t;
    cin>>t;
    vi v;
    while(t--){
        cin>>n;

        ll a[n];
        v.clear();

        fr(i,n){
            cin>>a[i];
        }
        v.pb(a[0]);

        fr2(i,n-1){
            if(a[i-1]<=a[i]){
                v.pb(a[i]);
            }
            else{
                v.pb(a[i]);
                v.pb(a[i]);
            }
        }
        cout<<v.size()<<endl;

        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;

    }
    dead;
}