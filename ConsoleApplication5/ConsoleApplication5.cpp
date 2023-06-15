// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

void findCommonElements(int* array1, int size1, int* array2, int size2, int* resultArray, int& resultSize) {
    resultSize = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (*(array1 + i) == *(array2 + j)) { 
                *(resultArray + resultSize) = *(array1 + i); 
                resultSize++; 
                break; 
            }
        }
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int n = 5;
    const int m = 7;

    int A[n] = { 1, 2, 3, 4, 5 };
    int B[m] = { 4, 5, 6, 7, 8, 9, 10 };
    int C[n + m]; 
    int resultSize;

    findCommonElements(A, n, B, m, C, resultSize);

    cout << "Спільні елементи: ";
    for (int i = 0; i < resultSize; i++) {
        cout << *(C + i) << " ";
    }
    cout << endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
