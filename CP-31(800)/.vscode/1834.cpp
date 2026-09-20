#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int ans =0;
        int neg=0;


        for(int  i=0;i<n ;i++){
            int x;
            cin>>x;
            if(x==-1){
                neg++;
            }
        }
        while(neg>n-neg){
            ans++;
            neg--;
        }
        if(neg%2!=0){
            ans++;
        }
        cout<<ans<<endl;
    }
}
