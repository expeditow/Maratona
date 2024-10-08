#include <bits/stdc++.h>

using namespace std;

void solve();

int busca_bin(vector<int> y, int e);

int main()
{
    int t; cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

void solve()
{
    int n; cin >> n;
    bool r = true;
    bool v[n] = {false};



    for(int i = 0; i < n ;i++){

        int a; cin >> a;
        //cout << "valor que entrou = " << a << endl;

        if(i == 0) v[a-1] = true;

        else
        {
            // preciso verificar 1 posição a frente e uma atrás
            if(a > 1)
            {
                if(v[a-2])
                {
                    v[a-1] = true;
                }
            }

            if(a < n)
            {
                if(v[a])
                {
                    v[a-1] = true;
                }
            }

            if(v[a-1] == false) r = false;
        }
    }


    if(r) cout << "YES" << endl;

    else cout << "NO" << endl;

    return;
}