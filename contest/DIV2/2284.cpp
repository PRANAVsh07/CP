#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
    
        if(n%2==0){
            int sides = n/2;
            double area = double(0.5*sides*sides);
            cout<<2*area<<endl;
           
        }
        else{
         int newsides=  (n-1)/2;
          double area2 = double(0.5*newsides*newsides+0.5*newsides);
          cout<<2*area2<<endl;
        }
    }

}