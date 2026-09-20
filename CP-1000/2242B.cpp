#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        // Part 2 prefix sum
        // 1,2 -> +1
        // 3   -> -1

        vector<int> p2(n);

        for (int i = 0; i < n; i++) {

            if (a[i] == 3)
                p2[i] = -1;
            else
                p2[i] = 1;

            if (i > 0)
                p2[i] += p2[i - 1];
        }


        // mx[i] = maximum p2[j]
        // for j from i to n-2

        vector<int> mx(n);

        mx[n - 2] = p2[n - 2];

        for (int i = n - 3; i >= 0; i--) {
            mx[i] = max(p2[i], mx[i + 1]);
        }


        // Part 1
        // 1 -> +1
        // 2,3 -> -1

        int pref1 = 0;

        bool possible = false;

        for (int i = 0; i <= n - 3; i++) {

            if (a[i] == 1)
                pref1++;
            else
                pref1--;

            // Part 1 condition
            if (pref1 < 0)
                continue;

            // Part 2 condition:
            //
            // p2[j] - p2[i] >= 0
            //
            // p2[j] >= p2[i]

            if (mx[i + 1] >= p2[i]) {
                possible = true;
                break;
            }
        }

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}