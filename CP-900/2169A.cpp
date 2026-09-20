#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n ;
        cin>>n;

        int a ;
        cin>>a;
        int arr[n];
        int left=0;
        int right=0;
        int bob=0;

        for(int i =0 ;i<n ;i++){
            cin>>arr[i];
            if(arr[i]>a){
                right++;
            }
   if(arr[i]<a){
    left++;

   }
        }
   if(left>right){
        a-=1;
        cout<<a<<endl;
   }
   else{
    a+=1;
    cout<<a<<endl;
   }
        

    }
}