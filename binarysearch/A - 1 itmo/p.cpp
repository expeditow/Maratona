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

	for(int i = 0; i < n; i++){
		cin >> v[i];
	}

	for(int i = 0; i < k ; i++){
		ll x; cin >> x;
		ll l = 0, r = n-1, m;
		bool t = false;

		while(l <= r){ // se for l < r pode cair em loop
			m = (l+r)/2;

			if(x == v[m]){
				
				t = true;
				break;
			}
			else if(x > v[m]){
				l = m + 1;
			}
			else{
				r = m - 1;
			}
		}
		if(t) cout << "YES" << endl;
		else cout << "NO" << endl;
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