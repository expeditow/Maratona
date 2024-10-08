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

void solve(){
	ll r = 0;
	ll n, k; cin >> n >> k;
	ll v[n] = {};
	ll ans = 0;

	for(int i = 0; i < n; i++){

		cin >> v[i];

		if(v[i] >= k) r += v[i];

		else if(v[i] == 0 && r != 0){
			r--;
			ans++;
		}
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