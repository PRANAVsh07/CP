#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int arr[n];
        int  sum=0;
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    
 
    sort(arr  ,arr+n);
    bool find =true
 
    for(int i =1;i<n ;i++){
        sum+=arr[i-1];
        if(arr[i]<=sum){
            
            find=false;
            break;
        }
       
    }

    if(find==false){
        cout<<"-1"<<endl;
    }
    else{
    for(int  i = 0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
}
}