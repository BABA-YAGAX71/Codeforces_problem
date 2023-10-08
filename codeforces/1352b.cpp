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
    int n,k;
    cin>>n>>k;
    if(n&1&&k&1^1){
        cout<<"No"<<endl;
        return;
    }
    if(n&1^1&&k&1){
        if(n<2*k){
            cout<<"No"<<endl;
            return;
        }
        cout<<"Yes"<<endl;
        for(int i=1;i<k;++i){
            cout<<"2 ";
        }
        cout<<n-2*(k-1)<<endl;
    }
    else{
        if(n<k){
            cout<<"No"<<endl;
            return;
        }
        cout<<"Yes"<<endl;
        for(int i=1;i<k;++i){
            cout<<"1 ";
        }
        cout<<n-(k-1)<<endl;
    }
}

int main(){

    FIO;
    ll t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}