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
const int SIZE = 1e6+2;
const int INF = 1e6;

int x;
int memo[SIZE];

int pd(int s){

	if(s == 0) return 0; // caso base

	if(s < 0) return INF; // erro

	// minha ideia é converter em fazer uma cópia do valor em string e ir passando como um for dos valores tipo a da outras
	// pds, como essa é dígito - 1 - não preciso me preocupar

	int& pdm = memo[s];

	if(pdm != -1) return pdm;

	pdm = INF;

	string t = to_string(s); // virou um vetor de char
	int size = t.size(); // meu medo é estourar aq, usar muita memória p cada - já que vai ficar stackado na pilha

	for(int i = 0; i < size; i++){
		pdm = min(pdm, 1+pd(s - (t[i] - '0')));
	}

	return pdm;
}
void solve(){

	cin >> x;

	memset(memo, -1, sizeof(memo));

	cout << pd(x) << endl;

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
 	return 0;
}