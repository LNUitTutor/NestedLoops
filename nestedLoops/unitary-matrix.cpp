#include "loops-procedures.h"

void UnitaryMatrix()
{
	cout << "\n *�������� �������� ������� �������� ������ (� ����������)*\n\n"
		<<"������ ����� �������: ";
	unsigned n; cin >> n;
	// �������� ���'�� ��� �������� �������
	int** a = CreateMatrix(n);
	// ���������� ������� ����������
	for (unsigned  i = 0; i < n; ++i)
		for (unsigned  j = 0; j < n; ++j)
			a[i][j] = (i == j) ? 1 : 0;
	// ��������� ����������
	PrintMatrix(a, n);
	EraseMatrix(a);
	return;
}

void SymmetricBuildMatrix()
{
	cout << "\n *�������� �������� ������� �������� ������ (�� ����������)*\n\n"
		<<"������ ����� �������: ";
	unsigned n; cin >> n;
	// �������� ���'�� ��� �������� �������
	int** a = CreateMatrix(n);
	// ���������� ������� ����������:
	//   ������� ��������
	for (unsigned  i = 0; i < n; ++i) a[i][i] = 1;
	//   ���������� ��� � �� ���������
	for (unsigned  i = 0; i < n - 1; ++i)
		for (unsigned  j = i + 1; j < n; ++j)
			a[i][j] = a[j][i] = 0;
	// ��������� ����������
	PrintMatrix(a, n);
	EraseMatrix(a);
	return;
}