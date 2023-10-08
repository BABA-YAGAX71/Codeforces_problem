#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        char c;
        cin >> n >> k;
        vi upper(26), lower(26);
        for (int i = 0; i < n; ++i) {
            cin >> c;
            if (islower(c))
                lower[c - 'a']++;
            else upper[tolower(c) - 'a']++;
        }
        int cnt = 0, tot = 0;
        for (int i = 0; i < 26; ++i) {
            cnt += abs(upper[i] - lower[i]) / 2;
            tot += min(upper[i], lower[i]);
        }
        cout << tot + min(cnt, k) << endl;
    }
    return 0;
}