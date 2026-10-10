
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }


        int ans = INT_MAX;
        int evencount =0;
        int diff=0;
bool find =false;
for(int i =0 ;i<n ;i++){
    if(k==2){
        ans = min(ans,arr[i]%2);
    }
    else if(k==3){
        diff = (k-arr[i]%k)%k;
        ans = min(ans, diff);
    }
    else if(k==4){
        if(arr[i]%2==0){
            evencount++;
        }
        if(arr[i]%4==0){
  find = true;
        }
        diff=(k-arr[i]%k)%k;
        ans = min(ans,diff);
        }
    
  else if(k==5){
        diff = (k-arr[i]%k)%k;
        ans = min(ans, diff);
}
}
if(k==4){
if(find==true||evencount>=2){
    ans=0;

}
else if(evencount==1){
    ans=min(ans,1);
}
else{
    ans = min(ans,2);
}
}
     
cout<<ans<<endl;
    


}
}


