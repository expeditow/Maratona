#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
/*
Como estudante de ciência da computação,
Alex enfrenta um desafio difícil: tomar banho. Ele tenta tomar banho diariamente, mas, apesar de seus melhores esforços,
sempre há desafios. Ele leva s minutos para tomar banho, e um dia tem apenas m minutos!

Ele já tem n tarefas planejadas para o dia. A tarefa i é representada como um intervalo (li, ri),
o que significa que Alex está ocupado e não pode tomar banho nesse intervalo de tempo
(em qualquer momento estritamente entre li e ri). Nenhuma das tarefas se sobrepõe.

Dado todos os n intervalos de tempo, Alex conseguirá tomar banho naquele dia?
Em outras palavras, Alex terá um intervalo de tempo livre de pelo menos s minutos?

Entrada

A primeira linha contém um único inteiro t (1 ≤ t ≤ 10⁴) — o número de casos de teste.

A primeira linha de cada caso de teste contém três inteiros n, s e m (1 ≤ n ≤ 2⋅10⁵; 1 ≤ s, m ≤ 10⁹)
— o número de intervalos de tempo que Alex já tem planejados, o tempo que Alex leva para tomar banho
e a quantidade de minutos que um dia tem.

Em seguida, seguem n linhas, a i-ésima das quais contém dois inteiros li e ri (0 ≤ li < ri ≤ m)
 o intervalo de tempo da i-ésima tarefa. Nenhuma das tarefas se sobrepõe.

Restrição adicional na entrada: li > ri-1 para todo i > 1.

A soma de n em todos os casos de teste não excede 2⋅10⁵.

Saída

Para cada caso de teste, imprima "YES" (sem aspas) se Alex puder tomar banho naquele caso de teste, e "NO" (também sem aspas) caso contrário.

Você pode imprimir "YES" e "NO" em qualquer caso (por exemplo, as strings "yEs", "yes" e "Yes" serão reconhecidas como uma resposta positiva).
*/

void solve();
int main()
{
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    int n;
    lli s, m;

    cin >> n >> s >> m;

    vector<pair<lli,lli>> itv;

    for(int i = 0; i < n; i++)
    {
        lli ai, bi; cin >> ai >> bi;

        pair<lli,lli> t;

        t.first = ai;
        t.second = bi;

        itv.push_back(t);
    }

    sort(itv.begin(), itv.end()); // acho que n tem que fazer isso n

    // acho que ai,bi são horas específicas em um dia então até que vale a pena

    if(itv[0].first >= s || m - itv[n-1].second >= s) // verifico gap inicial e final
    {
        cout << "YES" << endl;
        return;
    }

    // verifico gap entre os intervalos

    for(int i = 0; i < n-1; i++)
    {
        if(itv[i+1].first - itv[i].second  >= s)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}