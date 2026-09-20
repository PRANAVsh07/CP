#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n ;
        cin>>n;

        vector<int>ans(n);
         for(int i =0;i<n ;i++){
            cin>>ans[i];
         }
         int count =0;



        for(int i =0 ;i<ans.size() ;i++){
            for(int j=i+1 ;j<ans.size();j++){
                if(ans[i]>ans[j]){
                    count++;
           ans.erase(ans.begin() + j);
           j--;
                }
            }
        }
        cout<<count<<endl;;
    }
    

}