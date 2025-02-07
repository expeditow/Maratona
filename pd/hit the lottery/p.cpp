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

	ll d, ans = 0; cin >> d;
	
	// quer retirar o dinheiro d, com a menor quantidade de notas possíveis
	// notas que tem: 1, 5, 10, 20, 100

	ll v[5] = {1,5,10,20,100};

	// a questão é como vou usar dp aqui?
	// usar recursão? -> mas como eu vou alocar memória p tanto elemento assim? -> d <= 10e9

	// uma forma de resolver é assim:

	for(int i = 4; i >= 0; i--){

		ll r = d/v[i];
		//cout << "r  (" << r << ") =  d ("<< d << ") /v[i] (" <<v[i] << ") "; 
		//cout << "r = " << r << endl;

		d -= v[i]*r;
		//cout << "d = " << d << endl;
		ans += r;
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