#include "loops-procedures.h"

void MatrixFromSequence()
{
	cout << "\n *Заповнення матриці \"змійкою\" заданими значеннями*\n\n"
		<<"Введіть розмір матриці: ";
	unsigned n; cin >> n;
	// виділення пам'яті для динамічної матриці
	int** a = CreateMatrix(n);
	// послідовність значень сконструюємо
	int* x = new int[n * n];
	for (unsigned i = 0; i < n * n; ++i) x[i] = i + 1;
	// заповнення матриці значеннями:
	for (unsigned j = 0; j < n; ++j)
	{
		if (j % 2 == 0) // непарний стовпець
		{
			unsigned k = j * n;
			for (unsigned i = 0; i < n; ++i)
				a[i][j] = x[k + i];
		}
		else // парний стовпець
		{
			unsigned k = (j + 1) * n - 1;
			for (unsigned i = 0; i < n; ++i)
				a[i][j] = x[k - i];
		}
	}
	// виведення результатів
	PrintMatrix(a, n);
	EraseMatrix(a);
	delete[] x;
	return;
}

void SequenceToMatrix()
{
	cout << "\n *Вкладення \"змійкою\" послідовності в матрицю*\n\n"
		<<"Введіть розмір матриці: ";
	unsigned n; cin >> n;
	// виділення пам'яті для динамічної матриці
	int** a = CreateMatrix(n);
	// послідовність значень сконструюємо
	int* x = new int[n * n];
	for (unsigned i = 0; i < n * n; ++i) x[i] = i + 1;
	// заповнення матриці значеннями:
	int i = 0; int j = 0;   // координати початкового елемента
	int step = 1;           // спочатку напрям руху стовпцем униз
	for (unsigned k = 0; k < n * n; ++k)
	{					    // вкладаємо всі члени послідовності
		a[i][j] = x[k];     // розташували чергове число
		if ((k + 1) % n == 0)      // стовпець заповнено
		{
			++j;            // перейшли до нового стовпця
			step = -step;   // і змінили напрям
		}
		else i += step;     // просуваємося стовпцем
	}
	// виведення результатів
	PrintMatrix(a, n);
	EraseMatrix(a);
	delete[] x;
	return;
}