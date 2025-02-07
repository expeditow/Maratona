#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;

int n, a, b, c;
const int INF = 0x3f3f3f3f;
int v[4040][4040];

// o problema é matriz

const string ENDL = "\n";

int pd(int i, int z, int p){

	if(z < 0) return -INF; 

	if(z == 0) return p;

	int&pdm = v[z][p];

	if(pdm != -1) return pdm;

	pdm = 0;

	return pdm = max ({pd(a, z-a, 1+p), pd(b, z-b, 1+p), pd(c, z-c, 1+p)});
}
void solve(){


	cin >> n >> a >> b >> c; // pegar esse a, b e c em vetor ou jogar os 3 no max e fé

	memset(v, -1, sizeof(v));

	//cout << a << " "  << n-a << " / " << b << " " << n-b << " / " << c  << " " << n-c << endl;
	int r = max({pd(a,(n-a),1), pd(b,(n-b),1), pd(c,(n-c),1)});
	
	cout << r << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
 	return 0;
}