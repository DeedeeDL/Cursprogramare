#include <iostream>

using namespace std;
//* Crearea unui program din care sa reiasa numarul total de pagini citite (n) *//
int main()
{
int fete, baieti, nrpagini ; //* 3 variabile declarate, reprezentand fete, baieti si nr total de pagini citite *//
    cin >> fete >> baieti >> nrpagini;
    cout << (fete*3+baieti*2)*nrpagini << endl;
    return 0;
}
