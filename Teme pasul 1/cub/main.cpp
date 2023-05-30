#include <iostream>

using namespace std;

int main()
{
    /* S-a creat un program care afiseaza volumul ( redat prin variabila v) si aria (redata prin variabila s) unui cub in functie de valoarea unei laturi (reprezentata de variabila l) */
    int l, s, v ;
    cin >> l;
     s = 6 * l * l;
     v = l*l*l;
    cout << s << " " << v << endl;
    return 0;
}
