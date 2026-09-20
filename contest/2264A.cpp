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

        bool find = true;

        vector<int> ans;

        for (int i = 1; i <= n; i++) {
            if (arr[i] != i) {
                ans.push_back(arr[i]);
            }
        }

        reverse(ans.begin(), ans.end());

      
        for (int i = 0; i + 1 < ans.size(); i++) {
            if (ans[i] > ans[i + 1]) {
                find = false;
                break;
            }
        }

        if (find == false) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
