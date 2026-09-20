#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n + 1];

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        int ans1 = 0, ans2 = 0, ans3 = 0;

        for (int j = 2; j < n; j++) {

            // Find i on the left
            for (int i = 1; i < j; i++) {
                if (arr[i] < arr[j]) {
                    ans1 = i;
                    break;
                }
            }

            // Find k on the right
            for (int k = j + 1; k <= n; k++) {
                if (arr[k] < arr[j]) {
                    ans3 = k;
                    break;
                }
            }

            if (ans1 != 0 && ans3 != 0) {
                ans2 = j;
                break;
            }

            // Reset for next j
            ans1 = 0;
            ans3 = 0;
        }

        if (ans1 == 0 || ans2 == 0 || ans3 == 0) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            cout << ans1 << " " << ans2 << " " << ans3 << '\n';
        }
    }

    return 0;
}