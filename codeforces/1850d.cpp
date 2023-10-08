#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> difficulties(n);
        for (int i = 0; i < n; i++) {
            cin >> difficulties[i];
        }

        sort(difficulties.begin(), difficulties.end());

        int ans = n - 1;

        for (int i = 0; i < n; i++) {
            int start = difficulties[i];
            int end;
            if(k>1){
                end = start + k;
            }
            else{
                end = start;
            }

            int j = upper_bound(difficulties.begin(), difficulties.end(), end) - difficulties.begin();
            int numRemoved = i+(n - j);

            ans = min(ans, numRemoved);
        }

        cout << ans << endl;
    }

    return 0;
}
