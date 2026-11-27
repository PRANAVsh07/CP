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

 string s;
 cin>>s;
    
 
 int high=0;
 int low =0;
 int ans =INT_MAX;
 int count =0;
 while(high<n){

    if(high-low+1<=k){
        
        if(s[high]=='W'){
            count++;
            high++;
        }
        else{
            
            high++;
        }
    }

    
    else{
         ans=min(count,ans);
         if(s[low]=='W'){
            count--;
         }
 
   low++;
    }
 }
       ans=min(count,ans);
    cout<<ans<<endl;  

    }
}