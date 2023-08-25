#include<bits/stdc++.h>

using namespace std;

bool check[15] = {};
int n, a[15] = {};

void print()
{
    for (int i = n; i ; --i) cout << a[i];
    cout << ' ';
}
 
void solve(int i)
{
    for (int j = n; j; --j)
    {
        if (!check[j])
        {
            a[i] = j;
            check[j] = 1;
            if(i == 1) print();
            else solve(i - 1);
            check[j] = 0;
        }
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        solve(n);
        cout << endl;
    }
    return 0;
}