#include "pch.h"
#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdarg.h>
using namespace std;
void Print(int** a, const int rowCount, const int colCount);
//a = 0x07 b = 0x08

void setItems(int** a, int rowCount, int colCount, ...) {

    int argumentNumber = rowCount * colCount;
    va_list arguments;
    va_start(arguments, argumentNumber);
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            a[i][j] = rand();
        }
    }
    va_end(arguments);
}
int main()
{
    srand((unsigned)time(NULL));

    int rowCount;
    cout << "rowCount = "; cin >> rowCount;
    int colCount = 7;
    int** a = new int* [rowCount];
    for (int i = 0; i < rowCount; i++)
        a[i] = new int[colCount];

    setItems(a, rowCount, colCount);
    Print(a, rowCount, colCount);
    for (int i = 0; i < rowCount; i++)
        delete[] a[i];
    delete[] a;
    return 0;
}
void Print(int** a, const int rowCount, const int colCount)
{
    cout << endl;
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    cout << endl;
}