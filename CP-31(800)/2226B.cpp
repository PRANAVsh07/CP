#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    const long long MOD = 676767677;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        long long ans = 0;
        int lastNonOne = -1;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] != 1) {
                ans += a[i];
                lastNonOne = i;
            }
        }

        // All elements are 1
        if (lastNonOne == -1) {
            cout << 1 << '\n';
            continue;
        }

        // There are 1s after the last non-1
        if (lastNonOne != n - 1) {
            ans += 1;
        }

        cout << ans % MOD << '\n';
    }
}