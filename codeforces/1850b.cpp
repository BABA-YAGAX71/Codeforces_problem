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
   int m=-1;
   int ans = -1;
   for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    if (a<=10){
        if (b>m) {
            m= b;
            ans = i + 1;
        }
      }
   }
   cout<<ans<<endl;

}
int main(){
    FIO
    ll t;
    cin>>t;
    while(t--){
        rahi();
    }
    return 0;
}

