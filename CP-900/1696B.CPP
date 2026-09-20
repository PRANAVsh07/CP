#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int count0=0;
        int arr[n];
        for(int i=0;i<n ;i++){
            cin>>arr[i];
            if(arr[i]==0){
                count0++;
            }
        }
        int l=0;
        int r=n-1;

       while(l<n&&arr[l]==0){
        l++;
       }
       while(r>=0&&arr[r]==0){
        r--;
       }
if(count0==n){
    cout<<"0"<<endl;
    continue;
}
       

       int count=1;

       for(int i=l ;i<=r ;i++){
      if(arr[i]==0){
        count++;;
        break;
      }
      
      
       }
       cout<<count<<endl;
    }

}