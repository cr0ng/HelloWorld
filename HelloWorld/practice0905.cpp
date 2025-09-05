#include "practice0905.h"
#include <stdio.h>
#include <iostream>

int Practice0905_01(int Min, int Max) {
	
	srand(time(0));
	int Result = rand() % Max + Min;

	printf("%d ~ %d 범위 안의 랜덤한 숫자 : %d 나왔다", Min, Max, Result);
	return 0;

}

int Practice0905_02(int Age)
{
	printf("당신은 %d살 입니다. \n", Age);
	return 0;
}

float Practice0905_03(float Radius)
{
	const float PI = 3.141592;
	float Area = Radius * Radius * PI;
	printf("반지름이 %.2f 인 원의 넓이는 %.2f 입니다. \n", Radius, Area);

	return 0.0f;
}

bool OddOrNot(int Number)
{
	if (Number % 2 == 0) {
		printf("짝수");
		return false;
	}
	else {
		printf("홀수");
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
		printf("A학점\n");
	}
	else if (Score >=B ) {
		printf("B학점\n");
	}
	else if (Score >= C) {
		printf("C학점\n");
	}
	else if (Score >= D) {
		printf("D학점\n");
	}
	else{
		printf("F학점\n");
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
			printf(" "); // 앞에 빈칸 채우기
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

