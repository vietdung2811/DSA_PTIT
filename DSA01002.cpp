#include <bits/stdc++.h>
using namespace std;

void 

void solve(int a[], int n, int k){
    int j;
    j=k;
    while(j>0  && a[j]==n-k+j){
        j--;
    };
    if (j>0){
        a[j]=a[j]+1;
        for(int i=j+1;i<=k;i++){
               a[i]=a[i-1]+1;
        };
        
    } else{
        for (int i=1;i<=k;i++){
            a[i]=i;
        };
    };
}
int main(){
     int t;
     cin >>t;
     while (t--){
        int n,k;
        cin>>n>>k;
        int a[k];
        for(int i=1;i<=k;i++){
              cin>>a[i];
        };
        solve(a,n,k);
     }
     return 0;
        
}