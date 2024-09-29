// task_3_4.cpp :
// Написать программу, которая выводит все простые числа от 1 до 100.
//

#include <iostream>

using namespace std;

int main()
{
    locale::global(locale(""));

    cout
        << "\n-----------------------------------------------------------------------------------"
        << "\nЗадание 3.4:"
        << "Написать программу, которая выводит все простые числа от 1 до 100."
        << endl;

    int maxNum = 100;

    for (int i = 2; i <= maxNum; i++)
    {
        int isPrimeNum = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) {
                isPrimeNum = false;
                break;
            }
        }
        if (isPrimeNum) {
            printf("%d - являеться простым числом\n", i);
        }
    }

    return 0;
}