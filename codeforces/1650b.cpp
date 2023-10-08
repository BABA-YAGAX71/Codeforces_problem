#include<bits/stdc++.h>
using namespace std;
#define ll long long int



void solve(){
    ll ans=0,mx=0,h=0,k,a,b;
    ll l,r,c;
    cin>>l>>r>>a;
    b=(r/a)+(r%a);
    c=(r/a)-1+a-1;
    k=(((r/a)-1)*a)+a-1;
    h=((l/a)+(l%a));
    if(l>k){
        ans=max(b,h);
    }
    else{
        ans=max(b,h);
        ans=max(ans,c);
    }
    cout<<ans<<endl;
 
}
int main(){ 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}