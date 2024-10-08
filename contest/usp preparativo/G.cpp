#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve();

int main()
{
    int t = 1;
    while(t--)solve();
    return 0;
}

/*
Voce pode viajar para a pr´oxima parada normalmente ou usar o dispositivo especial de
teletransporte. Cada vez que vocˆe usa um teletransporte, ele e destruıdo, e um novo ponto de teletransporte
e criado em sua ultima parada antes de teletransportar.

O custo da viagem normal e a diferenca absoluta na
distancia entre sua parada atual e a proxima parada. O custo de um teletransporte e a diferenca absoluta
na distancia entre sua ultima posicao de teletransporte e a pr´oxima parada.
*/
void solve()
{
    // guloso

    vector<ll> p;
    p.push_back(0);

    ll n; cin >> n;

    for(int i = 0; i < n; i++)
    {
        ll t; cin >> t;
        p.push_back(t);
    }

    ll pos = 0;
    ll idxTp = 0;
    ll idxProximo = 1;
    ll r = 0;

    while(idxProximo <= n)
    {
        ll dis, disTp, temp;

        dis = p[idxProximo] - p[pos];
        disTp = p[idxProximo] - p[idxTp];

        if(dis < 0) dis *= -1;
        if(disTp < 0) disTp *= -1;
        
        cout << "proximo idx = " << idxProximo << endl;
        cout << "idx tp = " << idxTp << endl;
        cout << "idx da pos atual " << pos << endl;

        cout << "distancia do ponto -> " << p[pos] << " pro ponto -> " << p[idxProximo] << " eh igual a -> " << dis << endl;
        cout << "distancia do tp -> " << p[idxTp] << " pro ponto -> " << p[idxProximo] << " eh igual a -> " << disTp << endl;

        if((dis <= disTp) && (pos != 0))
        {
            r += dis;
            pos ++;
            idxProximo ++;
        }

        else
        {
            r += disTp;
            cout << "usei tp" << endl;
            temp = pos;
            pos = idxTp;
            idxTp = temp;
            idxProximo++;
        }
        cout << endl;
    }
    
    cout << r << endl;
}