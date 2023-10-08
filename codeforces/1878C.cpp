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
typedef set<int> st;
#define dead return 0;
void rahi(){
    ll n,k,x;
    cin>>n>>k>>x;

    ll A = (k*(k+1)/2);
    ll B = (k*(2*n-k+1))/2;

    if(x>=A and x<=B){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


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