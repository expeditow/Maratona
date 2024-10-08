#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> gr(102);
bool visitados[102] = {};
int distancia[102] = {};

void bfs(vector<vector<int>> adj, int s, bool* visited);

// dfs gera árvores durante seu caminho
int main()
{
    gr[0].push_back(1);
    gr[1].push_back(0);
    gr[0].push_back(2);
    gr[2].push_back(0);
    gr[1].push_back(3);
    gr[3].push_back(1);
    gr[1].push_back(4);
    gr[4].push_back(1);
    gr[2].push_back(4);
    gr[4].push_back(2);

    cout << "bfs comecando do 0" << endl;
    bfs(gr, 0, visitados);

    return 0;
}   

void bfs(vector<vector<int>> adj, int s, bool* visited) 
{
    // cria a fila de busca
    queue<int> q;

    //joga o elemento inicial na fila e marca como visitado
    
    visited[s] = true;
    q.push(s);
    distancia[s] = 0;
    // iteramos sobre a fila
    while (!q.empty()) {
      
        // tira da fila e printa
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        cout << "distancia = " << distancia[curr] << endl;


        // pega todos os vértices adjacentes do elemento tirado da fila
        // do vértice curr, seo adjacente n tiver sido
        //visitado, marca e enfila

        for (int x : adj[curr]) {
            if (!visited[x]) {
                visited[x] = true;
                distancia[x] = distancia[curr]+1;
                q.push(x);
            }
        }
    }
}


// vetor de movimentação, basicamente atribuo valores a posições nos vetores indicando o quanto eles teriam que se mexer p realizar um movimento
// atrelado a isso, a cada "movimento" que eu fizer, eu preciso verificar se aquele movimento é válido ( n dar segment fault)

// dfs que eu fiz
void bfs(vector<vector<int>> grafo, int verticeInicio, bool* visitados)
{
    // primeiro vamos criar a fila de vértices a serem visitados
    queue<int> fila;

    // talvez eu tenha que adicionar o vértice de inicio na fila, marcar como visitado

    fila.push(verticeInicio);
    visitados[verticeInicio] = true;

    while(!fila.empty()) // acho que é assim, 
    {
        // vou tirar da fila, printar, e iterar p ver se acho adjacentes a ele

        int atual = fila.front(); // n sei como pega o primeiro elemento da fila, acho que é assim
        cout << atual << " "; // printa o vértice tirado, já que ele foi visitado
        fila.pop();

        // 100% até aq, só a parte debaixo que ficou faltando coisas mesmo

        for(auto i : grafo[atual]) // iteramos sobre os adjs do vértice atual, 
        {
            if(!visitados[i]) continue; // evitar loops, vou testar o continue
            fila.push(i); // n lembro como ele fazia essa parte aq, se ele já puxava o i direto
            visitados[i] = true;// acho que posso puxar o i pq  
        }
    }
}