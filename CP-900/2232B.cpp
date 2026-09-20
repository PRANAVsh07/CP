#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n + 1];
        int ans[n + 1];

        long long cur_sum = 0;

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        for (int i = 1; i <= n; i++) {
            cur_sum += arr[i];

            int current = cur_sum / i;

            if (i == 1) {
                ans[i] = current;
            } 
            else {
                ans[i] = min(ans[i - 1], current);
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
}









    