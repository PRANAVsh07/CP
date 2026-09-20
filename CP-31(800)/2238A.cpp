#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> a(n), b(n);

        long long sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum1 += a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
            sum2 += b[i];
        }

        if (sum1 < sum2) {
            cout << -1 << '\n';
            continue;
        }

        // Case 1: Don't reorder
        long long ans1 = 0;
        bool possible1 = true;

        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                possible1 = false;
                break;
            }

            ans1 += a[i] - b[i];
        }

        // Case 2: Reorder
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long ans2 = c;
        bool possible2 = true;

        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                possible2 = false;
                break;
            }

            ans2 += a[i] - b[i];
        }

        if (possible1 && possible2)
            cout << min(ans1, ans2) << '\n';
        else if (possible1)
            cout << ans1 << '\n';
        else if (possible2)
            cout << ans2 << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}


