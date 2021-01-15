#include <iostream>
#include <iomanip>
#include <time.h>
#include "windows.h"

using namespace std;

template <typename T>
void Create(T* A, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Введіть " << i + 1 << " елемент масиву: ";
		cin >> A[i];
	}
}

template <typename T>
void Print(T* A, int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(8) << A[i];
	cout << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	cout << "Розмір масиву: "; cin >> size;

	int* A = new int[size];

	Create(A, size);
	Print(A, size);
	Print(A, size);

	cout << endl;
	return 0;
}