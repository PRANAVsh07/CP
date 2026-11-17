
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        vector<long long> ans(n, 0);

        long long check = k * b;
        long long count = s - check;

        if (s < check || s > check + n * (k - 1)) {
            cout << -1 << endl;
            continue;
        }

        ans[n - 1] = check;

        int low = n - 1;

        while (low >= 0 && count != 0) {
            long long add = min(count, k - 1);

            ans[low] += add;
            count -= add;
            low--;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}

