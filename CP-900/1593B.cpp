#include<bits/stdc++.h>
using namespace std;

 int solve(string s , string target ){
  int n =s.size();

  int j=1;
  int cnt =0;
  for(int i=n-1 ;i>=0 ;i--){
   if(s[i]==target[j]){
    j--;
   
   if(j<0){
    return cnt;
   }
   }
   else{
    cnt++;
   }
  }
  return 1e9;
 }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
    string s;
    cin>>s;

    int ans =INT_MAX;
     ans = min(ans ,solve(s,"00"));
       ans = min(ans ,solve(s,"25"));
         ans = min(ans ,solve(s,"75"));
           ans = min(ans ,solve(s,"50"));

           cout<<ans<<endl;
    }
}