
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
    ll n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++){
        cout<<a[i]<<" "<<a[n-i-1]<<" ";
    }
    if(n%2){
        cout<<a[n/2]<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}