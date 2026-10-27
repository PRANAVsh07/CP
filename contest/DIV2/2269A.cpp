#include<bits/stdc++.h>
using namespace std;

int pow(int power){
    
    int ans=1;
    while(power>0){

    ans*=2;
    power--;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k ;
         cin>>n>>k ;

  int diff = n-k+1;

 int  res=pow(diff);
 int count=0;

count= 2*(k-1)+res;

cout<<count<<endl;

    }
}