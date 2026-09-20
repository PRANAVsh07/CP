#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int ans =0;
        int count=0;
        int n = s.size();
  
         if(s[0]=='u'){
           ans +=1;
         }
         if(s[n-1]=='u'){
            ans+=1;
         }
        for(int i =1  ;i<n-1;i++){
          if(s[i]=='u'){
            count++;
          }
          else{
            ans+=count/2;
            count=0;
          }
        }
        ans += count / 2;
cout<<ans<<endl;

    }
}