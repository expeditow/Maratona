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

void solve()
{	
	ll m = 2, q = 1;

	ll n; cin >> n; cin >> m; cin >> q; // tamanho da linha, os outros dois tem os valores de cima

	ll pP[2]; for(int i = 0; i < 2; i++) cin >> pP[i]; // dois professores na linha

	ll d; cin >> d;

	// basicamente, se ele estiver acima do intervalo, a direita do último professor ele tem que continuar indo p direita
	// se ele estiver a esquerda do intervalo, continua indo a esquerda ( até o limite do vetor, isso vale p cima tbm)
	// agora se ele estiver entre, ele precisa realizar um movimento até que as distância entre os dois sejam iguais
	// para que ele fique parado no meio apenas esperando

	bool c = true;
	ll r = 0;

	ll P = max(pP[0], pP[1]);
	ll p = min(pP[0], pP[1]);


	if( d > P){
		r = n - P;

	}

	else if(d < p){
		r = p - 1;
	}

	else {
		r = (P - p) /2;
	}

	cout << r << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}