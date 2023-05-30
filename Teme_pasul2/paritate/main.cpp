#include <iostream>

using namespace std;

int main()
{
/* Acest program va afisa daca numarul n este par sau impar */
    int n;
    cin >> n;
    if (n%2 == 0){
        cout << n << " este par";
    } else {
    cout << n << " este impar";
    }
    return 0;
}
