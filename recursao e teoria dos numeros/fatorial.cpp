#include <bits/stdc++.h>

using namespace std;

unsigned int fatorial(int a);
int main()
{
    unsigned int x = fatorial(6);
    cout << x << endl;
    return 0;
}
unsigned int fatorial(int a)
{
    if(a == 0 || a == 1)
        return 1;

    return a * fatorial(a-1);    
}