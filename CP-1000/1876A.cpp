#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n ;
         cin>>n;

         int k;
         cin>>k;

         vector<int>a(n);
         vector<int>b(n);
         vector<pair<int ,int >> v;

        for(int i  =0 ;i<n ;i++){
            cin>>a[i];
        }
        
        for(int i  =0 ;i<n ;i++){
            cin>>b[i];
        }

        for(int i =0 ;i<n ;i++){
            v.push_back({b[i],a[i]});
        }
        sort(v.begin()  , v.end());
        int  informed=1;
        int ans=k;

        for (auto it : v) {
           int  cost  = it.first;
           int  capacity = it.second;
            if(informed==n){
                break;
            }
            if(cost>=k){
                break;
            }
            int share =min(capacity,n-informed);

            ans+=1LL*share*cost;
            informed+=share;

            

            
        }

    }
}