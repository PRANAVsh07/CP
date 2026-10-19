
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n), arr2(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
        }

        vector<int> longest1(2 * n + 1, 0);
        vector<int> longest2(2 * n + 1, 0);

        int count = 1;

     
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                longest1[arr[i - 1]] =
                    max(longest1[arr[i - 1]], count);
                count = 1;
            }
        }

        longest1[arr[n - 1]] =
            max(longest1[arr[n - 1]], count);

        count = 1;

     
        for (int i = 1; i < n; i++) {
            if (arr2[i] == arr2[i - 1]) {
                count++;
            } else {
                longest2[arr2[i - 1]] =
                    max(longest2[arr2[i - 1]], count);
                count = 1;
            }
        }

        longest2[arr2[n - 1]] =
            max(longest2[arr2[n - 1]], count);

        int answer = 0;

    
        for (int i = 1; i <= 2 * n; i++) {
            answer = max(answer, longest1[i] + longest2[i]);
        }

        cout << answer << '\n';
    }

    return 0;
}


