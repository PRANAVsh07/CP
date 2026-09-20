#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        long long  ans=INT_MAX;
          
        long long group =n/3;
        long long left = n%3;

        
            
           
            
   ans=min({a*n,group*b+left*a ,(group + 1) * b});
            
        

cout<<ans<<endl;
    }
}