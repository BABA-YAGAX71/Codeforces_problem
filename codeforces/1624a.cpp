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

void solve() {
int t;
cin>>t;
while(t--){
     int n;
     cin>>n;
     int a[n],minn=INT_MAX,maxx=INT_MIN;
     for(int i=0;i<n;i++){
     	cin>>a[i];
     	if(a[i]<minn){
     		minn=a[i];
     	}
     	if(a[i]>maxx){
     		maxx=a[i];
     	}
     }
     cout<<maxx-minn<<"\n";
 
}
     
 
 
}
 
 
 
 
 
 
int main() {
    fucking_fast;


	
	solve();
}