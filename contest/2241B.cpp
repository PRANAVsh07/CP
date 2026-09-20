#include<bits/stdc++.h>

using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int x,y;
        cin>>x>>y;

        bool find=false;

        if(y>x){
            cout<<"NO"<<endl;
            continue;
        }

        for(int i=1;i<=100 ;i++){
            if(y*i==x){
                find =true;
                break;
            }
        }
        if(find){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

