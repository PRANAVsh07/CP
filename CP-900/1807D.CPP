#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
     while(t--){
        int n ; 
        cin>>n;
        int q;
        cin>>q;
        long long sum=0;

        int arr[n];
        for(int i=0;i<n ;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        vector<int >prefix(n);
        prefix[0]=arr[0];
        for(int i=1;i<n ;i++){
            prefix[i] = prefix[i-1]+arr[i];
        }
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        
          long long ans =0;
        int left = l-1;
        int right=r-1;
        int segmentsum=0;
        

       if(left==0){
         segmentsum = prefix[right];
       }
       else{
        segmentsum = prefix[right]-prefix[left-1];
      
       }
          ans  = sum-segmentsum+1LL * (right - left + 1) * k;
       
        if(ans%2==0){
          cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
       
    }
        
     }
}




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//      while(t--){
//         int n ; 
//         cin>>n;
//         int q;
//         cin>>q;

//         int arr[n];
//         for(int i=0;i<n ;i++){
//             cin>>arr[i];
//         }
//     while(q--){
//         int l,r,k;
//         cin>>l>>r>>k;
//         long long sum =0;

//         int left = l-1;
//         int right=r-1;

//         while(left<=right){
          
//             arr[l]=k;
//             l++;
//         }

//         for(int i=0;i<n ;i++){
//             sum+=arr[i];
//         }
//         if(sum%2==0){
//           cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"YES"<<endl;
//         }
       
//     }
        
//      }
// }