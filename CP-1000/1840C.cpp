
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if (arr[i] <= q) {
                arr[i] = 1;
            } else {
                arr[i] = 0;
            }
        }

        int count = 0;
        long long res = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                count++;
            } else {
                if (count >= k) {
                    long long x = count - k + 1LL;
                    res += x * (x + 1) / 2;
                }

                count = 0;
            }
        }

        if (count >= k) {
            long long x = count - k + 1LL;
            res += x * (x + 1) / 2;
        }

        cout << res << endl;
    }

    return 0;
}

