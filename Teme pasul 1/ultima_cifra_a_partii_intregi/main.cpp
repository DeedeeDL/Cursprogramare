#include <iostream>

using namespace std;

int main()
{
/*  Realizarea unui program care va citi de la tastatura ultima cifra a partii intregi al unui numar real */

    double a;
    int b;
    a=b; /* Pentru a citi partea intreaga al variabilei am realizat o coversie implicita */
    cin >> b ;
    cout << b%10 ; /* Am apelat la modulo pentru a afisa ultima cifra a numarului intreg*/
    return 0;
}
