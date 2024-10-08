#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve();

int main()
{   
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
    int t = 1;
    while(t--)solve();
    return 0;
}

void solve()
{   
    ll n; cin >> n;

    ll valores[n+1] = {};
    ll m = 0;

    for(int i = 1; i <= n; i++)
    {
        cin >> valores[i];
        m = max(m,valores[i]);
    }

    ll sum[m+1] = {};

    for (int i = 1; i <= m; i++)
    {
        for(int j = i; j <= m; j += i)
        {
            sum[j] += i; 
        }

    }   
    for(int i = 1; i <= n; i++)
    { 
        cout << sum[valores[i]] - valores[i] << endl;
    }

}