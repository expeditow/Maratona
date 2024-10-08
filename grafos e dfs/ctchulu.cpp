#include <bits/stdc++.h>
 
using namespace std;
/*
inputCopy
6 6
6 3
6 4
5 1
2 5
1 4
5 4


6 5
5 6
4 6
3 1
5 1
1 2

*/
vector<vector<int>> gr(102);
bool visited[102] = {};
int qntdVertices[102] = {};

void solve();
void dfs(int vert);
 

// se basear na qntd de arestas, verificar se aql  
int main()
{
    int t = 1;
    while(t--)solve();
    return 0;
}
 
void solve()
{
    int n, m; cin >> n >> m;
 
    for(int i = 1; i <= m; i++)
    {
        int a, b; cin >> a >> b;
 
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
 
    bool ciclo = true;
 
    dfs(1);
    
    if(n == m)
    {
        for(int i = 1; i <= n; i++) if(qntdVertices[i] > 2) ciclo = false;

        for(int i = 1; i <= n; i++) if(!visited[i]) ciclo = false;

    }
    else ciclo = false;


    if(ciclo) cout << "FHTAGN!" << endl;
    else cout << "NO" << endl;
}
 
void dfs(int vert)
{
    //cout << "vertice -> " << vert << " ultimo foi o ->" << last << endl;
    visited[vert] = true;

    qntdVertices[vert]++;
 
    for(auto v: gr[vert])
        if(!visited[v])
            dfs(v);
    
}