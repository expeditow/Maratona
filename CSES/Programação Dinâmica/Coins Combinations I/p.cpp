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
const int SIZE = 1e6;
const int M = 1e9 + 7;

int n,x;
int v[102];
int memo[SIZE+1];

int pd(int s)
{
	if(s == x) return 1;

	if(s > x) return 0;

	int& pdm = memo[s];

	if(pdm != -1) return (pdm % M);

	pdm = 0;

	for(int i = 0; i < n; i++) pdm = (pdm + pd(s+v[i])) % M;

	return (pdm % M);
}
void solve()
{
	cin >> n >> x;

	memset(memo, -1, sizeof(memo));

	for(int i = 0; i < n; i++) cin >> v[i];

	int ans = pd(0);

	cout << ans << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
 	return 0;
}