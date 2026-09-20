#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n ;i++){
            cin>>arr[i];
        }
        int maxi =0;


        int high= 0;
        int low=0;
        int  largest = *max_element(arr ,arr+n);
         int  smallest = *min_element(arr ,arr+n);



           for(int i=0 ;i<n ;i++){
            if(arr[i]==largest){
                high = i;
            }
            if(arr[i]== smallest){
                low=i;
            }
           }
            if(high==low+1 || high==low-1||low==high){
                cout<<high-low<<endl;
                continue;
            }
            if(high==n-1||low==0){
                    cout<<high-low<<endl;
                continue;
            }
            int diff=0;
          diff= arr[0]-arr[n-1];
            for(int i=0;i<n ;i++){
            maxi=max(diff,arr[i-1]-arr[i]);
                
            }
            cout<<maxi<<endl;

    }
}