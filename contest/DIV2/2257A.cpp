#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> fruits(n);
    vector<string> abbr(m);

    // Input fruits
    for (int i = 0; i < n; i++) {
        cin >> fruits[i];
    }

    // Input abbreviations
    for (int i = 0; i < m; i++) {
        cin >> abbr[i];
    }

    // Check first letter of each fruit
    for (int i = 0; i < n; i++) {
        char first = toupper(fruits[i][0]);
        bool find = false;

    

        for (int j = 0; j < m; j++) {
            if (abbr[j].find(first) != string::npos) {
               find =true;
            }
        }

     if(find==true){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"endl;
     }
    }

    return 0;
}