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


int main()
{
    fucking_fast;
	int t = 0;
    cin>>t;
	for (int j = 0;j<t;j++){
		vector<int> v(7,0);
		for (int i = 0;i<7;i++){
			cin>>v[i];
		}
		cout<<v[0]<<" "<<v[1]<<" "<<v[6]-v[0]-v[1]<<endl;
	}
    dead; 
}