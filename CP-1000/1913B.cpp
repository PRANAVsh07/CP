#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;

        int count0 = 0, count1 = 0;

        for (char c : s) {
            if (c == '0')
                count0++;
            else
                count1++;
        }

        int n = s.size();

        for (int i = 0; i < n; i++) {

            if (s[i] == '0') {
                count1--;

                if (count1 < 0) {
                    cout << n - i << endl;
                    break;
                }
            }
            else {
                count0--;

                if (count0 < 0) {
                    cout << n - i << endl;
                    break;
                }
            }
        }
    }

    return 0;
}