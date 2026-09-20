#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long arr[n];
        for(int i=0;i<n ;i++){
            cin>>arr[i];
    }
    bool find= true;
  for(int i=0;i< n-1 ;i++){
    if(arr[i]<i+1){
        find =false;
        break;
    }

    long long give=arr[i]-(i+1);
    arr[i]=i+1;
    arr[i+1]+=give;
  }
if(find==true){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
   

    }
}