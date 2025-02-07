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

ll n, a, b;

// carai, agora que eu vi que da p dar tp po
// simplesmente eu vou fazero contrário
void dfs(vector<vector<pair<ll, ll>>> &gr, vector<bool> &vis, ll node, ll x, vector<ll> &ans, bool &xr)
{
	if (xr)
		return;

	// cout << "vertice pai -> " << node << endl
	//<< "x atual -> " << x << endl;

	for (ll i : ans)
	{
		// cout << "(" << x << " ^ " << i << ") == " << (x ^ i) <endl;
		if ((x ^ i) == 0)
		{
			xr = true;
			return;
		}
	}

	vis[node] = true;

	for (auto idx : gr[node])
	{
		if (!vis[idx.first])
		{
			// cout << "	vertice filho -> " << idx.first << endl;
			if (idx.first != b)
				dfs(gr, vis, idx.first, (x ^ idx.second), ans, xr);
		}
	}
}

void solve()
{

	cin >> n >> a >> b;
	bool p2 = false;
	// cout << n << " " << a << " " << b << endl;

	vector<vector<pair<ll, ll>>> g(n + 1);
	vector<bool> v(n + 1, false);
	vector<ll> r;

	for (int i = 1; i < n; i++)
	{ // grafo criado
		ll vi, vf, p;
		cin >> vi >> vf >> p;

		// cout << vi << " " << vf << " " << p << endl;

		g[vi].push_back({vf, p}); // o par é {vértice, peso}
		g[vf].push_back({vi, p});

		if (vi == b || vf == b)
		{
			// cout << "p's = " << p << endl;
			r.push_back(p);
		}
	}

	// e se em vez de eu começar do 0, eu começar do próprio fim, assim, em algum momento eu posso achar um 0
	// if(n == 2 )
	for (int i = 1; i <= n; i++)
		dfs(g, v, i, 0, r, p2);

	if (p2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main()
{
	ios_base ::sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}