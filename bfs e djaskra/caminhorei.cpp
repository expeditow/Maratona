#include <bits/stdc++.h>

using namespace std;

/*
O rei está sozinho no tabuleiro de xadrez.
Apesar dessa solidão, ele não desanima, porque tem assuntos de importância nacional para resolver.
Por exemplo, ele precisa fazer uma visita oficial à casa t. Como o rei não tem o hábito de desperdiçar tempo,
ele quer ir de sua posição atual s até a casa t no menor número de movimentos possível. Ajude-o a fazer isso.

Em um movimento, o rei pode ir para uma casa que tenha um lado ou um vértice em comum
com a casa em que ele está atualmente (geralmente há 8 casas diferentes para onde ele pode se mover).

Entrada
A primeira linha contém as coordenadas do tabuleiro de xadrez da casa s, e a segunda
linha contém as coordenadas da casa t.

As coordenadas do tabuleiro de xadrez consistem em dois caracteres: o primeiro é uma
letra minúscula do alfabeto latino (de 'a' a 'h') e o segundo é um dígito de 1 a 8.

Saída
Na primeira linha, imprima n — o número mínimo de movimentos do rei. Em seguida, em n
linhas, imprima os próprios movimentos. Cada movimento é descrito com uma das 8 direções: L, R, U, D, LU, LD, RU ou RD.

L, R, U, D correspondem respectivamente aos movimentos para esquerda, direita, cima e baixo.
As combinações de duas letras (LU, LD, RU, RD) representam movimentos diagonais.
Se houver mais de uma solução correta, qualquer uma pode ser impressa.
*/

int tabela[8][8] = {};
int mL[8] = {-1, -1, -1, 0, 1, 1, 1, 0}; // vou ter que fazer x + mx[]
int mC[8] = {-1, 0, 1, 1, 1, 0, -1, -1}; // consequentemente y + my[]
bool visited[8][8] = {};
int dist[8][8] = {};
// se eu usar um -1 em linha eu subi, logo vou ter que por 

void solve();

int main()
{
    int t = 1;
    while(t--)solve();
    return 0;
}

void solve()
{   
    for(int i = 1; i <= 2; i++)
    {
        char letra; cin >> letra;
        int lin; cin >> lin;
        int col = letra - 96;

        tabela[lin][col] = 2;
    }

    // aqui e djisktra

}

void djisktra(int px, int py) // px e py são pontos inicias;
{
    priority_queue<int,int> q;

    for (int i = 0; i < 8; i++) for(int j = 0; j < 8; j++) dist[i][j] = INFINITY;

    dist[px][py] = 0;
    
    q.push({0,4});

    while (!q.empty())
    {
        int a = q.top().second; q.pop();

        if (processed[a]) continue;

        processed[a] = true;

        for (auto u : adj[a])
        {
            int b = u.first, w = u.second;
            if (distance[a]+w < distance[b])
            {
                distance[b] = distance[a]+w;
                q.push({-distance[b],b});
            }
        }
    }

}
