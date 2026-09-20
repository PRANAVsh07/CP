#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n ; 
        cin>>n;

        int count0=0;
        int count1=0;
        int count2=0;

        int arr[n];
        for(int i =0 ;i<n ;i++){
            cin>>arr[i];
            if(arr[i]==2){
            count2++;
            }
            else if(arr[i]==1){
            count1++;
            }
            else{
                count0++;
            }
        }
int ans=0;
        ans=count0;

        if(count2>=count1){
            ans += count1;
            count2-=count1;
      
            
            ans+=count2/3;
          

        }
        else{
            ans+=count2;
            ans+=(count1-count2)/3;
            count2=0;

        }
  cout<<ans<<endl;

    }
}