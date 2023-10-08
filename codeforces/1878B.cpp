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

    ll n;
    cin>>n;

    vector<ll> v(n);

    v[0]=2,v[1]=3;
    cout<<2<<" "<<3<<" ";

    for(int i =2;i<n;i++){
        v[i]=v[i-1]+1;

        while(((3*v[i])%(v[i-1]+v[i-2]))==0){
            v[i]++;
        }
        cout<<v[i]<<" ";
    }
    cout<<endl; 
}
int main(){
    fucking_fast;
    int t;
    cin>>t;
    while(t--){
        rahi();
    }
    dead;

}