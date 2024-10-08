#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
// tentei por dois maps
void solve();

int main()
{
    int t; cin >> t; // 3
    //cout << t << endl;
    while(t--){
        solve();
    }
    return 0;
}

void solve()
{
    int n; cin >> n; // 5

    ll t[n] = {};

    bool r = true;

    for(int i = 0; i < n; i++ ) cin >> t[i]; // vetor

    int m; cin >> m; // m

    for(int x = 0; x < m; x++)
    {
        r = true;

        string c; cin >> c;

        if(c.size() != n)
             r = false;

        else
        {
            map<char, ll> mp;
            map<ll, char> eg;

            for(int i = 0; i < n; i++)
            {
                
                if(i == 0){ mp[c[i]] = t[i] ; eg[t[i]] = c[i];}

                else
                {   
                    // o problema que um mesmo número está indo p uma letra diferente
                    if(eg.find(t[i]) != eg.end()) {

                        if(eg[t[i]] != c[i]) r = false;
                    }

                    if(mp.find(c[i]) == mp.end()) {mp[c[i]] = t[i]; eg[t[i]] = c[i];}
  
                    ll x = mp[c[i]];

                    if(x != t[i]) r = false;
                }
            }
        }

        if(r) cout << "yes" << endl;

        else cout << "no" << endl;

    }



}