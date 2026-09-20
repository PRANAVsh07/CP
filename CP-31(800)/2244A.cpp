#include<bits/stdc++.h>
using namespace std;
int main(){ 

    int t;
    cin>>t;
    while(t--){
        int n ; 
        cin>>n;

        string s;
        cin>>s;

        int maxi = 0;
        int count =0;
        int ans =0;

        for(int i =0 ;i<n ;i++){
            if(s[i]=='#'){
                count++;
                  maxi = max(count,maxi);
            }
            else{
          
                count=0;
            }
        }
        if(maxi%2==0){
            ans = maxi/2;
            cout<<ans<<endl;
            continue;
        }
        else{
            cout<<(maxi/2)+1<<endl;
        }
    }
}
