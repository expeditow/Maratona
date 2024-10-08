#include <bits/stdc++.h>

using namespace std;
void solve();


#define forn(i, n) for(int i = 0; i < n ; i++)

int main()
{
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    int l,r;    cin >> l >> r;
    int L,R;    cin >> L >> R;
    bool t = false;

    int m = min(l,L);
    int M = max(r,R); 

    //cout << m << " "<< M << endl;
    int portas = 0;

    for(int i = m; i <= M; i++)
    {
        t = false;

        if((l <= i && r >= i))
        {
            //cout << "i == " << i << endl;
            if(L <= i+1 &&  R >= i+1)
            {
                //cout << "i + 1 == " << i+1 << endl;

                //cout << "intervalo [" << i << "," << i+1 << "] " << endl;

                portas++;
                t = true;
            }
        }

        if(L <= i && R >= i)
        {
            if(l <= i+1 && r >= i+1)
            {
                //cout << "intervalo [" << i << "," << i+1 << "] " << endl;
                if(t == false) portas++;
            }
        }
    }

    cout << portas << endl;
}