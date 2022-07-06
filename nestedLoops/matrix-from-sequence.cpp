#include "loops-procedures.h"

void MatrixFromSequence()
{
	cout << "\n *���������� ������� \"������\" �������� ����������*\n\n"
		<<"������ ����� �������: ";
	unsigned n; cin >> n;
	// �������� ���'�� ��� �������� �������
	int** a = CreateMatrix(n);
	// ����������� ������� ������������
	int* x = new int[n * n];
	for (unsigned i = 0; i < n * n; ++i) x[i] = i + 1;
	// ���������� ������� ����������:
	for (unsigned j = 0; j < n; ++j)
	{
		if (j % 2 == 0) // �������� ��������
		{
			unsigned k = j * n;
			for (unsigned i = 0; i < n; ++i)
				a[i][j] = x[k + i];
		}
		else // ������ ��������
		{
			unsigned k = (j + 1) * n - 1;
			for (unsigned i = 0; i < n; ++i)
				a[i][j] = x[k - i];
		}
	}
	// ��������� ����������
	PrintMatrix(a, n);
	EraseMatrix(a);
	delete[] x;
	return;
}

void SequenceToMatrix()
{
	cout << "\n *��������� \"������\" ����������� � �������*\n\n"
		<<"������ ����� �������: ";
	unsigned n; cin >> n;
	// �������� ���'�� ��� �������� �������
	int** a = CreateMatrix(n);
	// ����������� ������� ������������
	int* x = new int[n * n];
	for (unsigned i = 0; i < n * n; ++i) x[i] = i + 1;
	// ���������� ������� ����������:
	int i = 0; int j = 0;   // ���������� ����������� ��������
	int step = 1;           // �������� ������ ���� �������� ����
	for (unsigned k = 0; k < n * n; ++k)
	{					    // �������� �� ����� �����������
		a[i][j] = x[k];     // ����������� ������� �����
		if ((k + 1) % n == 0)      // �������� ���������
		{
			++j;            // �������� �� ������ �������
			step = -step;   // � ������ ������
		}
		else i += step;     // ����������� ��������
	}
	// ��������� ����������
	PrintMatrix(a, n);
	EraseMatrix(a);
	delete[] x;
	return;
}