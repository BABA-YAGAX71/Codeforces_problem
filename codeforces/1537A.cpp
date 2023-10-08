
 

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

void solve (){
    ll n;
    cin>>n;
    int a[n];
    int sum =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum==n){
        cout<<0<<endl;
        return;
    }
    if(sum<0){
        cout<<1<<endl;
        return;
    }
    if(sum>n){
        cout<<(sum - n)<<endl;
        return;
    }
    if(sum<n){
        cout<<1<<endl;
        return;
    }
}

int main(){
    FIO;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}