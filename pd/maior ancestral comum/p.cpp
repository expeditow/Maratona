#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;

int mem[1010][1010];
int n, m;
int a[1010], b[1010];

const int INF = 0x3f3f3f3f;

const string ENDL = "\n";



/*

	dada duas cadeia de carecteres numéricos, encontrar o maior ancestral comum a ambos

	i
	1 7 2 5 2
	3 7 1 5 2 2
	j

	duas execuções após a primeira

	exec do i+1,j

	  i
	1 7 2 5 2
	3 7 1 5 2 2
	j

	exec do i, j+1

	i
	1 7 2 5 2
	3 7 1 5 2 2
	  j
*/
int pd(int i, int j){
	
}
void solve() {

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
 	return 0;
}