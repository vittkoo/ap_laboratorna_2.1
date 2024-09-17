// Lab_02.cpp 
// < Дмитрович Віктор > 
// Лабораторна робота № 2. 
// Лінійні програми. 
// Варіант 7 

#include <iostream>
#include <cmath>   //бібліотека для написання степенів формулою 'paw'
using namespace std;

int main() {
    double z1;
    double z2;
    double a;

    double Pi = 3.14159265358979;

    cout << "Enter a: ";
    cin >> a;

    z1 = pow((cos(((3.0 / 8.0) * Pi) - (a / 4.0))), 2) - pow((cos(((11.0 / 8.0) * Pi) + (a / 4.0))), 2);

    z2 = (pow(2.0, 0.5) / 2.0) * sin(a / 2.0);

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2;

    return 0;
}
