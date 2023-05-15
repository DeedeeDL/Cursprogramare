#include <iostream>

using namespace std;

int main()
{
/* Acest program va afisa pe ecran o valoare care reprezinta tona de marfa transportata de anumite camioane (reprezentate de variabilele t1,t2,n,m) intr-un anumit interval de timp (reprezentat de variabila z)*/
int t1, t2, n, m,z;
    cin >> t1 >> t2 >> n >> m >> z;
    cout << (n*t1+m*t2)*z << endl;
    return 0;
}
