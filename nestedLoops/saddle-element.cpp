#include "loops-procedures.h"

void SaddleElement()
{
	cout << "\n *³�������� �������� �������� �������*\n\n";
	// ��� ��������� ������ ������� ������ � ��� ��������
	const unsigned n = 3;
	const unsigned m = 4;
	int a[n][m];
	// �������� ������ �������
	cout << "������ �������� ������� " << n << 'x' << m << '\n';
	for (unsigned i = 0; i < n; ++i)
		for (unsigned j = 0; j < m; ++j) cin >> a[i][j];
	// ���������� ��������� �������� �������� � ������������ �������
	// ������� ����� ������� - �������� ����!
	int saddle = a[0][0]; // ��������� �������� �������������
	unsigned row = 0;		  // �� ���� ����������
	unsigned column = 0;
	// ����� - ����� � �����
	for (unsigned j = 1; j < m; ++j)
		if (a[row][j] > saddle)  // ������� �����
		{
			saddle = a[row][j]; // � �����'�����
			column = j;
		}
	// ����� ����������� �� ���� ����� �������
	for (unsigned i = 1; i < n; ++i)
	{
		// � �������� ��� ���������� ��������
		int curr_max = a[i][0];
		unsigned pos = 0;
		for (unsigned j = 1; j < m; ++j)
			if (a[i][j] > curr_max)
			{
				curr_max = a[i][j];
				pos = j;
			}
		// �� ��������� �� � �������� ��������� �������� ��������
		if (curr_max < saddle)
		{
			saddle = curr_max;
			row = i;
			column = pos;
		}
	}
	cout << "ѳ������ � ������� a["
		<< row << "][" << column << "] = " << saddle << '\n';
	return;
}