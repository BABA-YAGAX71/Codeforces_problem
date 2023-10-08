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


int main(){
    fucking_fast;
    ll n;
    cin>>n;

    if(n%2==0){
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
    }
    else{
        int res = n - 3;
        cout<<res/2+1<<endl;
        for(int i=0;i<res/2;i++){
            cout<<2<<" ";
        }
        cout<<3;
    }
    dead;
}

