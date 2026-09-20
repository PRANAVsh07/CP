#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    

    while(t--){
        int n ,x;
        cin>>n>>x;
        int maximum=0;
        int minimum =0;
        int sum=0;


        int arr[n];
        for(int i=0 ;i<n ;i++){
            cin>>arr[i];
            sum+=arr[i];
           maximum+=ceil(double(arr[i])/x);

        }

        minimum =ceil(double(sum)/x);

        cout<<minimum<<" "<<maximum;

        
    }
}