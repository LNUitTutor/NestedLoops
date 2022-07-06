#include "loops-procedures.h"

void TriangleMatrix()
{
	cout << "\n *�������� �������� ������� �������� ������*\n\n"
		<<"������ ����� �������: ";
	unsigned n; cin >> n;
	// �������� ���'�� ��� �������� �������
	int** a = CreateMatrix(n);
	// ���������� ������� ����������:
	unsigned n1 = n - 1;
	//   ������ ��������
	for (unsigned i = 0; i < n; ++i) a[i][n1 - i] = n;
	//   ������ ���������
	for (unsigned i = 0; i < n1; ++i)
		for (unsigned j = 0; j < n1 - i; ++j)
			a[i][j] = i + j + 1;
	//   ����� ���������
	for (unsigned i = 1; i < n; ++i)
		for (unsigned j = n - i; j < n; ++j)
			a[i][j] = 0;
	// ��������� ����������
	PrintMatrix(a, n);
	EraseMatrix(a);
	return;
}