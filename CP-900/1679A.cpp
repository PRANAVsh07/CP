#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
      long long maxe,mini;
   if (n % 2 != 0 || n < 4){
    cout << -1 << endl;
    continue;

   }
   long long ans ans2;

  maxe  = n/4;

  while(maxe>=0){
    int rem  = n-(4*maxe);

    if(rem%6==0){
        ans = maxe+rem/6;
        break;
    }
    maxe--;
  }

    mini = n/6;

  while(mini>=0){
    int rem  = n-(6*mini);

    if(rem%4==0){
        ans2 = mini+rem/4;
        break;
    }
    mini--;
  }


    cout<<ans2<<" "<<ans<<endl;
  
    }

}