#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
using vll = vector<ll>;
using lolo = pair<ll, ll>;

const string ENDL = "\n";

ll maxai = 10e9;

void solve()
{
	ll n; cin >> n;
	vll v;

	forn(i,n) {
		ll x; cin >> x;
		v.push_back(x);
	}

	// criar o vetor dos bits

	ll pot = 1;
	vll pots;

	while(pot < maxai) {
		pots.push_back(pot);
		pot *= 2;
	}

	int psize = pots.size();
	vll freq(psize,0);


	//for(int i = 0; i < psize; i++) cout << pots[i] << " " << endl; basicamente fiz um vetor com todas as potencias de 2
	// até o valor máximo

	forn(i,n){

		forn(j, psize){
			ll x = v[i] ^ pots[j];
			if(x < v[i]) freq[j]++;
		}
	}

	//for(int i = 0; i < psize; i++) cout << freq[i] << " ";

	forn(i, n){
		ll x = 0;
		forn(j, psize){
			if(freq[j] >= 1){
				x += pots[j];
				freq[j]--;
			}
		}
		cout << x << " ";		
	}
	cout << endl;
}	
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	//cin >> t;
	while(t--) solve();
	return 0;
}