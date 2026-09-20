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
        sort(arr, arr + n);  
          
        int element1 = *max_element(arr, arr + n);
        int element2 = *min_element(arr, arr + n);

        if (element1 == element2) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;

         cout<<element1<<" "<<endl;

            for (int i = 0; i < n-1; i++) {
                cout << arr[i] << " ";
            }
            cout<<endl;
           
        }
    }
}