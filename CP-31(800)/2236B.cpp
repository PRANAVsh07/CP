#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
 

      string s;
   cin>>s;
       
   vector<int>ans(k,0);

   for(int i =0;i<n ;i++){
    ans[i%k]+=s[i]-'0';
   }
   bool ok =true;
   for(int  i =0 ;i<k;i++){
    if(ans[i]%2!=0){
        ok= false;
        break;
    }
   }

if(ok==true){
    cout<<"YES"<<endl;
}
        else{
            cout<<"NO"<<endl;
        }

    }
}