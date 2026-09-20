#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        int n ;
        cin>>n;

        int x;
        cin>>x;
        
        int count =0;
        int maxi = INT_MIN;
        int ans = INT_MIN;
        
        
        vector<int>arr(n);
       
        for(int i =0;i<n ;i++){
            cin>>arr[i];
            
        }
        
        int dist =0;
        int gap=0;
        for(int i =0;i<n ;i++){
            gap= arr[i]-dist;
            dist = arr[i];

            maxi = max(gap , maxi);
          
        }
        ans = max(2*(x  - arr[n-1]) , maxi);
        cout << ans << '\n';
        
    }
    return 0;
}
    