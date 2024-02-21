#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int a[n][n];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>a[i][j];
       }
   }
   vector<int>row;
   vector<int>col;
   
   int colmax = INT_MIN;
   for(int i=0;i<n;i++){
       int rowmin = INT_MAX;
       for(int j=0;j<n;j++){
           rowmin = min(rowmin,a[i][j]);
       }
       row.push_back(rowmin);
       
   }
   sort(row.begin(),row.end());
   cout<<row[row.size()-1];
}