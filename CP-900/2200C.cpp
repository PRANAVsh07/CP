#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> ans;

        for(int i = 0; i < n; i++){

            if(!ans.empty() && ans.back() == s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }

        if(ans.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}