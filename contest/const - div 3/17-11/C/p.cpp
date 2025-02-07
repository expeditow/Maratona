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



	ll n; cin >> n; 
	//vector<ll> v(n);

	//for(int i = 0; i < n; i++) v[i] = i+1;

	// vou passar por cima de cada valor, fazendo uma soma com cada elemento, se a soma de cada elemento resulta
	// em um
	vector<vector<ll>> o(n);

	/*for(int i = 1; i <= n; i++){	

		for(int j = 1; j <= n; j++){

		}
	}*/

	int divisors[n + 1] = {};
		for (int i = 1; i <= n; ++i)
			for (int j = i; j <= n; j += i)
				++divisors[j];

	for(int i = 1 ; i <= n; i++) cout << "i = "<< i << " " << divisors[i] << " " << endl;;
	cout << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}