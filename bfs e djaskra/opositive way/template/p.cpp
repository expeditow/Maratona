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

bool verifica(vector<ll> &v, double sum){

	ll d = 0;

	for(int i = 0; i <= v.size()-2; i++){
		if(v[i] < sum) d++;
	}

	if(d > v.size()/2) return true;

	return false;
}

void solve(){

	ll n; cin >> n;
	vector<ll> v(n,0);
	ll sum = 0;

	for(int i = 0; i < n; i++){
		cin >> v[i];
		sum += v[i];
	}	

	sort(v.begin(), v.end()); // a ultima pos vai ser aquela que é o mais rico

	ll inicio = 0, fim = 10e17;
	ll meio;

	if(n <= 2) {
		cout << -1 << endl;
		return;
	}

	while(inicio < fim){

		meio = (inicio+fim)/2;

		if(verifica(v, double(((meio+sum)*1.0)/(n * 2.0)))){
			fim = meio;
		}
		
		else inicio = meio + 1;
	}

	if(inicio == 10e17) cout << "-1" << endl;

	else cout << inicio << endl;
	
}

 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}