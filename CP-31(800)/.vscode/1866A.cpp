#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
        int N;
        cin>>N;
       

        int arr[N];
        for(int i =0;i<N ;i++){
            cin>>arr[i];

            
        }
        for(int i =0;i<N ;i++){
            if(arr[i]<0){
                arr[i]=-arr[i];
            }
        }

     int element = *min_element(arr, arr + N);

cout << element << endl;

        
    
}
