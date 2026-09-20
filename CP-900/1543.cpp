#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long a, b;
        cin >> a >> b;

        if(a == b) {
            cout << 0 << " " << 0 << endl;
            continue;
        }

        long long maxgcd = abs(a - b);

    int moves = min(b % maxgcd, maxgcd - (b % maxgcd));

        cout << maxgcd << " " << moves << endl;
    }
}