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
Vc conta
Quantos valores não passam de x
Com isso
Vc consegue
Diminuir o espaço de busca
Na metade
A cada vez
Que vc faz a busca binaria
*/

void solve(){

	/* contar quantos números passam de x
	Dividindo esse número por i
	Aí vc vê quantos j existem
	Vc ver a quantidade de valores que não passam de um certo x
	Com isso vc pode fazer a busca binaria
	E sempre dividir o intervalo na metade
	Sabendo a quantidade vc sabe se vc tá perto ou não de encontrar o valor correto
	É como se vc ordenasse todos os valores
	E escolhesse o kesimo
	Como vc meio que tá tentando adivinhar qual é o valor
	Se vc fizer a busca binaria
	E contar usando os i de 1 até n
	Que tem j caras que não passam de m
	Em que ij menor igual a x
	Vc consegue obter a quantidade
	E saber se aquele valor tá "próximo" do valor de resposta
	Vc conta
	Quantos valores não passam de x
	Com isso
	Vc consegue
	Diminuir o espaço de busca
	Na metade
	A cada vez
	Que vc faz a busca binaria
	*/
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
 	return 0;
}