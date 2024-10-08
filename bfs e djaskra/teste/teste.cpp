#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
using vll = vector<ll>;
using lolo = pair<ll, ll>;

const string ENDL = "\n";

ll maxai = 10e9;

void solve()
{
	int n; cin >> n;

	vll a(n); forn(i, n) cin >> a[i];
	vll pots;
	ll pot = 1;

	while (pot*2 < maxai)
	{
		pots.push_back(pot);
		pot*=2;
	}

	int psize = pots.size();
	vi freq(psize, 0);
	
	forn(i, n) {
		forn(j, psize)
		{
			ll x = a[i] ^ pots[j];
			if (x < a[i]) freq[j]++;
		}
	}
	
	forn(i, n)
	{
		ll x = 0;

		forn(j, psize) {

			if (freq[j] > 0) {
			x += pots[j];
			freq[j]--;
			}
		}
		cout << x << " ";
	}
	cout << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
	return 0;
}