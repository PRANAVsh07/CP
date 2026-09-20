#include <bits/stdc++.h>
using namespace std;

int getComponent(int x) {
    while (x % 2 == 0) {
        x /= 2;
    }
    return x;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        bool possible = true;

        for (int i = 1; i <= n; i++) {
            if (getComponent(i) != getComponent(a[i])) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }
}