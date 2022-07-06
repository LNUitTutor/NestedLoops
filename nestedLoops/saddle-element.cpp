#include "loops-procedures.h"

void SaddleElement()
{
	cout << "\n *Відшукання сідлового елемента матриці*\n\n";
	// Для спрощення розміри матриці задамо в коді програми
	const unsigned n = 3;
	const unsigned m = 4;
	int a[n][m];
	// Введення заданої матриці
	cout << "Введіть елементи матриці " << n << 'x' << m << '\n';
	for (unsigned i = 0; i < n; ++i)
		for (unsigned j = 0; j < m; ++j) cin >> a[i][j];
	// початковим значенням сідлового елемента є максимальний елемент
	// першого рядка матриці - знайдемо його!
	int saddle = a[0][0]; // початкове значення максимального
	unsigned row = 0;		  // та його координати
	unsigned column = 0;
	// тепер - пошук в рядку
	for (unsigned j = 1; j < m; ++j)
		if (a[row][j] > saddle)  // знайшли більше
		{
			saddle = a[row][j]; // і запам'ятали
			column = j;
		}
	// тепер переглянемо всі інші рядки матриці
	for (unsigned i = 1; i < n; ++i)
	{
		// і знайдемо їхні максимальні елементи
		int curr_max = a[i][0];
		unsigned pos = 0;
		for (unsigned j = 1; j < m; ++j)
			if (a[i][j] > curr_max)
			{
				curr_max = a[i][j];
				pos = j;
			}
		// та порівняємо їх з поточним значенням сідлового елемента
		if (curr_max < saddle)
		{
			saddle = curr_max;
			row = i;
			column = pos;
		}
	}
	cout << "Сідловим є елемент a["
		<< row << "][" << column << "] = " << saddle << '\n';
	return;
}