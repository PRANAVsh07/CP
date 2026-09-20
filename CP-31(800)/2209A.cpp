#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long c;
        int k;

        cin >> n >> c >> k;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {

            // If the smallest remaining monster cannot be killed,
            // no other monster can be killed either.
            if (a[i] > c)
                break;

            // Maximum flips we can safely use on this monster
            long long flips = min(1LL * k, c - a[i]);

            k -= flips;

            // Kill the monster after increasing its power
            c += a[i] + flips;
        }

        cout << c << '\n';
    }

    return 0;
}