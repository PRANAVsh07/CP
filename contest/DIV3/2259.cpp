#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
      int n,k;
      cin>>n>>k;

string s;
cin>>s;
int count=0;

int count1=0;

int i=0;
int  j =k-1;

while(j<n){
    if(s[i]=='0'){
        count=0;
        i=j+1;
        j+=k;
        
      
    }
    else{
        if(i==j){
            
            count1+=1;
          i=j+1;
        j+=k;
            

        }
        else{
            i++;
        }
    }
    
}

cout<<count1<<endl;
    }
}




include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
      int n,k;