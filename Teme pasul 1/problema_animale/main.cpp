#include <iostream>

using namespace std;

int main()

{
/*Intr-o curte sunt caini, pisici și gaini. Se stie ca numarul de pisici este egal cu dublul numarului de caini, iar numarul de gaini este egal cu dublul numarului de pisici. Daca in curte sunt C caini, cate animale sunt in curte?*/
 int c,p,g;
 cin >> c;
p = 2*c;
 g = 2*p;
    cout << c+p+g << endl;
    return 0;
}
