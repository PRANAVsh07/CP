#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        vector<int> ans;

        for (int i = 0; i < N; i++) {
            ans.push_back(N + 1 - arr[i]);
        }

        for (int i = 0; i < N; i++) {
            cout << ans[i] << " ";
        }
             cout << "\n";
    }

    return 0;
}