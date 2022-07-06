#include <Windows.h>
#include "loops-procedures.h"

int main()
{
	// ������� ����� � ��������� �������

	SetConsoleOutputCP(1251); // ��������� ��������� ���������
	int answer;
	do
	{
		system("cls");
		cout << "������� �������� ��� �������:\n\n 1 - �������� �������� ������� �������� ������\n"
			<< " 2 - �������� �������� ������� �������� ������\n 3 - �������, ��������� ������\n"
			<< " 4 - ������� � ��� �������� ���� �������\n 5 - ���������� max-�������� �������������� ����� � ��������\n"
			<< " 6 - ³�������� �������� ���������������\n 7 - ���������� ������\n >>>> ";
		cin >> answer;
		system("cls");
		switch (answer)
		{
		case 1: UnitaryMatrix(); SymmetricBuildMatrix(); break;
		case 2: TriangleMatrix(); break;
		case 3: MatrixFromSequence(); SequenceToMatrix(); break;
		case 4: RegionsSumming(); EconomicSumming(); break;
		case 5: MoveMax(); break;
		case 6: SaddleElement(); break;
		default: cout << "�� ���������!\n";
		}
		system("pause");
	}
	while (answer > 0 && answer < 7);
	return 0;
}