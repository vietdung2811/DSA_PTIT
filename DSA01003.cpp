#include<bits/stdc++.h>
using namespace std;

int a[1000], n;
void nhap(){
    for (int i=1;i<=n;i++){
        cin>>a[i];
    };
};

void in(){
    for (int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    };
};

void hv(int &a, int &b){
     int t=a;
     a=b;
     b=t;
};

void solve(){
    int i=n-1;
    while (i>0 && a[i]>a[i+1]){
        i--;
    };
    if (i>0){
        int j=n;
        while (a[i]>a[j]){
            j--;
        };
        hv(a[i],a[j]);
        int r=n; int l=j+1;
        while (l<r){
              hv(a[l],a[r]);
              l++;
              r--;
        };
    } else{
        for(i=1;i<=n;i++){
            a[i]=i;
        };
    };
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        nhap();
        solve();
        in();
        cout<<endl;       
    }
}