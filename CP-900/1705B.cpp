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
        int first=0;
        while(arr[first]==0&&first<n){
            first++;

        }
        long long ans=0;

        for(int i=first;i<n-1 ;i++){
            if(arr[i]==0){
                ans++;
            }
            else{
                ans+=arr[i];
            }
        }
        cout<<ans<<endl;
       
}
}