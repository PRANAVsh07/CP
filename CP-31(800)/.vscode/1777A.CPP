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
        int counteven=0;
        int countodd=0;
        int ans=0;

        for(int i =0;i<n-1 ;i++){
            if(arr[i]%2==0&&arr[i+1]%2==0){
                counteven++;
               // countodd=0;
            }
              if(arr[i]%2!=0&&arr[i+1]%2!=0){
                countodd++;
               // countodd=0;
            }


        }
        ans=(counteven)+(countodd);
        cout<<ans<<endl;
    }
}