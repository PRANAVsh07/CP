#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
    int t;
    cin>>t;
    while(t--){
        int  n ;
        cin>>n;
        int count=0;
        int count1=0;
        int count2=0;
        int arr[n];
        for(int i =0;i<n ;i++){
            cin>>arr[i];

            if(arr[i]==2){
                count++;
            }
            else{
                count1++;
            }

        }
        if(count%2!=0){
            cout<<"-1"<<endl;
            continue;
        }
        if(count1==n){
            cout<<"1"<<endl;
            continue;
        }
        for(int i=0;i<n ;i++){
            if(arr[i]==2){
                count2++;
            }
            if(count2==count/2){
                cout<<i+1<<endl;
                break;

            }
        }
    }

    return 0;
}
