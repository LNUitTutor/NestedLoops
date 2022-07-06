#include "loops-procedures.h"
#include <iomanip>

// �������� ���'�� ��� �������� �������
int** CreateMatrix(unsigned n)
{
	int** a = new int* [n];     // ���'��� ��� ��������� �����
	a[0] = new int[n * n];      // ���'��� ��� �������� �������
	for (unsigned i = 1; i < n; ++i) // ������������ ��������� �� �����:
		a[i] = a[i - 1] + n;    // ������ ���������� == ������������ + �������
	return a;
}

// ��������� ������� �� �������
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

// ��������� ���'�� �� �������
void EraseMatrix(int**& a)
{
	delete[] a[0];
	delete[] a;
	a = nullptr;
}