#include <iostream>

using namespace std;

int main()
{
  /*Fiind date doua numere naturale x si y determinati valoarea care trebuie adunata la x pentru a obtine triplul lui y.
    Programul va afisa pe ecran numarul care adunat la x va obtine triplul lui y.*/
   int x, y;
    cin >> x >> y;
  x = y*3-x;
    cout << x;
    return 0;
}
