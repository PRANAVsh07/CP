#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
      
 
        int arr[n];
        for(int i = 0 ;i<n ;i++){
            cin>>arr[i];
        }
        int sum =0;
 
        sort(arr,arr+7);
        for(int  i=0;i<7 ;i++){
            if(i<=5){
                sum-=arr[i];
            }
            else{
                sum+=arr[i];
            }
        }
        cout<<sum<<endl;
 
    }
}