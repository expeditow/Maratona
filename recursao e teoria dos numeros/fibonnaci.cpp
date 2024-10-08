#include <bits/stdc++.h>

    // fazer aql árvore que explica o fibonaci
using namespace std;

int fib(int n);

int main()
{
    int c; cin >> c;
    int x = fib(c);
    cout << x << endl;
    return 0;
}

int fib(int n)
{
    if( n == 0 || n == 1)
    {
        return 1;
    }
    
    return fib(n-1) + fib(n-2);
}