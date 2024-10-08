#include <bits/stdc++.h>

using namespace std;

void solve();

int main()
{
    int t; cin >> t;

    while(t--) solve();

    return 0;
}

void solve()
{
    int b[2];
    int a[2];
    int v = 0;

    cin >> a[0] >> a[1] >> b[0] >> b[1];

    for(int i = 0; i < 2; i++)
    {
        int a1, a2, b1, b2;

        
        for(int j = 0; j < 2; j++)
        {
            int vit = 0, drr = 0;

            if(a1 > b1) vit++;
            if(a2 > b2) vit++;
            if(a1 < b1) drr++;
            if(a2 < b2) drr++;

            if (vit > drr) v++;
        }
    }
    // [4] 2 [3] 2
    cout << v << endl;
}