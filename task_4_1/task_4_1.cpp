// task_4_1.cpp :
// Написать программу, которая находит максимальное и минимальное число в массиве.
//

#define NOMINMAX

#include <iostream>
#include <windows.h> // Для функции SetConsoleOutputCP

using namespace std;

const int MAX_INPUT_LENGTH = 10;

int main()
{
    //locale::global(locale(""));
    //system("chcp 1251"); // Для Windows-1251

    // Установка кодовой страницы для ввода и вывода русских букв
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    while (true) {
        cout
            << "\n-----------------------------------------------------------------------------------"
            << "\nЗадание 4.1:"
            << "Написать программу, которая находит максимальное и минимальное число в массиве."
            << endl;
        cout << "Введите НЕчисло для выхода." << std::endl;

        int arr[MAX_INPUT_LENGTH] {};
        int maxNum = 0;
		int minNum = 0;

		for (int i = 0; i < MAX_INPUT_LENGTH; i++) {
            printf_s("Введите числовое значение элемента в массиве[%d]: ", i);

            if (!(cin >> arr[i])) {
                // Очистка потока ввода
                cin.clear(); // Сброс флага ошибки
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Удаление некорректного ввода
                return 0;
            }
        }

        cout << "\nМассив: ";
        for (int n : arr) {
			printf_s("%d ", n);
        }

        for (int i = 0; i < size(arr); i++)
        {
            if (i == 0) {
				maxNum = minNum = arr[i];
				continue;
            }

			if (arr[i] > maxNum) {
				maxNum = arr[i];
			}
			if (arr[i] < minNum) {
				minNum = arr[i];
			}
		}

        printf_s("\n\n Максимальное числов в массиве: %d", maxNum);
        printf_s("\n Минимальное числов в массиве: %d", minNum);
    }

    return 0;
}