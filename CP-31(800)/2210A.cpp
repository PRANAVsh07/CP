#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n ;
        cin>>n;
        int arr[n+1];
    int    low=n+1;

        for(int i =1;i<=n ;i++){
            arr[i]=low-i;
               
        }

        
        for(int i =1 ;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

}