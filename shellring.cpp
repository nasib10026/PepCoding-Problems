#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,s,r;
    cin>>n>>m;
    int a[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>s>>r;
    vector<int>arr;
    int k=s-1;
    int lowrow=0+k;
    int highrow=n-k-1;
    int lowcol=0+k;
    int highcol=m-k-1;
    int cnt=0;
    
    for(int i=lowrow;i<=highrow;i++){
        arr.push_back(a[i][lowcol]);
        cnt++;
    }
    lowcol++;
    for(int i=lowcol;i<=highcol;i++){
        arr.push_back(a[highrow][i]);
        cnt++;
    }
    highrow--;
    for(int i=highrow;i>=lowrow;i--)
    {
        arr.push_back(a[i][highcol]);
        cnt++;
    }
    highcol--;
    for(int i = highcol;i>=lowcol;i--){
        arr.push_back(a[lowrow][i]);
        cnt++;
    }
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    
    int rv= r%cnt;
    int ei=cnt-1-rv;
    reverse(arr.begin(),arr.begin()+ei+1);
    //   for(auto i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    
    int si=cnt-rv;
    reverse(arr.begin()+si,arr.end());
    //   for(auto i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    reverse(arr.begin(),arr.end());
     lowrow=0+k;
     highrow=n-k-1;
     lowcol=0+k;
     highcol=m-k-1;
     
     cnt = 0;
     
     for(int i=lowrow;i<=highrow;i++){
        a[i][lowcol]=arr[cnt];
        cnt++;
    }
    lowcol++;
    for(int i=lowcol;i<=highcol;i++){
        a[highrow][i]=arr[cnt];
        cnt++;
    }
    highrow--;
    for(int i=highrow;i>=lowrow;i--)
    {
        a[i][highcol]=arr[cnt];
        cnt++;
    }
    highcol--;
    for(int i = highcol;i>=lowcol;i--){
       a[lowrow][i]=arr[cnt];
        cnt++;
    }
    
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
