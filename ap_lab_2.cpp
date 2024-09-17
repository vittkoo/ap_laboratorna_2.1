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

    double zmina_1; //зміна №1, коміт №2
    double zmina_2; //зміна №2, коміт №3

    double zmina_task_3; //зміна для 3 завд., коміт №5

    double Pi = 3.14159265358979;

    cout << "Enter a: ";
    cin >> a;

    z1 = pow((cos(((3.0 / 8.0) * Pi) - (a / 4.0))), 2) - pow((cos(((11.0 / 8.0) * Pi) + (a / 4.0))), 2);

    z2 = (pow(2.0, 0.5) / 2.0) * sin(a / 2.0);

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2;

    return 0;
}
