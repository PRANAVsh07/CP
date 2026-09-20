#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n ;
        cin>>n;

        vector<int>ans;


        for(int i=1 ;i<=2*n;i++){

            if(ans.size()==n){
                break;
            }
      if(i%2!=0){
       ans.push_back(i);
       }
    }
          
        for(int i=0;i<ans.size() ;i++){
            cout<<ans[i]<<" ";
        }
       cout<<endl;
    }
}