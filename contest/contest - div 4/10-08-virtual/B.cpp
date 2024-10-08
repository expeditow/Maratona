#include <bits/stdc++.h>

using namespace std;

void solve();

int main()
{
    int t; cin >> t;

    while(t--) solve();

    return 0;
}

void solve()
{
    int n; cin >> n;
    int aux = 0, resp = 0;

    for(int i = 2 ; i <= n; i++)
    {
        int sum = 0;
        int x = 1;

        do
        {
            sum += + i*x;

            x++;
        } 
        while(i*x <= n);
        

        if(sum > aux)
        {
            aux = sum;
            resp = i;
        }
    }       

    cout << resp << endl;
}