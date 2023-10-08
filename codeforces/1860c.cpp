#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define rfo(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define ss second
#define ff first
#define ub upper_bound
#define lb lower_bound

typedef vector<int> vi;

int main() {
    FIO;
    int  t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        int mini = INT_MAX;
        int MIN = INT_MAX;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (ar[i] > mini && ar[i] < MIN) {
                count++;
                MIN = min(MIN, ar[i]);
            }
            mini = min(mini, ar[i]);
        }
        cout << count << endl;
    }
    return 0;
}
