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
// minimizar = r = m - 1
// maximiar = l = m + 1
 
bool v(ll x, ll valor){

	ll sum = 0;
	ll z = x;

	if(valor == 0) return false;

	while(z > 0){
		if(z > valor){
			z -= valor;
			sum += valor;
		}
		else{
			sum += z;
			z = 0;
		}
		z -= (z/10);
	}
	if(sum*2 >= x) return true;

	return false;
}
void solve()
{
	ll x; cin >> x; 
	ll l = 0, r = x, m, ans = x;

	while( l <= r){

		m = (l+r)/2;

		if(v(x,m)){
			r = m - 1;
			ans = min(ans, m);
		}
		else
			l = m + 1;
	}
	cout << ans << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
 	return 0;
}