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

	// ele tem que chegar na posição L
	// qnd está na posição x, e tem um poder de salto k, ele pode saltar de [x,x+k]
	// tem n obstáculos, ele não pode saltar p dentro de nenhum intervalo desses
	// tem alguns boots, que aumenta o poder de salto p k+v

	// ele quer o número mínimo de boots p chegar ao final
	// n - obstáculo, m - boots, L - final;

	ll n,m,L; cin >> n >> m >> L;
	queue<pair<ll,ll>> obs;
	
	for(int i = 0; i < n; i++){ // aqui é intervalo, [x,y]
		ll x, y; cin >> x >> y;
		obs.push({x,y});
	} 

	vector<pair<ll,ll>> pwr(m); // 
	for(int i = 0; i < m; i++){ // aqui é posição i, e o boots que tem nela
		ll x,y; cin >> x >> y;
		pwr[i] = {x,y};
	}

	ll ans = 0;
	ll aux = 0;
	ll gi = 0;

	while (!obs.empty()){

		// vamos repensar, vou separar em fatias, do início até o o buraco, depois eu tenho que atualizar o início com o pulo que a gente deu


	}

	cout << ans << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}