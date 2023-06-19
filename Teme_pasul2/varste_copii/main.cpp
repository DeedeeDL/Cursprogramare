#include <iostream>

using namespace std;

/* Vom crea un program care va afisa care dintre cei doi copii este mai mare si diferenta de varsta dintre acestia */
int main()
{ int v1,v2; /* cele doua variabile reprezinta varstele a doi copii */
cin >> v1 >> v2;
 if (v1>v2){
    cout << "Primul copil este mai mare cu" << v1-v2 <<" ani";
 }
  else if (v1==v2) {
    cout << "Copiii au varste egale";
 }
 else {
    cout << "Al doilea copil este mai mare cu " << v2-v1 << " ani";
 }

    return 0;
}
