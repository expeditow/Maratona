#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;

/*
mais a esquerda: 

	l + 1 < r
	return r
	a[l] <= x
	a[r] > x

mais a direita

	a[l] < x
	a[r] >= x

*/
const string ENDL = "\n";

void solve()
{
	ll n, k; cin >> n >> k;
	vector<ll> v(n);

	for(int i = 0; i < n; i++) cin >> v[i];

	for(int i = 0; i < k; i++){

		ll l = -1, r = n, m;
		ll x; cin >> x;

		while(l + 1 < r){
			m = (l+r)/2;
			if(v[m] < x){
				l = m;
			}
			else r = m;
		}

		cout << r + 1 << endl;
	}
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
 	return 0;
}