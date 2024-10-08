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


/*
 	se remover os elementos eles tem que estar em uma sequência para serem lidos igualmente
	cada letra forma um palíndromo, assim como a string vazia
	// letras iguais formam palíndromos

	7 - 7 letras

	0 -> 1 palíndromo
	1 -> 2 palíndromo
	2 -> 3 palíndromos
	...

	* adjacencia *
	* qntd de letras juntas *

	aueiou
	aaaeeiou

 
*/
void solve(){

	int n; cin >> n;
	char l[5] = {'a', 'e', 'i', 'o', 'u'};
	int v[5] = {0, 0, 0, 0, 0};

	forn(i,n){
		v[i%5]++;
	}

	forn(i,5){
		while(v[i] != 0){
			cout << l[i];
			v[i]--;
		}
	}
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