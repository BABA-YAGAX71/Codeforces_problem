#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> hops(n);
        for (int i = 0; i < n; ++i) {
            cin >> hops[i];
        }

        sort(hops.begin(), hops.end(), greater<int>());

        int maxFrogs = 0;
        for (int i = 1; i <= n; ++i) {
            int numFrogs = min(i, hops[i - 1]);
            maxFrogs = max(maxFrogs, numFrogs);
        }

        cout << maxFrogs << endl;
    }

    return 0;
}
