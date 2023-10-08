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


void solve() {

        int a, b, n;
        cin>>a>>b>>n;

        vi v(n);
        for (int i = 0; i < n; i++){
            cin>>v[i];
        }

        int ans = 0;
        int c = b;
        sort(v.begin(), v.end());

        for (int i =0;i<n;i++){
            ans+=(c - 1);
            c=1;
            c += v[i];
            if (c>a){
                c=a;
            }
        }

        ans= ans+min(c, a);
        cout<<ans<<endl;
   
}

int32_t main(){
    fucking_fast;
    int rahi;
    cin >> rahi;
    while(rahi--){
        solve();
    }
    dead;
}