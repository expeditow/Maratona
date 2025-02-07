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
const int INF = 1e9 + 7;
const int s = 1e6+2;

int x, n;
int v[102];
int memo[s];

int pd(int s)
{	

	if(s > x) return INF; 

	if(s == x) return 0; 

	int& pdm = memo[s];

	if(pdm != -1) return pdm; 

	pdm = INF;
	
	for(int i = 0; i < n; i++)  pdm = min(pd(s+v[i])+1, pdm);

	return pdm;

	/*
	
	if(s > x) return INF; // passamos
    if(s == x) return q; // quantidade de moedas

    int& pdm = memo[s];

    if(pdm != -1) return pdm;

    pdm = INF;

    for(int i = 0; i < n; i++) pdm = min(pdm, pd(s+v[i], q+1));

    return pdm;
*/
}
void solve()
{
	cin >> n >> x;

	for(int i = 0; i < n; i++) cin >> v[i];

	memset(memo, -1, sizeof(memo));

	int ans = INF;

	ans = min(ans, pd(0));

	if(ans == INF) cout << -1 << endl;

	else cout << ans << endl;

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
 	return 0;
}