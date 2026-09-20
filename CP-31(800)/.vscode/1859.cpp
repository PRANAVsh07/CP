#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       
        int arr[n];
        for(int i =0;i<n ;i++){
            cin>>arr[i];
        }
        vector<int>b;
        vector<int>c;

        int element = *min_element(arr, arr + n);

        for(int i =0;i<n ;i++){
            if(arr[i]==element){
                b.push_back(arr[i]);
            }
            else{
                c.push_back(arr[i]);
            }
        }
        if(c.empty()){
            cout<<"-1"<<endl;
            continue;
        }
        cout<<b.size()<<endl;
        cout<<c.size()<<endl;
        for(int i = 0; i < b.size(); i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(int i = 0; i < c.size(); i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}