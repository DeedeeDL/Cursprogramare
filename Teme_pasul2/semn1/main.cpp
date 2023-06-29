#include <iostream>

using namespace std;

int main()
/* s-a scris un program care va afisa daca doua numere intregi au acelasi semn (se va afisa mesajul "da" sau au semne diferite (se va afisa mesajul "nu" */
{int a,b;
cin >> a >> b;
if ((a>=0 && b>=0) || (a<0 && b<0)){
      cout << "da" ;}
   else{
          cout << "nu" ;;
    }
    return 0;
}
