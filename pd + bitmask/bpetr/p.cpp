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
const int INF = 0x3f3f3f3f;

int n;
int v[16];
int memo[365][365];

int pd(int g, int i)
{

	if(i == n+1) return INF;

	if(g == 0 && i == n) return 0;

	if(i == n) return INF;

	int& pdm = memo[i][g];
	
	if(pdm != -1) return pdm; 

	pdm = INF;

	pdm = min({pd((abs(g + v[i])%360), i+1), pd(abs((g-v[i])%360), i+1), pdm});
		
	return pdm;
}

void solve()
{
	cin >> n;

	for(int i = 0; i < n; i++) cin >> v[i];

	memset(memo, -1, sizeof(memo));

	int ans = INF;

	ans = min({pd(v[0], 1), pd(-v[0], 1), ans});

	if(ans == 0) cout << "yes" << endl;

	else cout << "no" << endl;
}	
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1; //cin >> t;
	while(t--) solve();
 	return 0;
}