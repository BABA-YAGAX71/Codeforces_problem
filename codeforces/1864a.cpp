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

    int x,y,n,count = 1;
    cin>>x>>y>>n;

    vi1 v(n);
    v[n-1]=y;
    v[0]=x;

    for(ll i=0;i<=n-2;i++){
        v[i]=v[i+1]-count;
        count++;
    }
    if((v[1]-v[0])>(v[2]-v[1])){
        for(ll i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
    else{
        cout<<-1;
    }
    cout<<endl;
  
}
int main(){
    fucking_fast;
    ll t;
    cin>>t;
    while(t--){
        rahi();
    }
    dead;

}