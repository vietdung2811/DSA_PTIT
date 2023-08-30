#include<bits/stdc++.h>

using namespace std;

bool a[25][25], check;
int n;
string s;
 
void Try(int i, int j)
{
    if(i == n && j == n)
    {
        cout << s << ' ';
        check = 1;
        return;
    }
    if(a[i+1][j])
    {
        s += 'D';
        Try(i + 1, j);
        s.erase(s.length() - 1, 1);
    }
    if(a[i][j+1])
    {
        s += 'R';
        Try(i, j + 1);
        s.erase(s.length() - 1, 1);
    }
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        check = 0;
        cin >> n;
        for (int i=1;i<=n;i++) for( int j=1;j<=n;j++) cin >> a[i][j];
        if(!a[1][1]) cout << -1;
        else
        {
            Try(1, 1);
            if(!check) cout << -1;
        }
        cout << endl;
    }
    return 0;
}