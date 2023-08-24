#include<bits/stdc++.h>
using namespace std;

void solve(string a){
    int i=a.length()-1;
    while(a[i]=='1'){
        a[i]='0';
        i--;
    };
    if (i>=0) {
        a[i]='1';
    }
    cout<<a<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        string a;
        cin>>a;
        solve(a);
    }
    return 0;
}

