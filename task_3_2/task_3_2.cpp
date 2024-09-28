// task_3_2.cpp :
// Написать программу, которая находит сумму всех чисел от 1 до N.
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
            << "\nЗадание 3.2:"
            << "Написать программу, которая находит сумму всех чисел от 1 до N."
            << endl;

        cout << "Введите букву для выхода." << std::endl;
        cout << "Введите целое число N: ";
        if (cin >> n) {
            for (int i = 1; i < n || (n == 1 && i == 1); i++)
            {
                printf("итерация: %d + %d\n", result, i);
                result += i;
            }

            printf("Результат: %d\n", result);
        } else {
            // Очистка потока ввода
            cin.clear(); // Сброс флага ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Удаление некорректного ввода
            break;
        }
    }
}