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


void solve() {

	string a; cin >> a;
	string b; cin >> b;

	int ast = 0;

	int asize = a.size();
	int bsize = b.size();

	for(int i = 0; i < asize; i++) if(a[i] == '*') ast++;


	for(int i = 0; i < bsize; i++) if(b[i] == '*') ast++;


	for(int i = 0; i < (1 << ast); i++){

		ll m = i;
		string A = a, B = b;

		for(int j = 0; j < asize; j++){
			if(a[j] == '*'){
				A[j] = '0' + (m & 1);
				m >>= 1;
			}
		}

		for(int k = 0; k < bsize; k++){
			if(b[k] == '*'){
				B[k] = '0' + (m & 1);
				m >>= 1;
			}
		}

		ll aux = 0;
		ll pot = 1;

		for(int x = bsize-1; x >= 0; x--){
			aux += (B[x] == '1') * pot;
			pot *= 2;
		}

		ll p = 0;
		pot = 1;

		for(int x = asize - 1; x >= 0; x--){
			p = (((A[x] == '1')*pot)+p)%aux;
			pot = ((pot * 2) % aux);
		}

		if(p % aux == 0) {
			cout << A << endl;
			break;
		}
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