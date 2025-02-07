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

	// múltiplos comum? - qualquer par n e m

	ll k; cin >> k;
	vector<ll> v(k); for(int i =0; i < k; i++) cin >> v[i];

	// n e m esta dentro do vetor v;
	// preciso verificar se n*m == k-2; -> simples assim

	sort(v.begin(), v.end());

	ll l = 0, r = k-1;
	ll ans[2] = {0,0};

	while(l <= r){
		if(v[l]*v[r] == k-2){
			ans[0] = v[l];
			ans[1] = v[r];
			l = r + 2;
		}
		else if(v[l]*v[r] > k-2){
			r--;
		}
		else{
			l++;
		}
	}

	cout << ans[0] << " " << ans[1] << endl;

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}