// Lab_04_1.cpp
// < Половінко Софія >
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(12) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = 2 * fabs(x - 5);

        if (x < -1)
        {
            B = (sin(x) * sin(x)) / (1 + fabs(cos(x)));
        }
        else if (x > 1)
        {
            B = log(fabs(x + 2));
        }
        else
        {
            double temp = cos(1.0 / fabs(x + 2));
            B = temp * temp;
        }

        y = A - B;

        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(12) << setprecision(4) << y
             << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}