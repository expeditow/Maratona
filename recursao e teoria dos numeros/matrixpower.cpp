#include <bits/stdc++.h>

using namespace std;

typedef long long int  lli;

lli mod =  1e9 + 7;
#define M 51

lli ar[M][M], I[M][M];

void power(lli A[][M], int dim, int n);
void mult(lli A[][M], lli B[][M], int dim);

void solve();

int main()
{
    ios_base :: sync_with_stdio(false);
	cin.tie(0);
    int t; cin >> t;
    while(t--)solve();
    return 0;
}

void solve()
{
    int dim, exp;
    cin >> dim >> exp;

    for(int i = 1; i <= dim; i++)
        for(int j = 1; j <= dim; j++)
            cin >> ar[i][j];

    //power(ar, dim, exp);

    for(int i = 1; i <= dim; i++)
    {
        for(int j = 1; j <= dim; j++)
        {
            if(i == j) I[i][j] = 1;
            else       I[i][j] = 0;
        }
    }

    lli resp[dim+1][dim+1];

    while( exp > 0)
    {
        if(exp % 2 == 0)
        {
            for(int i = 1; i <= dim; i++)
            {
                for(int j = 1; j <= dim; j++)
                {
                    resp[i][j] = 0;

                    for(int k = 1; k <= dim; k++)
                    {
                        resp[i][j] = (resp[i][j] % mod + ((ar[i][k] % mod) * (ar[k][j] % mod) % mod)) % mod;
                    }
                }
            }

            for(int i = 1; i <= dim; i++)
            {
                for(int j = 1; j <= dim; j++)
                {
                    ar[i][j] = resp[i][j];
                }
            }

            exp = exp/2;
        }

        else
        {
            for(int i = 1; i <= dim; i++)
            {
                for(int j = 1; j <= dim; j++)
                {
                    resp[i][j] = 0;

                    for(int k = 1; k <= dim; k++)
                    {
                        resp[i][j] = (resp[i][j] % mod + ((I[i][k] % mod) * (ar[k][j] % mod) % mod)) % mod;
                    }
                }

                for(int l = 1; l <= dim; l++) I[i][l] = resp[i][l];
            }
            exp--;
        }
    }

    for(int i = 1; i <= dim; i++)
    {
        for(int j = 1; j <= dim; j++)
        {
            cout << resp[i][j] << " ";
        }
        cout << "\n";
    }

}
