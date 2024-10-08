#include <bits/stdc++.h>

using namespace std;

void solve();

int main()
{
    int t; cin >> t;

    while(t--) solve();

    return 0;
}

/*
No quadro, Ivy anotou todos os números inteiros de l para r, inclusive.

Em uma operação, ela faz o seguinte: escolha dois números x e y no quadro,
apague-os e em seu lugar escreva os números 3x e ⌊y/3⌋. (Aqui ⌊∙⌋ denota arredondamento para o número inteiro mais próximo).
Qual é o número mínimo de operações que Ivy precisa para fazer com que todos os números no tabuleiro sejam iguais a 0
? Temos uma prova de que isso é sempre possível.

Entrada
A primeira linha contém um inteiro t (1≤t≤104) — o número de casos de teste.

A única linha de cada caso de teste contém dois inteiros l e r (1≤l<r≤2⋅105).

Saída
Para cada caso de teste, produza um único número inteiro -
o número mínimo de operações necessárias para tornar todos os números no quadro iguais a 0
*/

void solve()
{
    // pelo oq eu entendi, ele pega o número que o arrendondamento vai dar 0

    // o x é bom escolher um valor que vai me dar um divisível por 3

    int ai, bi; cin >> ai >> bi;

    int intervalo = bi - ai + 1; // 4 - 2 + 1 = 3 valores, certinho!

    int v[intervalo];
    int sum = 0;
    int count = 0;

    int iX = 0, iY = intervalo - 1;

    for(int i = 0 ; i < intervalo; i++)
    {
        v[i] = ai + i;
    }

    bool p = true;


    while(p)
    {   
        sum = 0;    
        cout << sum << endl;

        int aux, auy;   

        int vX = v[iX], vY[iY];

        for(int i = 0; i < intervalo; i++)
        {   
            cout << "v [" << i << "] = " << v[i] << endl;

            sum += v[i];

            aux = min(vX, v[i]);
            auy = max(vY, v[i]);

            if(aux != vX)
            {
                
                x.second = i;
            }

            if(auy != vY)
            {
                y.first = v[i];
                y.second = i;
            }
        }

        cout << "x = "<< x.first << " i = " << x.second << endl;
        cout << "y = "<< y.first << " i = " << y.second << endl;

        v[x.second] = v[x.second] * 3;

        v[y.second] = floor(v[y.second] / 3);

        count++;

        cout << sum << endl;

        system("pause");

        if(sum == 0) break;
    }
}