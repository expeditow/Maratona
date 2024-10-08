#include "bits/stdc++.h"

#define INF 0x3f3f3f3f // 

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
	
	int n, m; cin >> n >> m;

	vector<vector<pair<ll,ll>>> adj(n+1);
	
	for(int i = 0; i < m; i++){
		ll f, l, p; cin >> f >> l >> p;
		adj[l].push_back({f,p});
		adj[f].push_back({l,p});
	}

	vector<ll> dist(n+1, LONG_LONG_MAX);
	vector<bool> visited(n+1, false);
   	priority_queue<pair<ll,ll> , vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
	vector<ll> ant(n+1, -1);

	pq.push(make_pair(0, 1));
    dist[1] = 0;

    while (!pq.empty()) {

        int u = pq.top().second;
        pq.pop();

		if(visited[u]) continue;

		visited[u] = true;
		
        for (auto neighbor : adj[u]) {

            int v = neighbor.first;
            int weight = neighbor.second;

            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
				ant[v] = u;
                pq.push(make_pair(dist[v], v));
            }
        }

    }

	if(ant[n] == -1){
		cout << -1 << endl;
		return;
	} 

	vector<ll> path;

	for(int v = n; v != 1;  v = ant[v]){
		path.push_back(v);
	}

	path.push_back(1);

	reverse(path.begin(), path.end());

	for(auto i = path.begin(); i != path.end(); i++){
		cout << *i << " ";
	}
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	while(t--) solve();
 	return 0;
}