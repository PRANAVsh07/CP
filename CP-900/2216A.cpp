#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
      int n;
      cin>>n;
      int k;
      cin>>k;
 int n1 = k;
 int n2 = k+1;
      int limit[n1];
      for(int i =0 ;i<n1 ;i++){
        cin>>limit[i];
      }
 
        int arr[n2];
        for(int i = 0 ;i<n2 ;i++){
            cin>>arr[i];
        }
        vector<int>ans;
  
for(int i =0 ;i<n2 ;i++){
    for(int j =0 ; j<n2 ;j++){
        if(arr[j]<n2){
            arr[j]++;
            ans.push_back(j);
        }
    }
    for(int i =0 ;i<n ;i++){
        cout<<ans[i]<<endl;
    }
    cout<<endl;
}
    }
}