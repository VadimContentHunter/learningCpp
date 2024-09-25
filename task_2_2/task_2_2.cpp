// task_2_2.cpp :
// Написать программу, которая определяет, является ли год, введённый пользователем, високосным.
//

#include <iostream>
#include <windows.h>
#include <cstdio>

using namespace std;

int main()
{
    locale::global(locale(""));

    cout
        << "\nЗадание 2.2:"
        << "Написать программу, которая определяет, является ли год, введённый пользователем, високосным."
        << endl;

    int year = 0;
    cout << "\nВведите год:";
    cin >> year;

    if (year % 100 == 0 && year % 400 == 0) {
        cout << "Результат: год Высокосный." << endl;
    }
    else if (year % 100 == 0 && year % 400 != 0) {
        cout << "Результат: год [НЕ]Высокосный." << endl;
    }
    else if (year % 4 == 0) {
        cout << "Результат: год Высокосный." << endl;
    }
    else {
        cout << "Результат: год [НЕ]Высокосный" << endl;
    }
}