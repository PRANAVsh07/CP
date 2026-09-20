#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        unordered_map<int, int> mp;

        int n;
        cin >> n;

        int maxFreq = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            maxFreq = max(maxFreq, ++mp[x]);
        }

        if (maxFreq == n) {
            cout << 0 << "\n";
            continue;
        }

        int count = 0;
        int swap1 = 0;

        while (maxFreq < n) {
            count++;                         // clone
            swap1 = min(maxFreq, n - maxFreq);
            count += swap1;                  // swaps
            maxFreq += swap1;
        }

        cout << count << "\n";
    }

    return 0;
}