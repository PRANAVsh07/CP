#include<bits/stdc++.h>
using namespace std;
int main(){
    
       int t;
      cin >> t;

     while(t--) {
    int n, k;
    cin >> n >> k;
int count=k;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

      if((x%2!=0&&y%2==0)||(x%2==0&&y%2!=0)){
        count = x-y+1;

    }
   
}



cout<<count<<endl;
        
    }
}