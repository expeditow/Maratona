#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;

void solve();

int main()
{
    int t; cin >> t;
    while(t--)solve();
    return 0;
}

void solve()
{
    string a, b; cin >> a >> b;

    if(a.size() == 1 && a[0] == '0')
    {
        if(b[0] == 0) cout << 1 << endl;

        else cout << '0' << endl;

        return;
    }

    if(b[0])
    {
         cout << 1<< endl;
         return;
    }
    unsigned nov_a = (a[a.size() - 1] - '0');

    lli mod = 0;

    for(lli i = 0; i < (b.size()); i++)
    {
        mod = (mod*10 + b[i] - '0');
    }

    unsigned exp = (( mod % 4 ) == 0) ? 4 : (mod % 4);

    lli r = pow(nov_a, exp);

    cout << r%10 << endl;

}