#include "CarSedan.h"

CarSedan::CarSedan(int Dice1, int Dice2, int Dice3)
{
	this->Dice1 = Dice1; // this는 동적으로 생성됨+포인터.
	this->Dice2 = Dice2;
	this->Dice3 = Dice3;
	this->Max = 0;
}

CarSedan::~CarSedan()
{
}

bool CarSedan::CompareEqual(int Dice1, int Dice2)
{
	return false;
}

bool CarSedan::CompareSize(int Value1, int Value2)
{
	return false;
}

void CarSedan::PrintEqualThree()
{
}

void CarSedan::PrintEqualTwo()
{
}

void CarSedan::PrintDifferent()
{
}

void CarSedan::Dicision()
{
}

void CarSedan::PrintMax()
{
}
