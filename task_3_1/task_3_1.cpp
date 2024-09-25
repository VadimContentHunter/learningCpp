// task_3_1.cpp :
// Написать программу, которая выводит все числа от 1 до N (N вводится пользователем).
//

//#define NOMINMAX
#include <iostream>
#include <limits>
//#include <windows.h>
#include <conio.h> // Для getch() и kbhit()

using namespace std;

int main()
{
    locale::global(locale(""));

    int n = 0;
    while (true) {
        cout
            << "\n-----------------------------------------------------------------------------------"
            << "\nЗадание 3.1:"
            << "Написать программу, которая выводит все числа от 1 до N (N вводится пользователем)."
            << endl;

        cout << "Введите букву для выхода." << std::endl;
        cout << "Введите целое число N: ";
        if (cin >> n) {
            for (int i = 1; i < n; i++)
            {
                printf("Результат: %d\n", i);
            }
        }
        else {
            // Очистка потока ввода
            cin.clear(); // Сброс флага ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Удаление некорректного ввода
            break;
        }
    }
}