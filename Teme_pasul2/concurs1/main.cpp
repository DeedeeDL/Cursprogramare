#include <iostream>

using namespace std;

int main()
{ /*La un concurs pot participa copii cu vârste între a și b ani, inclusiv. Gigel are n ani. Stabiliți dacă poate participa la concurs.*/
    int a,b,varstaGigel;
    cin >> a >> b >> varstaGigel ;
    if (a <= varstaGigel&& varstaGigel<= b){
        cout << "Gigel poate participa la concurs";
    }
    else {
        cout << "Gigel nu poate participa la concurs";
    }


    return 0;
}
