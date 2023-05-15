#include <iostream>

using namespace std;
//* Crearea unui program din care sa reiasa numarul total de pagini citite (n) *//
int main()
{
int f, b, n ; //* 3 variabile declarate, reprezentand fete, baieti si nr total de pagini citite *//
    cin >> f >> b >> n;
    cout << (f*3+b*2)*n << endl;
    return 0;
}
