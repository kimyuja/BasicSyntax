#pragma once
class CarSedan
{
private:
	int Dice1;
	int Dice2;
	int Dice3;
	int Max;

public:
	CarSedan(int Dice1, int Dice2, int Dice3);
	~CarSedan();
	bool CompareEqual(int Dice1, int Dice2);
	bool CompareSize(int Value1, int Value2);
	void PrintEqualThree();
	void PrintEqualTwo();
	void PrintDifferent();
	void Dicision();
	void PrintMax();
};

