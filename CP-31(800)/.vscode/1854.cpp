#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t--){
        long long N;
        cin>>N;
        long long diff =0;
        long long operation =INT_MAX;
        long long count =0;

       

        int arr[N];
        for(int i =0;i<N ;i++){
            cin>>arr[i];

            
        }
        for(int i=0;i<N-1 ;i++){
            if(arr[i]<=arr[i+1]){
                diff = arr[i+1]-arr[i];

                count = diff/2+1;
                operation = min(operation , count);
            }
            else{
                operation =0;
            }
        }
        cout<<operation<<endl;
    }
    }