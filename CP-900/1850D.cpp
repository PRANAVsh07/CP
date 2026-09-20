#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        int maxi = 1;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int count = 1;
        sort(arr ,arr+n);
  
       for(int i=1 ;i<n ;i++){
        int ans =abs(arr[i]-arr[i-1]);
        if(ans<=k){
            count++;
            maxi=max(count,maxi);
        }
        else{
            count=1;
        }
       }

        cout << abs(n - maxi) << endl;
    }

    
}

