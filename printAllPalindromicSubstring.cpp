#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<string>palindroms;
    int l = s.length();
    cout<<s[0]<<endl;
    //this is for odd length strings
    for(int i=1;i<l;i++){
        int j=i;
        int k=i;
        //start from smallest unit and then expand
        while(s[j]==s[k] && k<l && j>=0){
            
            cout<<s.substr(j,k-j+1)<<endl;
            j--;
            k++;
            
        }
    }
    //for even length strings
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
