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

ll ans,n,t,m,a,b,k,c;
string s;
int main(){
    fucking_fast;
    cin>>t;
    while(t--){
        cin>>m;
        a=0;
        b= INT_MAX;
        c= INT_MAX;
        while(m--){
            cin>>n;
            ll arr[n];
            for(ll i=0;i<n;i++){
                cin>>arr[i];
            }
            sort(arr,arr+n);
            a+=arr[1];
            b=min(arr[0],b);
            c=min(c,arr[1]);
        }
        cout<<a+b-c<<endl;
    }
    dead;
}    