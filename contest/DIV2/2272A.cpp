#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int pivot = n - k;

        int count1 = -1;
        int count2 = -1;

        int maxLeft = INT_MIN;
        int minRight = INT_MAX;

        for (int i = 0; i <= pivot; i++) {
            if (arr[i] > maxLeft) {
                maxLeft = arr[i];
                count1 = i;
            }
        }

        for (int i = pivot + 1; i < n; i++) {
            if (arr[i] < minRight) {
                minRight = arr[i];
                count2 = i;
            }
        }

        if (maxLeft > minRight) {
            cout << count1 + 1 << " " << count2 + 1 << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         vector<int> a(n + 1), pos(n);
//         for (int i = 1; i <= n; i++) {
//             cin >> a[i];
//             pos[a[i]] = i;
//         }
//         int m = n - k + 1;

//         // smallest value < m that is not in the prefix [1..m]
//         int x = -1;
//         for (int v = 0; v < m; v++) {
//             if (pos[v] > m) { x = v; break; }
//         }
//         if (x == -1) {
//             cout << -1 << '\n';
//             continue;
//         }

//         // any prefix position holding a value >= m
//         int p = -1;
//         for (int i = 1; i <= m; i++) {
//             if (a[i] >= m) { p = i; break; }
//         }
//         cout << p<< " " << pos[x] << '\n';
//     }
// }