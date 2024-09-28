// task_3_3.cpp :
// Написать программу, которая выводит таблицу умножения на число, введённое пользователем.
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

    while (true) {
        int n = 0;
        int result = 0;

        cout
            << "\n-----------------------------------------------------------------------------------"
            << "\nЗадание 3.3:"
            << "Написать программу, которая выводит таблицу умножения на число, введённое пользователем."
            << endl;

        cout << "Введите букву для выхода." << std::endl;
        cout << "Введите целое число N: ";
        if (cin >> n) {
            for (int i = 0; i <= 9; i++)
            {
                printf("%d * %d = %d\n", n, i, n * i);
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