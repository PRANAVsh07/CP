#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

  int n,k;
  cin>>n>>k;
int count0=0;
  int arr[n];
  for(int i =0 ;i<n ;i++){
    cin>>arr[i];
    if(arr[i]==0){
        count0=1;
    }
  }
  if(count0!=1){
    cout<<"0"<<endl;
    continue;
  }

  
  sort(arr,arr+n);
bool find= true;

int ans=0;
unordered_map<int ,int>mp;

for(int  i =0 ;i<n ;i++){
    mp[arr[i]]++;
}

for(int i =0 ;i<n ;i++){
    if(mp.find(i)==mp.end()){
        find=false;
        ans=i;
        break;
    }
}
if(find==false){
    cout<<ans<<endl;
}
else{
    cout<<n<<endl;
}








    }
}