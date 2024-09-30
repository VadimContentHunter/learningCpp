// task_4_1.cpp :
// Написать программу, которая находит максимальное и минимальное число в массиве.
//

#define NOMINMAX

#include <iostream>
#include <windows.h> // Для функции SetConsoleOutputCP
#include <conio.h> // Для getch() и kbhit()

using namespace std;

const int MAX_INPUT_LENGTH = 10;

int main()
{
    //locale::global(locale(""));
    //system("chcp 1251"); // Для Windows-1251

    // Установка кодовой страницы для ввода и вывода русских букв
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    //
// Обработка ввода
//

    cout << "(нажмите Enter для ввода, Esc для выхода из ввода элементов, backspace - удалить символ)" << endl;
    cout << "\nВведите данные: ";
    char bufferInput[MAX_INPUT_LENGTH]{};
    int bufferIndex = 0;
    while (true) {

        char bufferInputTemp[MAX_INPUT_LENGTH]{};
        char ch = _getch(); // Получение символа без ожидания Enter
        if (ch == 27)   // Esc
        {
            //cout << "\nВыход из программы." << endl;
            break;
        }
        else if (ch == 13)   // Enter
        {
            bufferInput[bufferIndex] = '\0'; // Завершение строки
            cout << "\nДанные сохранены: " << bufferInput << endl;

            bufferIndex = 0; // Сброс индекса для нового ввода
            cout << "\nВведите данные: ";
        }
        else if (ch == 8)   // Backspace
        {
            // Проверка, есть ли что удалять
            if (bufferIndex > 0) {
                bufferIndex--; // Уменьшение индекса
                bufferInput[bufferIndex] = '\0'; // Обнуление последнего символа
            }

            // Обновление вывода
            cout << "\rВведите данные: " << "                             "; // Обновляем вывод
            cout.flush();

            cout << "\rВведите данные: " << bufferInput; // Обновляем вывод
        }
        else
        {
            if (bufferIndex >= MAX_INPUT_LENGTH - 1) {
                //printf_s("\nЛимит строки ввода, достигнут: %d", bufferIndex);
            }
            else if (ch >= '0' && ch <= '9') {
                bufferInput[bufferIndex++] = ch;
                cout << ch;
            }
        }

    }

    return 0;
}