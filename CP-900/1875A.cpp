#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        long long sum =b;

        int arr[n];

        for(int i=0;i<n ;i++){
            cin>>arr[i];
            sum+=min(arr[i],a-1);
        }
        cout<<sum<<endl;
    }
}
