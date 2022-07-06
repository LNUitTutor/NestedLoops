#ifndef _LOOPS_PROCEDURES_GUARD_
#define _LOOPS_PROCEDURES_GUARD_

#include <iostream>
using std::cout;
using std::cin;

void UnitaryMatrix();
void SymmetricBuildMatrix();
void TriangleMatrix();
void MatrixFromSequence();
void SequenceToMatrix();
void RegionsSumming();
void EconomicSumming();
void MoveMax();
void SaddleElement();

int** CreateMatrix(unsigned n);
void PrintMatrix(int** a, unsigned n);
void EraseMatrix(int**& a);

#endif