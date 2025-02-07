#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;

const int t = 10e6;
const string ENDL = "\n";
const int c = 1e9 + 7;

ll n;
ll memo[t+2];

ll pd(int s) 
{	
	if(s > n) return 0; // caso onde passamos do valor

	if(s == n) return 1; // caso base - achamos o valor

	ll& pdm = memo[s];

	if(pdm != -1) return (pdm % c);

	pdm = 0;

	for(int i = 1; i <= 6; i++)  pdm += pd(s+i);

	return (pdm % c);
	
}

void solve()
{
	cin >> n;
	//cout << c << endl;

	memset(memo, -1, sizeof(memo));

	cout << pd(0) << endl;

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
 	return 0;
}