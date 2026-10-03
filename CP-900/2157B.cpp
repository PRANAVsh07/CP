#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        string s;
        cin >> s;

        x = abs(x);
        y = abs(y);

        int count4 = 0, count8 = 0;

        for (char c : s) {
            if (c == '4')
                count4++;
            else
                count8++;
        }

        int mini = min(x, y);
        int maxi = max(x, y);

        int use8 = min(count8, mini);

        int remaining = (x - use8) + (y - use8);

        if (remaining <= count4 + (count8 - use8))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}