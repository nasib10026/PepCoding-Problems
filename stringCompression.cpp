#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.length();
    int cnt=0;
     for(int i=0;i<l;i++)
     {
        if(s[i]!=s[i+1])
        {
            cout<<s[i];
        }
        else
        {
            continue;
        }
    }
    cout<<endl;
    for(int i=0;i<l;i++){
        if(s[i]!=s[i+1]){
            cout<<s[i]<<cnt+1;
            cnt=0;
        }
        else{
            cnt++;
            continue;
        }
    }
}