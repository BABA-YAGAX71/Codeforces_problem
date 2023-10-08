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


int main(){

    fucking_fast;

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<pair<int, int>> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i].first;
            v[i].second = i;
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < n; i++){
            v[i].first = n - i;
        }

        vector<int> ans(n);

        for(int i = 0; i < n; i++){
            ans[v[i].second] = v[i].first;
        }

        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }

        cout<<endl;
    }

    dead;
}
