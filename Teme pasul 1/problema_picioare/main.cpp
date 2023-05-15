#include <iostream>

using namespace std;

int main()
{ //*Programul va afisa numarul de picioare si de capete din curte **/
  int g, o , c , p; /* declaram doua variabila care reprezinta gainile (g) si oile dintr-o curte, c -nr de capete si p- nr de picioare*/
   cin >> g >> o;
   c = g+o; /* capete = gaini + oi*/
   p = 2*g+ 4*o; /* picioare = 2 de gaina plus cate 4 de oaie*/
    cout << c << " " << p << endl;
    return 0;
}
