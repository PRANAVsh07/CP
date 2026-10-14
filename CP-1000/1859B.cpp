#include<bits/stdc++.h>
using namespace std;
int main(){


int t;
cin >> t;

while (t--) {
    int n;
    cin >> n;
      vector<long long>second_smallest ;
        long long first_smallest =LLONG_MAX;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        vector<long long> a(m);

        for (int j = 0; j < m; j++) {
            cin >> a[j];
        }

        sort(a.begin()  ,a.end());
         first_smallest = min(a[0],first_smallest);
      
        second_smallest.push_back(a[1]);
         




        

    }
    long long count=LLONG_MAX;
    long long sum=0;
    long long ans=0;
    for(int i =0 ;i<second_smallest.size() ;i++){
        count =min(count,second_smallest[i]);
         sum+=second_smallest[i];
    }
    ans=sum+first_smallest-count;
    cout<<ans<<endl;
    
}
}