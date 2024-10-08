#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

void solve();

int main()
{
    solve();
    return 0;
}

void solve()
{
    lli p; cin >> p;
    
    if(p <= 4)
    {
        cout << "N" << endl;
        return;
    }

    if(p % 2 == 0)
    {
        cout << "S" << endl;
        return;
    }

    lli sqr = sqrt(p);

    for(lli i = 3; i < sqr; i += 2){

        if(p % i == 0)
        {
            cout << "S" << endl;
            return;
        }
    }

    cout << "N" << endl;

    return;

}