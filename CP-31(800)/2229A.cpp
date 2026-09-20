#include<bits/stdc++.h>
using namespace std;
int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n ; 
        cin>>n;

        int arr[n];
        for(int i =0;i< n;i++){
            cin>>arr[i];
        }
        int maxe = *max_element(arr,arr+n);
        int mine = *min_element(arr,arr+n);

        int x = (maxe+mine)/2;
        cout<<maxe-x<<endl;

    }
}
