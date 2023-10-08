 
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
void solve(){
    ll x,y;
    cin>>x>>y;

    string s;
    cin>>s;

    ll l=0,r=0,u=0,d=0;

    for(auto i : s){
        if(i=='R'){
            r++;
        }
        else if(i=='L'){
            l++;
        }
        else if(i=='D'){
            d++;
        }
        else{
            u++;
        }
    }
    if(x>0){
        if(x>r){
            cout<<"No"<<endl;
            return;
        }
    }
    else{
        if(abs(x)>l){
            cout<<"No"<<endl;
            return;
        }
    }
    if(y>0){
        if(y>u){
            cout<<"No"<<endl;
            return;
        }
    }
    else{
        if(abs(y)>d){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}