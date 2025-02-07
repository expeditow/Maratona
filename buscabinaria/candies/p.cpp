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
	ta, eu preciso de todos os valores

	01 02 03 04 05 06 07 08 09 10 		
	02 04 06 08 10 12 14 16 18 20 				
	03 06 09 12 15 18 21 24 27 30 	
	04 08 12 16 20 24 28 32 36 40 
	05 10 15 20 25 30 35 40 45 50 
	06 12 18 24 30 36 42 48 54 60 
	07 14 21 28 35 42 49 56 63 70 
	08 16 24 32 40 48 56 64 72 80 
	09 18 27 36 45 54 63 72 81 90 
	10 20 30 40 50 60 70 80 90 100 

	1  2
1	01 02  2x2 -> 1 = 1, 2 = 2; 4 = 1
2	02 04

	01 02 03  3x3 -> 1 = 1, 2 = 2, 3 = 2; 4 = 1, 6 = 2, 9 = 1
	02 04 06
	03 06 09

	01 02 03 04
	02 04 06 08
	03 06 09 12
	04 08 12 16

	01 02 03 04 05 
	02 04 06 08 10
	03 06 09 12 15
	04 08 12 16 20
	05 10 15 20 25
	
	se eu só gerar 30 valores, a resposta vai ser 30
	mas se eu gerar todos os valores, a resposta é 14 -> pq aparecem valores menores aqui


*/

void solve(){
	//ll r, c, a; cin >> r >> c >> a;
	int l, c, x; cin >> l >> c >> x;
	int v[l*c];
	int a = 0;
 
	for(int i = 1; i <= l; i++){
		for(int j = 1; j <= c; j++){
			v[a] = (i*j);
			a++;
		}
	}
 
    /*for(int i = 1; i <= l; i++){
		for(int j = 1; j <= c; j++){
			cout << i*j << " ";
		}*/
 
	v.sort(begin(), end());
	
	//for(int p = 0; p < l*c; p++) cout << v[p] << " ";
 
	cout << v[x-1] << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
 	return 0;
}