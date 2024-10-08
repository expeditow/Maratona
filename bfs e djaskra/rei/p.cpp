#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


// 1 1 -> subiu, e foi p direita UD
// 1 0 ->  subiu
// 1 -1 subiu e foi p esquerda

string mov[9] = {"0", "LU", "U", "RU", "R", "RD", "D", "LD", "L" };

int mx[9] = {0,1, 1, 1, 0, -1, -1, -1, 0};
int my[9] = {0,-1, 0, 1, 1, 1, 0, -1, -1};

int d[9][9];

typedef struct pontos{
    ii c;
    vector<string> p;
} ponto;

const string ENDL = "\n";


bool vld(int x, int y){

    if(x <= 0  || y <= 0) return false;
    if(x >= 9 || y >= 9) return false;

    return true;
}

void bfs(int m[][9], ii inicio, ii fim){

    for(int i = 1; i<= 8; i++) for(int j = 1; j <= 8; j++) d[i][j] = 0;
    bool v[9][9]; for(int i = 1; i <= 8; i++) for(int j = 1; j <= 8; j++) v[i][j] = false;

    ponto in;
    in.c = inicio;

    queue<ponto> f;

    vector<string> path;

    f.push(in);

    v[inicio.first][inicio.second] = true;
    d[inicio.first][inicio.second] = 0;

    while(!f.empty()){
        
        //cout << f.front().c.first << " "<< f.front().c.second << endl;
        //for(auto x: f.front().p){
           //cout << x << " ";
        //}
        //cout << endl << endl;
        ponto p = f.front();
        ii t = p.c;
        f.pop();

        if(p.c == fim){
            
            if(path.empty()) path = p.p;

            else if(p.p.size() < path.size()) path = p.p;
        }

        for(int i = 1; i <= 8; i++){

            if(vld(t.first + mx[i],t.second + my[i]) && !v[t.first + mx[i]][t.second + my[i]]){
                d[t.first + mx[i]][t.second + my[i]] = d[t.first][t.second] + 1;
                v[t.first + mx[i]][t.second + my[i]] = true;

                ii temp = {t.first + mx[i], t.second + my[i]};
                ponto n;

                n.c = temp;
                n.p = vector<string>(p.p);
                n.p.push_back(mov[i]);

                f.push(n);
            }
        }
    }
    
    cout << path.size() << endl;

    for(auto x : path){
        cout << x << endl;
    }
}

void solve() {

    int t[9][9]; for(int i = 1; i <= 8; i++) for(int j = 1; j <= 8; j++) t[i][j] = 1;

    char a1,b1;
    int a2,b2;

    cin >> a1 >> a2;
    cin >> b1 >> b2;

    ii a = {a2, a1 - 'a' + 1 };
    ii b = {b2, b1 - 'a' + 1};


    bfs(t, a, b);

    
}
 
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    int t = 1;//cin >> t;
    while(t--) solve();
     return 0;
}