#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Process from right to left
        for (int i = n - 2; i >= 0; i--) {
            if (a[i + 1] > 0) {
                a[i] += a[i + 1];
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                ans++;
            }
        }

        cout << ans << '\n';
    }
}