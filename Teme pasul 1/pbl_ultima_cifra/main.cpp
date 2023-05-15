#include <iostream>

using namespace std;

int main()
{
/*Cerința
Se dau două numere naturale x și y. Calculați ultima cifră a sumei lor.

Date de intrare
Programul citește de la tastatură numerele x și y.

Date de ieșire
Programul va afișa pe ecran ultima cifră a sumei x+y.

Restricții și precizări*/

int x,y;
cin >> x >> y;
cout << (x+y)%10;
    return 0;
}
