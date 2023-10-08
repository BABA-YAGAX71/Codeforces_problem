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

    int n,m;
    cin>>n>>m;

    int a =0,b=0,X;

    for(int i=0;i<n;i++){
        cin>>X; 
        a ^= X;
    }
    for(int i =0;i<m;i++){
        cin>>X;
        b |= X;
    }

    if(n%2==0){
        cout<<a-(a & b)<<" "<<a<<endl;
    }
    else{
        X = a ^ b;
		cout<<a<<' '<< a + (X - (X & a))<<endl;
    }


}

int main(){
    fucking_fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    dead;
}