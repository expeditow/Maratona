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
const int MOD = 1e9 + 7;
const int INF = 1e6;

char m[1002][1002];
int memo[1002][1002];

int n;

int pd(int i, int j){
	// pd básiquinha
	//cout << "mov: i =  " << i << ", j = " << j << endl;
	if(m[i][j] == '*') return 0;

	if(i >= n || j >= n) return 0;

	if(i == n-1 && j == n-1) return 1;

	int& pdm = memo[i][j];

	if(pdm != -1) return (pdm % MOD);

	pdm = 0;

	pdm += ((pd(i, j+1))%MOD + (pd(i+1, j))%MOD) % MOD;

	return (pdm % MOD);
}
void solve()
{
	// só se pode movimentar p direita -> j+1, ou p baixo -> i+1
	cin >> n;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> m[i][j];
		}
	}

	memset(memo, -1, sizeof(memo));

	cout << pd(0, 0) << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
 	return 0;
}