#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int find =arr[0];
        int ans = 0;

        if(n<=1){
            find = gcd(arr[0],arr[1]);
            cout<<find<<endl;
            continue;
        }

        for (int i = 1; i < n; i++) {

            find = gcd(find, arr[i]);

            ans = max(ans, find);
        }
        if(ans>arr[0]){
            cout<<ans<<endl;
        }
        else{
            cout<<arr[0]<<endl;
        }

        


        
    }
}