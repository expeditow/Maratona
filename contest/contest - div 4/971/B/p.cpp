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

void solve()
{
	ll l; cin >> l;
	char t[l][4] = {};

	for(int i = 0; i < l; i++) for(int j = 0; j < 4; j++) cin >> t[i][j];

	//for(int i = 0; i < l; i++){ for(int j = 0; j < 4; j++) cout << t[i][j] << " "; cout << endl;}
	for(int i = l-1; i >= 0; i--){
		for(int j = 0; j < 4; j++){
			if(t[i][j] == '#') cout << (j+1) << " ";
		}
	}
	cout << endl;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}