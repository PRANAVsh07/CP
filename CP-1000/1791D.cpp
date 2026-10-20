#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
   int n;
   cin>>n;

     string s;
     cin>>s;
     unordered_map<int ,int>mp;
         
vector<int>prefix(n);
vector<int>suffix(n);
int count = 0;


for(int i =0 ;i<n ;i++){
  
    if(mp.find(s[i])==mp.end()){
       count++;
       prefix[i]=count;
       mp[s[i]]++;
    }
    else{
        prefix[i]=count;
    }
    
}

mp.clear();
count = 0;

for(int i =n-1 ;i>=0 ;i--){
  
    if(mp.find(s[i])==mp.end()){
       count++;
       suffix[i]=count;
       mp[s[i]]++;
    }
    else{
        suffix[i]=count;
    }
    
}

int ans=0;
int sum=0;
for(int i =1;i<n ;i++){
    
    sum = prefix[i-1]+suffix[i];

    ans=max(sum,ans);
}




     cout<<ans<<endl;
    }

}