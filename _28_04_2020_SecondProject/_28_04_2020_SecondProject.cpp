#include <iostream>
#include <math.h>

using namespace std;

void main()
{
    setlocale(LC_ALL, "rus"); // локализация

    double r1, r2, r3;
    cout << "Введите r1 ";
    cin >> r1;

    cout << "Введите r2 ";
    cin >> r2;

    cout << "Введите r3 ";
    cin >> r3;

    cout << "\n\n\n";

    double r0 = 1 / ((1/r1) + (1/r2) + (1/r3));

    cout << "r0 = " <<  r0 << endl;
}