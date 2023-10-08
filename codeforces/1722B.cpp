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
typedef set<int> st;
#define dead return 0;


int32_t main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		for(int i=0;i<n;i++){
			if(s1[i]=='G')
             s1[i]='B';
			if(s2[i]=='G')
             s2[i]='B';
		}
		if(s1==s2) 
        cout<<"YES\n";
		else 
        cout<<"NO\n";
	}
    dead;
}