#include "loops-procedures.h"

void TriangleMatrix()
{
	cout << "\n *Побудова трикутної матриці заданого розміру*\n\n"
		<<"Введіть розмір матриці: ";
	unsigned n; cin >> n;
	// виділення пам'яті для динамічної матриці
	int** a = CreateMatrix(n);
	// заповнення матриці значеннями:
	unsigned n1 = n - 1;
	//   побічна діагональ
	for (unsigned i = 0; i < n; ++i) a[i][n1 - i] = n;
	//   верхній трикутник
	for (unsigned i = 0; i < n1; ++i)
		for (unsigned j = 0; j < n1 - i; ++j)
			a[i][j] = i + j + 1;
	//   нижній трикутник
	for (unsigned i = 1; i < n; ++i)
		for (unsigned j = n - i; j < n; ++j)
			a[i][j] = 0;
	// виведення результатів
	PrintMatrix(a, n);
	EraseMatrix(a);
	return;
}