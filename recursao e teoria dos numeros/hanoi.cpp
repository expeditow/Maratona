#include <bits/stdc++.h>

using namespace std;

void hanoi(int n, char inicio, char lixo, char dest);

int main()
{   
    char a = 'a', b = 'b', c = 'c';

    hanoi(7, a, b, c);

    return 0;
}

void hanoi(int n, char inicio, char lixo, char dest)
{
    if(n == 0) return;

    hanoi(n-1, inicio, dest, lixo);

    cout << inicio << " " << dest << endl;

    hanoi(n-1, lixo, inicio, dest);

}