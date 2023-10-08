#include<bits/stdc++.h>
using namespace std;
#define CaseT int CaseT; cin >> CaseT; while(CaseT--)
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<int, int> PPI;
typedef pair<PII, PII> PPP;
 
const int INF = 0x3f3f3f3f;
const int N = 2e5 + 10;
const double eps = 1e-6;
 
ll n, k;
ll a[N];
 
bool check(ll mid) {
    ll kk = k;
    for (int i = 1; i <= n; i++) {
        ll x = a[i] + 2 * mid;
        kk -= x * x;
        if (kk < 0) return false;
    }
    if (kk >= 0) return true;
    return false;
}
 
void solve() {
    cin >> n;
    cin >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    ll L = 0; ll R = 1000000000;
    while(L < R) {
        ll mid = L + R + 1 >> 1;
        if (check(mid)) L = mid;
        else R = mid - 1;
    }
 
    cout << L << endl;
 
}
 
int main() {
    cin.tie(0), cout.tie(0)->sync_with_stdio(false);
    CaseT
    solve();
    return 0;
}
 
 