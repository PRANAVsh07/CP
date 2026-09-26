#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        

        string s;
        cin>>s;

        int low=0;
        int high = n-1;
          int count=0;
     while(low<high){
        if(s[low]==s[high]){
            low++;
            high--;
        }
        else if(s[low]==c||s[high]==c){
            count++;
            low++;
            high--;
        }
        else{
            count+=2;
            low++;
            high--;
        }

     }
cout<<count<<endl;
        
    }
}
