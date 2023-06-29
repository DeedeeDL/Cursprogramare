#include <iostream>

using namespace std;
/*Sa se scrie un program care citeste de la tastatura un numar intreg si determina semnul sau.*/
int main()
{ int n;
cin >> n;
if (n>0){
    cout << "pozitiv" << endl;}
  else  if (n==0){
    cout << "nul" << endl;}
    if (n<0){
    cout << "negativ" << endl;}
    return 0;
}
