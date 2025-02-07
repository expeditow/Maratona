#include "bits/stdc++.h"
 
using namespace std;
 
#define forn(i,n) for (int i = 0 ; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int , int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;
 
const string ENDL = "\n";
 
void solve(){
 
    ll n, k; cin >> n >> k;
    vector<ll> v(k);
 
    for(int i = 0; i < k; i++) cin >> v[i];
 
    sort(v.begin(), v.end());
 
    ll g = 0, w = 0, r = 0;
    ll ind = k-1;
 
    while(g < n && ind >= 0){
 
        r = n - v[ind];
        ind--;
        g += r;
        w++;

        if(v[ind] <= g) break;
    }
 
    cout << w << endl;
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    int t = 1; cin >> t;
    while(t--) solve();
    return 0;
}
