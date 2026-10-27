#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;
        int ans=0;

     if(a<=b){
        cout<<"-1"<<endl;
        continue;
     }
     else if(a>=2*b){
        ans=b;
     }
     else{
        ans = a-b;
     }
    
    cout<<ans<<endl;
    }
}