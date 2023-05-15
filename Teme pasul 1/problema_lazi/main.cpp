#include <iostream>

using namespace std;

int main()
/* Vom realiza un program care sa afiseze numarul de cutii suprapuse care incap intr-o camera cu o anumita inaltime **/
{ int l,h, n; /* variabile declarate pentru : l- latura cutii; h-inaltime camera; n -nr de cutii suprapuse din camera */
   cin >> l >> h;
   n = h/l;
    cout << n << endl;
    return 0;
}
