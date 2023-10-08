


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


void rahi(){
    ll n,m,k;
    cin>>n>>m>>k;
    
    ll x,y;
    cin>>x>>y;

    ll flag = 1;

    for(int i=0;i<k;i++){
        ll a,b;
        cin>>a>>b;
        if((abs(x-a)+abs(y-b))%2==0){
            flag = 0;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}
int main(){
    FIO
    ll t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}