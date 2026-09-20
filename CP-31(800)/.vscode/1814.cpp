#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long N,K;
        cin>>N>>K;

        if(N%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            if((N-K)%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }


}