#include "loops-procedures.h"
#include <cmath>

void MoveMax()
{
	cout << "\n *Переміщення max-елемента переставлянням рядків і стовпців матриці*\n\n";
	// Для спрощення розміри матриці задамо в коді програми
	const unsigned n = 3;
	const unsigned m = 4;
	int a[n][m];
	// Введення заданої матриці
	cout << "Введіть елементи матриці " << n << 'x' << m << '\n';
	for (unsigned i = 0; i < n; ++i)
		for (unsigned j = 0; j < m; ++j) cin >> a[i][j];
	int max_value = abs(a[0][0]); // початкове значення максимального
	unsigned max_row = 0;		  // та його координати
	unsigned max_column = 0;
	// тепер - пошук в матриці
	for (unsigned i = 0; i < n; ++i)
	{
		for (unsigned j = 0; j < m; ++j)
			if (abs(a[i][j]) > max_value)  // знайшли більше
			{
				max_value = abs(a[i][j]); // і запам'ятали
				max_row = i;
				max_column = j;
			}
	}
	if (max_row != 0) // міняємо місцями рядки
		for (unsigned j = 0; j < m; ++j)
		{
			int to_swap = a[0][j];
			a[0][j] = a[max_row][j];
			a[max_row][j] = to_swap;
		}
	if (max_column != 0) // міняємо місцями стовпці
		for (unsigned i = 0; i < n; ++i)
		{
			int to_swap = a[i][0];
			a[i][0] = a[i][max_column];
			a[i][max_column] = to_swap;
		}
	// Друкуємо результати
	for (unsigned i = 0; i < n; ++i)
	{
		for (unsigned j = 0; j < m; ++j)
			cout << '\t' << a[i][j];
		cout << '\n';
	}
	return;
}