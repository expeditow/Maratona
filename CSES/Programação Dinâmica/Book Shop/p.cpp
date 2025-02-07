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
const int SIZE = 1e5 + 2;
const int INF = 1e6 + 1;

int n, x;
int h[SIZE+2], v[SIZE+2];

void solve()
{
	cin >> n >> x;

	for(int i = 0; i < n; i++)	cin >> h[i]; // preço
	for(int i = 0; i < n; i++)	cin >> v[i]; // pág

	vector<int> dp(x+1, 0);

	for(int i = 0; i < n; i++){

		int price = h[i];
		int page = v[i];

		//cout << "Preco: " << price << " Pagina: " << page << endl;
		//cout << "J: " << x << " Vai ate: " << price << endl;

		for(int j = x; j >= price; --j){

			//cout << "dp[" << j << "] = max(" << dp[j] << ", " << dp[j-price] + page << ")" << endl;
			//cout << "dp[j] = " << dp[j] << endl;
			//cout << "dp[j-price] + price = " << dp[j-price] + price << endl;
			//cout << "j = " << j << " price = " << price << endl;

			//cout << "max "<< dp[j] << " dp[" << j << " - " << price << "] = " << dp[j-price] + price << " + " << price << endl;
			//cout << "j = " << j << ", price = " << price << ", page = " << page << endl;
			dp[j] = max(dp[j], dp[j - price] + page);
		}
	}

	cout << dp[x] << endl;
}
 
int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
 	return 0;
}