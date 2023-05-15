#include <iostream>

using namespace std;

int main()
{ /*In ACEST PROGRAM VOM AFISA DOUA VARIABILE CARE REPREZINTA NUMARUL DE CUTII PE CARE LE POATE CUMPARA O ANUMITA PERSOANE CARE ARE O SUMA DE BANI NOTATA CU VARIABILA S */
int b,s,c,p; /* b - pretul unei cutii de bomboane; s - suma lui gigel ; c -nr de cutii de bomboane pe care le poate cumpara,p- cati bani ii mai trebuie */
    cin >> b >> s;
    c= s/b; /* poate cumpara ca si numar de cuii- cati bani are el impartit la pretul unei cutii*/
    p= b-(s%b); /* cati bani ii mai trebuie - scadem din pretul unei cutii restul care i-a mai ramas dupa ce a cumparat c cutii */
    cout << c << " " << p; /*se afiseaza cate cutii poate cumpar (C) si cati bani ii mai trebuie pentru a cumpara alta cutie (p)*/
    return 0;
}
