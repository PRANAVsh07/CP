#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     while(t--){
        int n ;
        cin>>n;

   int    num=n+1;
       bool find =true;
       bool get =true;

    for(int i =n-1;i>=2 ;i--){
        if(num%i==0||i%num==0){
            find=false;
       
          break;
        }

    }
 for(int i =3;i<=n+1 ;i++){
        if(2%i!=0||i%2!=0){
            get=false;
       
          break;
        }

    }

    if(find==true||get==true){
        cout<<"YES"<<endl;
        continue;
    }
    else{
        cout<<"NO"<<endl;
    }

     }
    }