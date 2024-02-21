

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    int ele = n*(n+1)/2;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    int cnt=0;
    int k=n;
   
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                cout<<a[j][j+i]<<" ";
            }n--;
        }
    
    
}
