// task_4_3.cpp :
// Написать программу, которая считает сумму всех элементов массива.
//

#define NOMINMAX

#include <iostream>
#include <windows.h> // Для функции SetConsoleOutputCP
#include <random>

using namespace std;

const int MAX_INPUT_LENGTH = 10;

int main()
{
    //locale::global(locale(""));
    //system("chcp 1251"); // Для Windows-1251

    // Установка кодовой страницы для ввода и вывода русских букв
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // Инициализация генератора случайных чисел
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(-30, 150);

    while (true) {
        cout
            << "\n-----------------------------------------------------------------------------------"
            << "\nЗадание 4.3:"
            << "Написать программу, которая считает сумму всех элементов массива."
            << endl;

        int arr[MAX_INPUT_LENGTH]{};
        int totalSum = 0;

        for (int i = 0; i < MAX_INPUT_LENGTH; i++) {
            int random_number = distrib(gen);
            printf_s("\nСлучайное значение для массива[%d]: %d", i, random_number);
            arr[i] = random_number;
        }


        for (int i = 0; i < size(arr); i++)
        {
			totalSum += arr[i];
        }

        printf_s("\nСумма элементов масива: %d", totalSum);


        int exit = 0;
        cout << "\nВведите [НЕ]число для выхода из программы: ";
        if (!(cin >> exit)) {
            // Очистка потока ввода
            cin.clear(); // Сброс флага ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Удаление некорректного ввода
            break;
        }
    }

    return 0;
}