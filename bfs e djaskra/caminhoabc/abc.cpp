#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
int mx[9] = {0,-1, -1, -1, 0, 1, 1, 1, 0}; // fazer o vetor movimentação
int my[9] = {0,-1, 0, 1, 1, 1, 0, -1, -1};
const string ENDL = "\n";
bool v(int mvx, int mvy, int lx, int ly){
	if(mvx <= 0 || mvy <= 0) return false;
	if(mvx > lx || mvy > ly) return false;
	return true;
}
void solve(){

	int h =1, w = 1;

	int casos = 0;

    while(h != 0 && w != 0) {

        casos++;
        cin >> h >> w; if(h == 0 && w == 0) break;
        char g[51][51];
        queue<ii> inicio;
        bool temA = false;
		bool vs[51][51]; for(int i = 1; i <= h; i++) for(int j = 1; j <= w; j++) vs[i][j] = false; // matriz de visitados

        for(int i = 1; i <= h; i++){ // preencho a matriz
            for(int j = 1; j <= w; j++){
                char t; cin >> t;
                g[i][j] = t;
                if(t == 'A'){ 
                    inicio.push({i,j});
                    temA = true;
                } // insiro em uma fila de inícios, p verificar todas as possibilidades
            }
        }
        char MAIOR;

        if(!temA) MAIOR = '@';
        else MAIOR ='A';

        while(!inicio.empty()){ // enquanto a fila de inícios não estiver vazia

            char t;
            queue<ii> f;
            f.push(inicio.front());
            inicio.pop();

            while(!f.empty()){ // começo a rodar com um início

                ii u = f.front(); // pego o primeiro elemento
                t = g[u.first][u.second];
                f.pop(); // retiro ele

                for(int i = 1; i <= 8; i++){ // rodar o vetor de mov
                    if(v(u.first + mx[i], u.second+my[i], h, w)){ // verifico se o mov é válido
                        if((g[u.first + mx[i]][u.second+my[i]] == (g[u.first][u.second] + 1)) && vs[u.first + mx[i]][u.second+my[i]] == false){
                            // verifico se o elemento mais próximo é maior em um doq o anterior e se ele já foi visitado
                            f.push({u.first + mx[i], u.second+my[i]});
                            //insiro ele na fila
                            vs[u.first + mx[i]][u.second + my[i]] = true; // marco ele como visitado
                        }
                    }
                }
            }

            MAIOR = max(t,MAIOR);
        }
        cout << "Case " << casos << ": " << (MAIOR - '@') << endl;
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