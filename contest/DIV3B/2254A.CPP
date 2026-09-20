// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int t;
//     cin>>t;

// while(t--){
//     int a  ,b ,c;
//     cin>>a>>b>>c;

//     vector<int>ans(3);
//     ans[0]=a;
//     ans[1]=b;
//     ans[2]=c;
  
   

//     if(ans[0]==ans[1]||ans[1]==ans[2]||ans[0]==ans[2]){
//         cout<<"0"<<endl;
//         continue;
//     }
// int count =0;
//     int n = ans.size();
// while(ans[0]!=ans[1] && ans[1]!=ans[2]){
//     ans[2]--;
//     ans[0]++;
//     count++;
//     sort(ans.begin(), ans.end());
// }
//     cout<<count<<endl;
    
// }
// }



#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

while(t--){
    int a  ,b ,c;
    cin>>a>>b>>c;

    int sum=0;

    vector<int>ans(3);
    ans[0]=a;
    ans[1]=b;
    ans[2]=c;
  

    sort(ans.begin() , ans.end());

    sum=ans[0]+ans[1];

    int range=0;

    if(sum<ans[2]){
      range = sum-ans[0];
    }
    else if(sum==ans[2]){
        range = sum-ans[0];
    }
    else{

    range  = ans[2]-ans[0];
    }

    cout<<range<<endl;

}

}