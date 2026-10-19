
// #include <bits/stdc++.h>
// using namespace std;

// int squaresum(long long n) {
//     int sum = 0;

//     while (n > 0) {
//         int digit = n % 10;
//         sum += digit * digit;
//         n /= 10;
//     }

//     return sum;
// }

// int main() {
  
  
//    int t;
//     cin>>t;

//     while(t--){

//     int n;
//     cin >> n;

//     vector<long long> a(n);

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     long long happy = 0;
//     map<int, long long> freq;

//     for (int i = 0; i < n; i++) {
//         int x = a[i];
//         int steps = 0;

//         while (x != 1 && x != 4) {
//             x = squaresum(x);
//             steps++;
//         }

//         if (x == 1) {
//             happy++;
//         } else {
//             int cycle[] = {4, 16, 37, 58, 89, 145, 42, 20};

//             int pos = 0;
//             for (int j = 0; j < 8; j++) {
//                 if (cycle[j] == x) {
//                     pos = j;
//                     break;
//                 }
//             }

//             int effectivePos = (pos - steps % 8 + 8) % 8;
//             freq[effectivePos]++;
//         }
//     }

//     long long ans = happy * (happy - 1) / 2;

//     for (auto &p : freq) {
//         long long count = p.second;
//         ans += count * (count - 1) / 2;
//     }

//     cout << ans << '\n';

// }

// }


#include<bits/stdc++.h>
using namespace std;
int squaresum(int n){
    int sum=0;
  while(n>0 ){
    int digit=0;
    digit  = n%10;

    sum+=digit*digit;
    n/=10;
  }
  return sum;
}



int main(){
    int t;
    cin>>t;

    while(t--){
      int n ;
       cin>>n;
           

       int arr[n];
  for(int i =0 ;i<n ;i++){
          cin>>arr[i];
  }
int happy=0;
unordered_map<int  , long long>mp;

  for(int i =0 ;i<n ;i++){
      int x =arr[i];
      int step=0;


      while(x!=4&&x!=1){
         x = squaresum(x);
         step++;

      }
      
      if(x==1){
        happy++;
      }
      else{
      
        int cycle[8]={4, 16, 37, 58, 89, 145, 42, 20};
        int pos=0;
        for(int j  =0 ;j<8 ;j++){
            if(cycle[j]==x){
                pos =j;
                break;
            
            }
        }
    


    int effectivePos = (pos-step%8+8)%8;
       mp[effectivePos]++;
    }
    
  
  }
int ans = (happy*(happy-1))/2;

for(auto &it:mp){
  int count = it.second;
  ans+=(count*(count-1))/2;
}
cout<<ans<<endl;

    }
}