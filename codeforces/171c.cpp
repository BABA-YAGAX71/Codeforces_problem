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


int main(){

    fucking_fast;
    ll a;
    cin>>a;
    vector<int> ar(a+1);
    for(int i=1;i<=a;i++){
        cin>>ar[i];
    }
    ll ans =0;
    for(int i=1;i<=a;i++){
        ans += i*ar[i];

    }
    cout<<ans<<endl;
    dead;

}