
 

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
    ll left_b = 1,rb = 2*k;

    while(left_b<rb){
        ll mb = (left_b+rb)/2;

        if((mb-mb/n)>=k){
            rb = mb;
        }
        else{
            left_b = mb +1;
        }
    }
    cout<<left_b<<endl;
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