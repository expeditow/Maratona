#include <bits/stdc++.h>

using namespace std;

int mmc(int a, int b);

int main()
{   
    int x = mmc(60,20);

    cout << x << endl;

    return 0;
}

/*
    a * b = MMC(a,b) * MDC(a,b)
*/

int mmc(int a, int b)
{
    int greater = max(a, b);
    int smallest = min(a, b);

    for (int i = greater; ; i += greater) {
        if (i % smallest  == 0)
            return i;
    }
}