#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ; 
    cin>>t;

    while(t--){
        long long x,y;
        cin>>x>>y;
bool find=false;
int low=0;
        for(long long i =x ;i<y ;i*=low){
            if(i%x==0&&y%i!=0){
                find =true;
                break;
            }low++;
        }
if(find==true){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;

}
    }


}