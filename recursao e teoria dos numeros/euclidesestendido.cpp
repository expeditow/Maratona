#include <bits/stdc++.h>

using namespace std;

void solve();
int gcd(int n, int x);

int main()
{
    solve();
    return 0;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    int mdc = gcd(a,b);
    cout << mdc << endl;
}
/*int gcd(int n, int x )
{
    int M = max(n,x);
    int m = min(n,x);

    if(M%m == 0) return m;

    else
    {
        M = M%m;
        return gcd(M, m);
    }
}*/

int gcd(int a, int b)
{
    cout << "a = " <<  a  << endl << "b = " << b << endl;
    cout << endl;

    return b == 0 ? a : gcd(b, a % b);    // cond ? verdadeiro, falso

    // entendi
    /*
        b vai ser o menor
        mesmo que se passe um valor na ordem

        x y, sendo y > x vai ficar:

        ex

        15 1005
                
        b == 0 ? retorna 15 : gcd (1005, 15 % 1005) // que da 0 resto = 15;

        na próxima já vem assim

        1005 15 a > b;

        b == 0 ? retorna 1005 : gcd(15, 1005 % 15)

        entendi já

        é tipo o bgl do euclides mesmo, qnd o menor valor for finalmente zero, ele retorna a, do contrário ele faz recursão
        pro resto dnv

    */
}