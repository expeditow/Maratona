#include <bits/stdc++.h>

using namespace std;
// se o somatório for < n, posso subtrair por um
// do contrário faço % 2;
void solve();

int main()
{
    int t = 1;
    while(t--)solve();
    return 0;
}

void solve()
{
    vector<int> v;
    int n; cin >> n;
    int c = 0;
    bool t = false;
    // posso escolher um subconjunto p ver se ele é ímpar e diminuir em um

    for(int i = 0; i < n; i++)
    {
        int a; cin >> a;
        v.push_back(a);

        if(a % 2 != 0 && a != 0)
        {
            v[i] -= 1;
            t = true;
        }
    }

    if(t == true)
    {
        c++;
        t = false;
    }

    for(int i = 0; i < n; i++)
    {
        if(v[i] % 2 == 0 && v[i] != 0)
        {
            t = true;
        }
    }

    if(t)
    {
        c++;
    }

    cout << c << endl;
}