#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<string>palindroms;
    int l = s.length();
    cout<<s[0]<<endl;
    for(int i=1;i<l;i++){
        int j=i;
        int k=i;
        while(s[j]==s[k] && k<l && j>=0){
            
            cout<<s.substr(j,k-j+1)<<endl;
            j--;
            k++;
            
        }
    }
    
    for(int i=0;i<l;i++){
        int j=i;
        int k=i+1;
        
        while(s[j]==s[k] && k<l && j>=0){
          cout<<s.substr(j,k-j+1)<<endl;
          j--;
          k++;
        }
    }
    
    
}