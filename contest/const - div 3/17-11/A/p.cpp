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

void solve(){

	// dado um vetor, ele quer maximizar, podemos usar map
	int n, ans = 0; cin >> n;
	int v[n];
	for(int i = 0; i < n; i++) cin >> v[i];

	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(v[i] == v[j] && v[i] != -1){
				ans++;
				v[i] = -1;
				v[j] = -1;
				break;
			}
		}
	}
	cout << ans << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}