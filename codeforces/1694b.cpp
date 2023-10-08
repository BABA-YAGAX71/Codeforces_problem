#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define rfo(i,a,b) for(int i=a;i>=b;i--)

typedef long long ll;

void rahi() {
    int n;
    cin>>n;
    
    vector<char> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    ll ans = n;
    for (int i = 1; i < n; i++) { 
        if (s[i] != s[i - 1]) {
            ans += i;
        }
    }

    cout << ans << endl;
}

int main() {
    FIO;
    int t;
    cin >> t;
    while (t--) {
        rahi();
    }
    return 0;
}
