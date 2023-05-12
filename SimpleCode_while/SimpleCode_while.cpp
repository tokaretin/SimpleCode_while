#include <iostream>

using namespace std;

int main()
{
    int a = 0;

    while (a < 10) { // пока это действие - выражение правда true
        cout << "Massage " << a << '\n';
        a++; // икремент
    }
}
