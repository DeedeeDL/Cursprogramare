#include <iostream>

using namespace std;

int main()
{ /*Se creaza un program care afiseaza pe ecran o valoare care reprezinta numarul total de globuri . Glocurile sunt reprezentate de variabilele : a (pentru globuri albe), r (pentru globuri rosii) si v (globurile verzi) */
int a,r,v;
  cin >> a;
   r = 2*a; /*variabila r este dubla decat a (numarul de globuri rosii este dublu fata de cel de globuri albe*/
   v= r-3; /* variabila v este cu 3 mai mica decat r (cu 3 mai putine globuri verzi decat rosii */
  cout << a+r+v;
    return 0;
}
