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


void solve(){
    
    int n,k,x;
    cin>>n>>k>>x;

    if(k>n || k>x+1){
        cout<<-1<<endl;
        return;
    }
    if(k==x){
        cout<<(((k-1)*(k))/2)+(n-k)*(k-1)<<endl;
        return;
    }

 
    cout<<(((k-1)*(k))/2)+((n - k)*x)<<endl;


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