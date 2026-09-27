#include<bits/stdc++.h>
using namespace std;

int main(){
   
int t;
cin>>t;

while(t--){

    long long a,b ,c;
    cin>>a>>b>>c;
long long ans=0;
long long diff=0;
    ans = abs(b-a);
        diff= llabs((a+c)-b);
    if(a<b){
     
        ans = max(ans,diff);
        cout<<ans<<endl;
    }
    else{
        ans = diff;
        cout<<ans<<endl;
    }
}
}