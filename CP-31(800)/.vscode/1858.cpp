#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int b;
        cin>>b;
        int c;

        cin>>c;

        if(c%2==0){
            if(a<b){
                cout<<"Second"<<endl;
            }
            else if(a>b){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
        
        else{
           int anna = a+(c+1)/2;
           int canna = b+c/2;

           if(anna<canna){
               cout<<"Second"<<endl;
           }
           
           else{
               cout<<"First"<<endl;
           }
        }
    }


       
        }
    
    
