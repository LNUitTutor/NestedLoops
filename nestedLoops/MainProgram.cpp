#include <Windows.h>
#include "loops-procedures.h"

int main()
{
	// Вкладені цикли в матричних задачах

	SetConsoleOutputCP(1251); // налаштуємо виведення кирилицею
	int answer;
	do
	{
		system("cls");
		cout << "Виберіть програму для запуску:\n\n 1 - Побудова одиничної матриці заданого розміру\n"
			<< " 2 - Побудова трикутної матриці заданого розміру\n 3 - Таблиця, заповнена змійкою\n"
			<< " 4 - Матриця з сум елементів іншої матриці\n 5 - Переміщення max-елемента переставлянням рядків і стовпців\n"
			<< " 6 - Відшукання сідлового елементаматриці\n 7 - Завершення роботи\n >>>> ";
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
		default: cout << "До побачення!\n";
		}
		system("pause");
	}
	while (answer > 0 && answer < 7);
	return 0;
}