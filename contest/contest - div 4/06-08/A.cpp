#include <bits/stdc++.h>

using namespace std;

void solve();

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int n; cin >> n;

    int e = n/10;
    int d = n%10;

    cout << e+d << endl;
}