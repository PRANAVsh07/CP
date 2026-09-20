#include<bits/stdc++.h>

using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
       
        int n;
        cin>>n;
        int sum=0;

        int arr[n];
        for(int i=0 ;i<n ;i++){
      cin>>arr[i];
      sum+=arr[i];
        }
        int avg  = sum/n;
        int count1=0;
        int count2=0;

        for(int i =0 ;i<n ;i++){
            if(arr[i]<avg){
                count1++;
            }
          
        }

        
        for(int i =0 ;i<n ;i++){
            if(arr[i]>avg){
                count2++;
            }

        }   
bool found = false;

for (int i = 0; i < n; i++) {
    if (arr[i] == avg) {
        found = true;
        break;
    }
}

if (found) {
    cout << "NO\n";
    continue;   
}

        
          
        
        if(count1==count2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}