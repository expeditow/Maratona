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
	// tem um vetor em ordem decrescente e ele quer que fique em ordem crescente
	// a princípio, se todos os elementos são diferentes, ele tem que fazer n-1 operações -> altera o vetor todo
	// caso tenha elementos repetidos: qtd de elementos repetidos - n
	// e parece ter um caso base de caso o tamanho seja um

	// vetor todo igual -> 5, 5 elementos repetidos -> 5 - 5
	// 1 elemento diferente, 5 - 4 -> 1 vai ser essa resposta sim, pq o vetor já é dado como o contrário, em ordem decrescente
	// temos uma prova que sempre o menor elemento vai estar por último
	// posso usar um set p evitar elementos repetidos tbm

	int n, r = 0, ans = 0; cin >> n;
	//int h[n];
	int h[55];

	// 5 4 3 3 2 1 -> 4 = 3
	// 4

	// problema: quando o elemento ele repetido está na frente, ele causa um reação diferente de quando ele está no meio/fim
	for(int i = 0; i < n; i++){

		cin >> h[i];

		if(i != 0)
			if(h[i] == h[i-1]) ans++;
			//if()
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