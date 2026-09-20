#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;

        int arr[n];
        for(int i =0;i<n ;i++){
            cin>>arr[i];
        }
        bool found =false;

        for(int i =0;i<n ;i++){
            if(arr[i]==k){
                found =true;
            
           
            
        }
    }
        if(found){
            cout<<"yes"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        }   

}