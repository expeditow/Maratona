#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b); // gcd = mdc
int mmc(int a, int b);

int main()
{   

    cout << x << endl;
    return 0;
}

/*int gcd(int a, int b) // gcd padrão padrão
{
    int result = min(a,b);

    while(result > 0)
    {
        cout << result << endl;
        if(a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    cout << endl;

    return result;
}*/

/*int gcd(int a, int b) // gcd padrão p.2
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

     if (a == 0)

        return b;

    if (b == 0)

        return a;

    if (a == b)

        return a;

    if (a > b)

        return gcd(a - b, b);

    return gcd(a, b - a);
}*/

/*int gcd(int a, int b) 
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;   
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // Base case
    if (a == b)
        return a;

    // a is greater
    if (a > b) {
        if (a % b == 0)
            return b;
        return gcd(a - b, b);
    }
    if (b % a == 0)
        return a;
    return gcd(a, b - a);

}*/

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);    
}

