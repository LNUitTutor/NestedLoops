#include "loops-procedures.h"
#include <iomanip>

// виділення пам'яті для динамічної матриці
int** CreateMatrix(unsigned n)
{
	int** a = new int* [n];     // пам'ять для вказівників рядків
	a[0] = new int[n * n];      // пам'ять для елементів матриці
	for (unsigned i = 1; i < n; ++i) // налаштування вказівників на рядки:
		a[i] = a[i - 1] + n;    // адреса наступного == попереднього + довжина
	return a;
}

// виведення матриці на консоль
void PrintMatrix(int** a, unsigned n)
{
	for (unsigned i = 0; i < n; ++i)
	{
		for (unsigned j = 0; j < n; ++j)
			cout << std::setw(4) << a[i][j];
		cout << '\n';
	}
	return;
}

// звільнення пам'яті від матриці
void EraseMatrix(int**& a)
{
	delete[] a[0];
	delete[] a;
	a = nullptr;
}