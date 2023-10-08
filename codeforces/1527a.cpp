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

void rahi(){

    ll n;
    cin>>n;

    ll count = 0;
    
    while (n>0){
        count = n- 1;
        n = n&n-1;
    }
    cout<<count<<endl;   
}
signed main(){

    fucking_fast
    ll t;
    cin>>t;
    while(t--){
        rahi();
    }
    dead;

}