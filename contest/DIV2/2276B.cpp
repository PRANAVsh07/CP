#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
     string s;
     cin>>s;
     vector<char>ans;
     int count=0;

     for(int i =0 ;i<s.size();i++){
           if(s[i]==s[i+1]){
               count++;
           }
           else{
            ans.push_back(s[i]);
           }
     }
    }

}