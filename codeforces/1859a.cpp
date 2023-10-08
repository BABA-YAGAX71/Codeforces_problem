#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fo(i,a,b) for(int i=a; i<=b; i++)
#define rfo(i,a,b) for(int i=a; i>=b; i--)

typedef long long int ll;
typedef vector<int> vi;

void rahi() {
    int n;
    cin >> n;
    vi ar(n);
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    if (ar[0] == ar[n - 1]) {
        cout << -1 << endl;
    } else {
        int i = 0;
        while (ar[i] == ar[0]) {
            i++;
        }
        cout << i << ' ' << n - i << endl;
        for (int j = 0; j < i; j++) {
            cout << ar[j] << ' ';
        }
        cout << endl;
        for (int j = i; j < n; j++) {
            cout << ar[j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    FIO;
    ll t;
    cin >> t;
    while (t--) {
        rahi();
    }
    return 0;
}
