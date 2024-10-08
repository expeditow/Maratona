#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
void solve();

int main()
{
    int t = 1;
    while(t--) solve();
    return 0;
}

void solve()
{
    int n; cin >> n;
    vector<ll> v;
    
    for(int i = 0 ; i < n; i++)
    {
        int c; cin >> c;
        v.push_back(c);
    }

    sort(v.begin(), v.end());

    ll m;
    ll vlr;

    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            m = v[i] * n;
            vlr = v[i];
        }
        else
        {
            ll x = v[i]*(n-i);
            ll aux = m;
            m = max(m, x);

            if(aux != m)
            {
                vlr = v[i];
            }
        }
    }


    cout << vlr << " " << m << endl;
}