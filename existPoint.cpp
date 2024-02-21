#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    int r=0;
    int c=0;
    while(r!=-1 || r!=n || c!=-1 || c!=m){
    while(a[r][c]!=1){
    c++;
        if(c==m){
            cout<<r<<endl<<c-1<<endl;
            return 0;
            }
    }
    r++;
     if(r==n){
            cout<<r-1<<endl<<c<<endl;
            return 0;
        }
    
    while(a[r][c]!=1){
        r++;
        if(r==n){
            cout<<r-1<<endl<<c<<endl;
            return 0;
        }
    }
    c--;
     if(c<0){
            cout<<r<<endl<<c+1<<endl;
            return 0;
            }
    while(a[r][c]!=1){
        c--;
         if(c<0){
            cout<<r<<endl<<c+1<<endl;
            return 0;
            }
        
    }
    r--;
     if(r<0){
            cout<<r+1<<endl<<c<<endl;
            return 0;
        }
    while(a[r][c]!=1){
        r--;
        if(r<0){
            cout<<r+1<<endl<<c<<endl;
            return 0;
        }
    }
    c++;
    if(c==m){
         if(c==m){
            cout<<r<<endl<<c-1<<endl;
            return 0;
            }
    }
    
}
    }


