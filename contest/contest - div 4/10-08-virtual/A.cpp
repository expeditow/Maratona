#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    scanf("%d", &t);

    char a[4] , b[4];

    string s1 ;

    for(int i=0 ; i<t ; i++){

        scanf("%s", a);
        scanf("%s", b);

        s1 = a[0] ;
        a[0] = b[0];
        b[0] = s1;

        for(int i = 0 ; i < 3; i ++)
        {
            cout << a[i];
        }

        cout << " ";

        for(int i = 0 ; i < 3; i ++)
        {
            cout << b[i];
        }
    }

    return 0;
}