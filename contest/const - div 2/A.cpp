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
    // basicamente eu tenho que criar um ponto em que a distancia entre eles seja a menor possível
    set<int> v;
    int n; cin >> n;

    for(int i = 0; i < n; i++)
    {
        int tp; cin >> tp;
        v.insert(tp);
    }

    /*for(auto ptr = v.begin(); ptr != v.end(); ptr++)
    {
        cout << *ptr << " ";
    }*/

    int m_d = 99999;
    int temp;
    for(auto itr = v.begin(); itr != v.end(); itr++)
    {
        if(itr != v.begin())
        {
            m_d = min(m_d, (*itr - temp));
            //cout << "minimo = " << m_d << endl;
        }
        temp = *itr;
    }

    if(m_d != 1 && n == 2) cout << "YES" << endl;


   else cout << "NO" << endl; 

}