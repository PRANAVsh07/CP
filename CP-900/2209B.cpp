#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;


    while(t--){
        int n;
        cin>>n;
    int arr[n];
    for(int i =0 ;i<n ;i++){
        cin>>arr[i];
    }
 
    for(int i  =0 ;i<n ;i++){
        int smaller =0;
        int greater =0;
        for(int j = i+1 ;i<n ;i++){
               if(arr[i]>arr[j]){
                smaller++;
               }
              if(arr[i]<arr[j]){
                greater++;
              }

        }
        cout<<max(smaller,greater)<<" ";
    }
    cout<<endl;
}
}