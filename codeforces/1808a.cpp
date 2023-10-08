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

void solve(){
    int n,m,i,j,l,r,ans=0,t;
    cin>>l>>r;

    t =l;
    for(int i=l;i<=min(l+100, r);i++){
        int x =i;
        int mi = 10,ma = 0;
        while(x){
            ma = max(ma,x%10);
            mi = min(mi,x%10);
            x/=10;
        }
        if(ans<ma-mi){
            ans = ma - mi,t =i;
        }
    }
    cout<<t<<endl;
}


int main(){

    fucking_fast;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    dead;

}