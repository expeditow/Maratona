#include <bits/stdc++.h>

using namespace std;

void solve();

typedef long long ll;

int gcd(int a, int b);

int main()
{
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    int A,B,C,D; cin >> A >> B >> C >> D;

    int deltaX, deltaY;

    deltaX = (C - A); if(deltaX < 0) deltaX = deltaX * -1;
    deltaY = (D - B); if(deltaY < 0) deltaY = deltaY * -1;  

    int r = gcd(deltaX, deltaY) + 1;

    cout << r << endl;
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}