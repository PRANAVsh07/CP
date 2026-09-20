#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n ;
        cin>>n;
        int p=3*n;

        int arr[p+1];
        vector<int>ans;
        int mid = (p/2)-1;
        

        for(int i =1 ;i<=p;i++){
       cin>>arr[i];
        }
        int j=0;

     for(int i =1 ;i<=n ;i++){
        if(ans.size()==p){
            break;
        }
        ans.push_back(i);
        ans.push_back(arr[mid+j]);
        j++;
        ans.push_back(arr[mid+j]);
        j++;
     }

     for(int i =1 ;i<=p ;i++){
        cout<<ans[i]<<" ";

     }
     cout<<endl;

}
}