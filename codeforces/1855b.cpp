
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

int testCases;
long long N;

void solve() {
    long long multiply = 1LL;

    while (N % multiply == 0LL) {
        multiply++;
    }

    --multiply;

    cout << multiply << endl;
}

int main() {
    FIO;
    cin >> testCases;

    for (int t = 0; t < testCases; ++t) {
        cin >> N;
        solve();
    }

    return 0;
}
