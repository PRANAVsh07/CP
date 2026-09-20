#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n ;
        cin>>n;
        int arr[n];
        int ans =0;

        int count1=0;
        int count0=0;

        for(int i=0 ;i<n ;i++){
            cin>>arr[i];
            if(arr[i]==1){
                count1++;
            }
            if(arr[i]==0){
                count0++;
            }

        }

       if (count1 == 0) {
    cout << 0 << '\n';
continue;
      }  
 else {
    long long ans = (1LL << count0) * count1;
    cout << ans << '\n';
}
       
       
    

        
    }
}



