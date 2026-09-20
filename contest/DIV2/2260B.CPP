#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        int count0 = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
          if(arr[i]==0){
         count0++;
        }
           
        }

        int low = arr[0];
        int high = arr[n - 1];

      
        if(n==2){
             if (low == 0 && high == 0) {
             cout << "0" << endl;
        }
        else{
            cout<<"-1"<<endl;
        }
            
        }

     else   if(count0==1){
             if (low == 0 && high == 0) {
             cout << "0" << endl;
        }
        else if (low == 0 || high == 0) {
         cout << "1" << endl;
         }
         else{
            cout<<"-1"<<endl;
         }
        }

    else {
    if(count0>1){
             if (low == 0 && high == 0) {
             cout << "0" << endl;
        }
        else if (low == 1 && high == 1) {
         cout << "2" << endl;
         }
          else if (low == 0 || high == 0) {
         cout << "1" << endl;
         }
         else{
            cout<<-1<<endl;
         }
         
        }
       
    }
}


    return 0;
}