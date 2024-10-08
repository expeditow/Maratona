#include <bits/stdc++.h>

using namespace std;

void solve();

vector<bool> visited(1002, false);

void addAresta(vector<vector<int>> &adj, int s, int t);


void DFSRec(vector<vector<int>> &adj, vector<bool> &visited, int s);


void DFS(vector<vector<int>> &adj, int s);

// já sei, eu faço o grafo normal, mas na hora de visitar eu vou visitando e colocado visitados,

int main()
{
    int t = 1;
    while(t--) solve();
    return 0;
}


void solve()
{
    int N, M; cin >> N >> M;

    vector<vector<int>> gr(N+2);

    for(int i = 0; i < M; i++)
    {
        int a, b; cin >> a >> b;
        addAresta(gr, a, b);
    }

    int times = 0;

    for(int i = 1; i <= N; i++)
    {
        if(visited[i] == false)
        {
            DFS(gr,i);
            times++;
        }
    }

    cout << times << endl;
}
void addAresta(vector<vector<int>> &adj, int s, int t)
{
    adj[s].push_back(t); // aresta de s para t
    adj[t].push_back(s); // o contrário pq n tem direção esse grafo
}

void DFSRec(vector<vector<int>> &adj, vector<bool> &visited, int s)
{
    visited[s] = true; // marca o vértice que já foi visitado

    for(int i: adj[s]) // visita todos os vértices
        if(visited[i] == false)
            DFSRec(adj, visited, i);
}

void DFS(vector<vector<int>> &adj, int s)
{   
    DFSRec(adj, visited, s);
}