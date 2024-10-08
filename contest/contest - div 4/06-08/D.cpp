#include <bits/stdc++.h>

using namespace std;

void solve();

/*
Slavic tem um exame muito difícil e precisa da sua ajuda para passar.
Aqui está a questão com a qual ele está tendo dificuldade:

Existe uma string s, que consiste em letras minúsculas do alfabeto inglês e possivelmente zero ou mais "?"
(pontos de interrogação).

Slavic precisa substituir cada "?" por uma letra minúscula do alfabeto inglês de tal forma que a string t
se torne uma subsequência (não necessariamente contínua) da string s.

Você deve fornecer uma dessas strings, ou dizer que é impossível encontrar uma string que respeite as condições.

Entrada

A primeira linha contém um único inteiro T (1 ≤ T ≤ 104) — o número de casos de teste.

A primeira linha de cada caso de teste contém uma única string s (1 ≤ |s| ≤ 2⋅10^5),
que consiste apenas em letras minúsculas do alfabeto inglês e "?" (pontos de interrogação) —
a string original que você tem.

A segunda linha de cada caso de teste contém uma única string t (1 ≤ |t| ≤ |s|),
que consiste apenas em letras minúsculas do alfabeto inglês — a string que deve ser uma subsequência da string s.

A soma de |s| em todos os casos de teste não excede 2⋅10^5, onde |x| denota o comprimento da string x.

Saída
Para cada caso de teste, se não existir tal string conforme descrito,
imprima "NO" (sem aspas). Caso contrário, imprima "YES" (sem aspas).
Em seguida, imprima uma linha — a string que respeita todas as condições.

Você pode imprimir "YES" e "NO" em qualquer caso (por exemplo, as strings "yEs", "yes" e "Yes" serão reconhecidas
como uma resposta positiva).

Se várias respostas forem possíveis, você pode imprimir qualquer uma delas.
*/

int main()
{
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    string s, t; cin >> s >> t;

    int qdCr = 0; // caracteres a serem colocados na string

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '?')
        {
            qdCr++;
        }
    }

    if(t.size() > qdCr) // se for maior que a qnd de caracteres n vai caber
    {
        cout << "NO" << endl;
        return;
    }

}