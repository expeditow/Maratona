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
	// comprou p espetinhos, e cada um tem um tamanho
	// p é uma permutação de tamanho n
	// querem ordernar com o tamanho corresponde ao índice no vetor

	// só podem selecionar um índice dado que:
	//	|pi+1 - pi | = 1
	// 	nós trocamos os dois

	// permutação de um array, consiste de um array de tamanho de 1 a n -> qualquer ordem
	// não pode ter elementos repetidos
	// todos os elementos dentro do array tem que ser <= ao tamanho dele
	bool c = true;
	ll n; cin >> n;	
	vector<ll> p(n);

	for(int i = 0; i < n; i++) {
		cin >> p[i];

		if(i != 0)
			if(p[i] == p[i-1]) c = false;
		

		if(p[i] > n) c = false;

	}	

	if(!c){
		cout << "NO" << endl;
		return;
	}
	
	int w = 0;

		//for(int i = 0; i < n; i++) cout << p[i] << " ";
		for(int i = 0; i < n-1; i++){
			if(abs(p[i]-p[i+1]) == 1 && (p[i] != i+1 || p[i+1] != i+2)){
				swap(p[i], p[i+1]);
			}
		}


	bool ans = true;

	for(int i = 0; i < n-1; i++){
		if(p[i] > p[i+1]) ans = false;
	}

	if(ans) cout << "YES" << endl;

	else cout << "NO" << endl;
}	
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}