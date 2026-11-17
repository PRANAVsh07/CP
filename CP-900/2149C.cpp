#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k; ; 
        cin>>n>>k;

        int arr[n];
        int count=0;
        vector<int>cnt(k+1,0);

        for(int i =0 ;i<n ;i++){
            cin>>arr[i];

        }

       for(int  i = 0;i<n ;i++){
           
            if(arr[i]<=k){
               cnt[arr[i]]++;
            }
            
          
       }
       int missing =0;
       for(int i =0 ;i<k ;i++){
               if (cnt[i] == 0){
                missing++;
        
       }
    }
        cout << max(missing, cnt[k]) << endl;
    
    }
}