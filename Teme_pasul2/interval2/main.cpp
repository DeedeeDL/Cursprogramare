#include <iostream>

using namespace std;

int main()
{/*Se dau trei numere naturale a b x. Să se verifice dacă numărul x aparține intervalului [a,b].
    Programul afișează pe ecran mesajul DA, dacă numărul x aparține intervalului [a,b], respectiv NU în caz contrar.*/
    int a,b,x;
    cin >> a >> b >> x;
    if ( a <= x && x <=b){
        cout << "DA";

    }
    else { cout << "NU";}

    return 0;
}
