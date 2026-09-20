#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int arr[n];
        int  count0=0;
        int count1=0;
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i]==0){
                count0++;
            }
            else{
                count1++;
            }
        }
if(count0==count1){
    cout<<"Bessie"<<endl;
}
else if(count0>count1){
    cout<<"Elsie"<<endl;
}
else{
    cout<<"Bessie"<<endl;
}
    }
}