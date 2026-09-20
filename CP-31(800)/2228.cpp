#include<bits/stdc++.h>
using namespace std;
int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n ; 
        cin>>n;

        int arr[n];
        for(int i =0;i< n;i++){
            cin>>arr[i];
        }
        int count0 = 0, count1 = 0, count2 = 0;

      int ans = 0;
        for(int i= 0;i<n ;i++){
           if(arr[i]==2){
            count2++;
           }
         else if(arr[i]==1){
            count1++;
           }
           else{
            count0++;
           }

        }
        if((count1-count2)%3==0){
            ans++;
        }

        ans += min(count1,count2);
        cout<<ans+count0<<endl;
    }
}