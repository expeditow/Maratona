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

const int INF = 0x3f3f3f3f;
int n,m;
int v[1010];
int memo[1010];

int pd(int i, int valor, int moedas){

	//cout << "indice = " << i << endl;
	////cout << "valor = " << valor << endl;
	//cout << "moedas = " << moedas << endl;
 	// como eu quero o mínimo, eu vou maximizar a resposta, então vou ignorar esse caso

	if(moedas >= 10) return INF; // como eu quero o mínimo, mesma resposta de cima

	if(valor == 0) return 0;

	if(valor < 0) return INF;

	int& pdm = memo[valor];

	if(pdm != -1) // quer dizer, ele já foi alterado
		return pdm;

	pdm = INF;

	for(int i = 0; i < n; i++){
		pdm = min(pd(i,valor - v[i], 1 + moedas), pdm);
	}

	//cout << "pdm = " << pdm << endl;
	return pdm;
}

void solve(){

	cin >> n >> m;

	for(int i = 0; i < n; i++){
		cin >> v[i];
	}

	memset(memo, -1, sizeof(memo));

	int x = INF;

	for(int i = 0; i < n; i++){
		x = min(pd(i, (m - v[i]), 1), x);
		//cout << "x = " << x << endl;
	}

	if(x == 0) cout << "S" << endl;
	else cout << "N" << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1; //cin >> t;
	while(t--) solve();
 	return 0;
}