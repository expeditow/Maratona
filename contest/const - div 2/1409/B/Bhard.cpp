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

    ll n,m,q; cin >> n >> m >> q;
    vector<ll> p(m);
    forn(i, m) cin >> p[i];

    sort(p.begin(), p.end());

    while(q--){
        ll r,d; cin >> d;
        ll inicio = 0, fim = m-1, meio;
        while(inicio < fim){

            meio = (inicio+fim)/2;

            if(p[meio] > d){
                fim = meio;
            }
            else{
                inicio = meio + 1;
            }
        }

        if(inicio == 0){
            if(d > p[inicio]) r = n - p[inicio];
            else if(d < p[inicio]) r = p[inicio]- 1;
        }
        else if(p[inicio] < d) r = n - p[inicio];

        else r = (p[inicio] - p[inicio-1])/2;

        cout << r << endl;
    }
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}