#include<bits/stdc++.h>

using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
    int n ;
     cin>>n;

     unordered_map<int ,int>mp;


     int arr[n];
     for(int i=0;i<n ;i++){
        cin>>arr[i];
        mp[arr[i]]++;
     }
       vector<int>ans;
     for(auto &p:mp){
        ans[i] = p.first;
        y = p.second;
     }

     sort(ans.begin() , ans.end());

     for(int i =n-1 ;i>=0 ;i--){
          
     }

      


     




    }
}