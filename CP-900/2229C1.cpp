#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> ans;

        int sign = 1;

        for (int i = n - 1; i >= 0; i--) {

            if (arr[i] * sign > 0) {
                ans.push_back(i + 1);

                sign *= -1;
            }
        }

        cout << ans.size() << '\n';

        for (int x : ans) {
            cout << x << " ";
        }

        cout << '\n';
    }
}