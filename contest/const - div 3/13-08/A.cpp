#include <bits/stdc++.h>

using namespace std;


void solve();

int main()
{
    int t; cin >> t;
    while(t--)solve();
    return 0;
}

void solve()
{
    string n; cin >> n;

    if(n[0] - '0' == 1)
    {
        if(n[1] - '0' == 0)
        {
            if(n[2] - '0' >= 2 || (n[2] - '0' == 1 && n[3] - '0' >= 0))
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
    return;

}