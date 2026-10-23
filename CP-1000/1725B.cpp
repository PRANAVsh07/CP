#include <bits/stdc++.h>
using namespace std;

int main() {
  
        int n,d;
        cin>>n>>d;

        int arr[n];
        for(int i =0 ;i<n ;i++){
    cin>>arr[i];
        }

        sort(arr , arr+n);
        int low =0;
int ans=0;
int high=n-1;

             while(low<=high){
                 int count = d / arr[high] + 1;
                 int rem = high-low+1;
                if(arr[high]>d){
                    ans+=1;
                    high--;
              
                }


        
                else if(rem>=count&&arr[high]<=d){
                      ans+=1;
                   low+=count-1;
                   high--;
                }
                else {
    high--;
}
             }
             cout<<ans<<endl;
    }
