#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


const string ENDL = "\n";

bool verifica(vector<ll> &v, ll valor, ll vacas){

	ll n = v.size();
	ll l = v[0];

	for(ll i = 1; i < n; i++){
		if(v[i] >= (l + valor)){
			vacas--;
			l = v[i];
		}
	}
	
	if(vacas <= 0) return true;

	return false;
}

void solve(){

	ll n,c; cin >> n >> c;

	vector<ll> v(n);

	for(ll i = 0; i < n; i++){
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	vector<ll> d(n-1);

	for(ll i = 0; i < n-1; i++){
		d[i] = (v[i+1] - v[0]);
	}

	ll l = 0, r = d[d.size()-1], m;
	ll ans = 0;
	while(l < r){

		m = (l + r)/2;

		if(verifica(v, m, c-1)) {
			ans = max(ans,m);
			l = m + 1;
		}

		else r = m;
	}

	cout << ans << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}