#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

     

        fsort(a.begin(), a.end());

int cnt = 0;

for (int i = 0; i < n; i++) {
    if (a[i] != a[n - 1 - i])
        cnt++;
}

cout << cnt / 2 << '\n';
    }

    return 0;
}