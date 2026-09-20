#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }

        if(mp.size() == 1){
            cout << "YES\n";
        }

        else if(mp.size() == 2){

            vector<int> freq;

            for(auto &it : mp){
                freq.push_back(it.second);
            }

            int f1 = freq[0];
            int f2 = freq[1];

            if(n % 2 == 0){
                if(f1 == n/2 && f2 == n/2){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
            else{
                if((f1 == (n+1)/2 && f2 == n/2) ||
                   (f2 == (n+1)/2 && f1 == n/2)){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
        }

        else{
            cout << "NO\n";
        }
    }

    return 0;
}