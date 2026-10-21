
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        vector<int> current, green;

        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                current.push_back(i);
            }
            if (s[i] == 'g') {
                green.push_back(i);
            }
        }

        int ans = INT_MIN;
        if (c == 'g') {
    cout << 0 << '\n';
    continue;
}
       


        for (int i = 0; i < current.size(); i++){
            int idx = current[i];
            int dist = 0;

            bool found = false;

            for (int j = 0; j < green.size(); j++) {
                if (green[j] > idx) {
                    dist = green[j] - idx;
                    found = true;
                    break;
                }
            }

            

            if (!found) {
                dist = n - idx + green[0];
            }

            ans = max(ans, dist);
        }

        cout << ans << '\n';
    }

    return 0;
}

