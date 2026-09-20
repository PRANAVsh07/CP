#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;

   while(t--){
    int n;
    cin>>n;


    int arr[n];
    for(int i=0;i<n ;i++){
        cin>>arr[i];

    }
 

int high=n-1;

int count =0;
int ans =0;
bool flag  =true;

for(int i =n-2;i>=0 ;i--){



if(arr[i]>=arr[high]){
while(arr[i]>=arr[high]){
    if(arr[i]!=0){
       ans =arr[i]/2;
       count++;
       arr[i]=ans;
    }
    else{
       flag =false;
       break;
    }
      
}


}



   high--;
}
if(flag==true){
       cout<<count<<endl;
}
else{
    cout<<"-1"<<endl;
}


  
}
      

}