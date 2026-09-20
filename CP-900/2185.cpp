#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;

    while(t--){
        int n ;
        cin>>n;


        int arr[n];
        for(int i =0 ;i<n ;i++){
            cin>>arr[i];
            

        }

   
      sort(arr,arr+n);
    int diff=0;
    int ans=0;
    int cnt=1;
      for(int i =0 ;i<n-1 ;i++){
        diff =arr[i+1]-arr[i];
        

          if(diff==1){
            cnt++;
            
         
        }
        else{
        if(diff>1){
            ans=max(cnt ,ans);
           cnt=1;
        
        }


    }
     
       
       
      }
      ans = max(ans, cnt);

      


cout<<ans<<endl;
        
    }
}