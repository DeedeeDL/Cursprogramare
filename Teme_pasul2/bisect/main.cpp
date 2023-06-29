#include <iostream>

using namespace std;
/*se scrie un program care verifica daca un an calendaristic precizat este bisect. Un an este bisect daca se divide cu 4 si nu se divide cu 100 sau se divide cu 400.*/
int main()
{int n;/* variabila n reprezinta anul */
cin >> n;
if ((n%4==0 && n%100!=0)||(n%400==0)){
    cout << "bisect" << endl;}
    else {
            cout << "nebisect";
    }
    return 0;
}
