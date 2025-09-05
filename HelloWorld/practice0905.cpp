#include "practice0905.h"
#include <stdio.h>
#include <iostream>

int Practice0905_01(int Min, int Max) {
	
	srand(time(0));
	int Result = rand() % Max + Min;

	printf("%d ~ %d ���� ���� ������ ���� : %d ���Դ�", Min, Max, Result);
	return 0;

}

int Practice0905_02(int Age)
{
	printf("����� %d�� �Դϴ�. \n", Age);
	return 0;
}

float Practice0905_03(float Radius)
{
	const float PI = 3.141592;
	float Area = Radius * Radius * PI;
	printf("�������� %.2f �� ���� ���̴� %.2f �Դϴ�. \n", Radius, Area);

	return 0.0f;
}

bool OddOrNot(int Number)
{
	if (Number % 2 == 0) {
		printf("¦��");
		return false;
	}
	else {
		printf("Ȧ��");
		return true;
	}
}

int ScoreRanking(int Score)
{
	enum GRADE {
		A = 90,
		B = 80,
		C = 70,
		D = 60,
		F = 50
	};

	if (Score >= A) {
		printf("A����\n");
	}
	else if (Score >=B ) {
		printf("B����\n");
	}
	else if (Score >= C) {
		printf("C����\n");
	}
	else if (Score >= D) {
		printf("D����\n");
	}
	else{
		printf("F����\n");
	}

	return 0;
}

int GetItem(int Inventory, int Item)
{
	Inventory |= (1 << Item);
	return Inventory;
}

int LoseItem(int Inventory, int Item)
{
	Inventory &= (~(1 << Item));
	return Inventory;
}
int Toggle2Item(int Inventory, int Item)
{
	Inventory ^= (1 << Item);
	return Inventory;
}

int DrawPyramid(int Floor)
{
	for (int i = 0; i < Floor; i++) {
		for (int j = (Floor - (i + 1)); j > 0; j--) {
			printf(" "); // �տ� ��ĭ ä���
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


int FactorialNumber(int Number)
{
	if (Number < 2)
	{
		return 1;
	}

	return Number * FactorialNumber(Number - 1);
}

