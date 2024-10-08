#include <bits/stdc++.h>

using namespace std;

int mValores[1002][1002] = {};
bool mVisitados[1002][1002] = {};

void solve();
void DFSmatriz(int matriz[][1002], bool verdades[][1002], int N, int M, int i, int j, int salas);

int main()
{
    int t = 1;
    while(t--)solve();
    return 0;
}

//  tentar fazer um dfs em uma matriz e é isso
void solve()
{
    int N, M; cin >> N >> M;
    int inicio[2];
    int salas = 0;

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            int a; cin >> a;

            if(a != 0)  mValores[i][j] = a;
            if(a == 2) inicio[0] = i, inicio[1] = j;
        }
    }

    DFSmatriz(mValores, mVisitados, N, M, inicio[0], inicio[1], 0);
}

void DFSmatriz(int matriz[][1002], bool verdades[][1002], int N, int M, int i, int j, int salas)
{   
    salas++;

    if(matriz[i][j] == 3) cout << salas << endl;

    verdades[i][j] = true;

    if(i > 1 && (matriz[i-1][j] > 0 && verdades[i-1][j] == false)) DFSmatriz(matriz, verdades, N, M, i-1, j, salas);
    if(i < N && (matriz[i+1][j] > 0 && verdades[i+1][j] == false)) DFSmatriz(matriz, verdades, N, M, i+1, j, salas);
    if(j > 1 && (matriz[i][j-1] > 0 && verdades[i][j-1] == false)) DFSmatriz(matriz, verdades, N, M, i, j-1, salas);
    if(j < M && (matriz[i][j+1] > 0 && verdades[i][j+1] == false)) DFSmatriz(matriz, verdades, N, M, i, j+1, salas);
}

