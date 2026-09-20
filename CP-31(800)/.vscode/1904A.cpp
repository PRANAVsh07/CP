#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int dx[4]={-1,-1,1,1,};
         int dy[4]={-1,-1,1,1,};

         long long a,b;
         cin>>a>>b;
         long long king_x,king_y;
         cin>> king_x>>king_y;

         long long queen_x,queen_y;
         cin>> queen_x>>queen_y;

         set<pair<long long>>king_hits,queen_hits;

         for(int i=0;i<4;i++){
            king_hits.insert({king_x+dx[i]*a,king_y+dy[i]*b});
            king_hits.insert({king_x+dx[i]*b,king_y+dy[i]*a});

            queen_hits.insert({queen_x+dx[i]*a,queen_y+dy[i]*b});
            queen_hits.insert({queen_x+dx[i]*b,queen_y+dy[i]*a});


         }

         int ans =0;
         for(auto position:king_hits){
            if(queen_hits.find(position)!=queen_hits.end()){
                ans++;
            }
         }

         cout<<ans<<endl;

         



    }
}