#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()  {
int t;
cin>>t;

while(t--){
    int n1; 
    


int r,x,d,n;
cin>>r>>x>>d>>n;

string s;
cin>>s;

int count =0;
n1=s.size();

for(int  i =0 ;i<n1 ;i++){
    if(r>=x){
        if(s[i]=='1'){
          count++;
          r=r-d;
        }
       
    }
   
   else{
    if(r<x){
        if(s[i]=='1'||s[i]=='2'){
          count++;
          r=r-d;
        }
       
    }
   }


}

   cout<<count<<endl;

}
}
