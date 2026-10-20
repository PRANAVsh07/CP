#include <bits/stdc++.h>
#include <numeric>
using namespace std;


int isPrime(int n) {
    if (n < 2) return false;
    int small =0;

    for (int i = 2; i * i <= n; i++) {
        if(n%i==0){
          small=i;
          break;
        }
    }
return (small == 0) ? n : small;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
   int n;
   cin>>n;
      

int res = isPrime(n);

if (res == n) {
    cout << 1 << " " << n-1<< endl;
} else {
    cout <<  n/res<< " " <<n- n/res << endl;
}
   
}
}