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
long long  a[55],b[55];
int main(){
    fucking_fast;
	int t;
	cin>>t;
	while(t){
		t--;
		int n,m,k;
		cin>>n>>m>>k;
		k--;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+m);	
		if(b[m-1] > a[0])
         swap(a[0], b[m-1]);
		if(k & 1){
			sort(a,a+n);
	  	  	sort(b,b+m);
			swap(a[n-1], b[0]);
		}
		long long ans=0;
		for(int i=0;i<n;i++){
			ans+=a[i];
		}
		cout<<ans<<endl;
	}
    dead;
}