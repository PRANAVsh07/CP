#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<long long, int> mp;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            mp[x]++;
            sum += x;
        }

        // Most frequent value
        long long X = 0;
        int F = 0;

        for (auto p : mp) {
            if (p.second > F) {
                F = p.second;
                X = p.first;
            }
        }

        int O = n - F;

        // How many X's can contribute?
        int use = min(F, O + 2);

        // Remove the X's that cannot contribute
        long long ans = sum - 1LL * (F - use) * X;

        cout << ans << '\n';
    }
}