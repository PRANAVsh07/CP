#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        int xorr=0;

      for(int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }


        if(n%2!=0){
            cout<<xorr<<endl;
           

        }
        else{
        if(xorr==0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        }
    }
    return 0;
}