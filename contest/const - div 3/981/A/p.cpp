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

void solve() {
	// entendi totalmente errado xD
	ll n; cin >> n;
	ll t = 0, i = 1;
	bool s = true;
	while(i <= n){
		t = 2*i - 1;
		i++;
		s = !s;
	}

	if(s) cout << "Sakurako" << endl;
	else cout << "Kosuke" << endl;	
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}