#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long r = n % 12;
        long long a;

        if (r <= 9) {
            a = r;
        }
        else if (r == 10) {
            a = 22;
        }
        else { // r == 11
            a = 11;
        }

        if (a > n) {
            cout << -1 << "\n";
        } else {
            cout << a << " " << n - a << "\n";
        }
    }

    return 0;
}