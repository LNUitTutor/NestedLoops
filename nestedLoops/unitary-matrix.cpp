#include "loops-procedures.h"

void UnitaryMatrix()
{
	cout << "\n *Побудова одиничної матриці заданого розміру (з перевірками)*\n\n"
		<<"Введіть розмір матриці: ";
	unsigned n; cin >> n;
	// виділення пам'яті для динамічної матриці
	int** a = CreateMatrix(n);
	// заповнення матриці значеннями
	for (unsigned  i = 0; i < n; ++i)
		for (unsigned  j = 0; j < n; ++j)
			a[i][j] = (i == j) ? 1 : 0;
	// виведення результатів
	PrintMatrix(a, n);
	EraseMatrix(a);
	return;
}

void SymmetricBuildMatrix()
{
	cout << "\n *Побудова одиничної матриці заданого розміру (за структурою)*\n\n"
		<<"Введіть розмір матриці: ";
	unsigned n; cin >> n;
	// виділення пам'яті для динамічної матриці
	int** a = CreateMatrix(n);
	// заповнення матриці значеннями:
	//   головна діагональ
	for (unsigned  i = 0; i < n; ++i) a[i][i] = 1;
	//   трикутники над і під діагоналлю
	for (unsigned  i = 0; i < n - 1; ++i)
		for (unsigned  j = i + 1; j < n; ++j)
			a[i][j] = a[j][i] = 0;
	// виведення результатів
	PrintMatrix(a, n);
	EraseMatrix(a);
	return;
}