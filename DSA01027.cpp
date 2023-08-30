#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    //cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        sort(a.begin(),a.end());
        for(int &i : a) cout << i << ' ';
        cout << endl;
        while(std::next_permutation(a.begin(),a.end()))
        {
            for(int &i : a) cout << i << ' ';
            cout << endl;
        }
    }
    return 0;
}