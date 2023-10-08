#define fucking_fast                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(n)              for(int i=0;i<n;i++)
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

int main(){
    fucking_fast;
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        ll ar[n];
        rep(n){
            cin>>ar[i];
        }

        if(n%2==0){
            cout<<4<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
            continue;
        }
        cout<<8<<endl;

        for(ll ii =1;ii<=8;ii++){
            cout<<1<<" "<<n<<endl;
        }
    }
    dead;
}