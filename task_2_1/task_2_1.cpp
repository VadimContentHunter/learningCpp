// task_2_1.cpp :
// Написать программу, которая проверяет, является ли введённое число чётным или нечётным.
//

#include <iostream>
#include <windows.h>
#include <cstdio>

using namespace std;

int main()
{
    locale::global(locale(""));

    cout
        << "\nЗадание 2.1:"
        << "Написать программу, которая проверяет, является ли введённое число чётным или нечётным." 
        << endl;

    int result = -1;
    cout << "\nВведите число:";
    cin >> result;

    if (result % 2 == 0) {
        cout << "Результат: число Четное" << endl;
    } else {
        cout << "Результат: число [НЕ]четное" << endl;
    }
}
