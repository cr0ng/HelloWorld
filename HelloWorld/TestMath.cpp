#include "TestMath.h"
#include <stdio.h>

void PrintHelloWorld()
{
	printf("Hello World!\n");
	return;	// void���� return�� ����ϰ� ������
}

int Sum(int Test1, int Test2)  // int Sum(int, int); �� ������ �����ߴ�.
{	
	int Result = Test1 + Test2;
	return Result; // return �� �������� ������ �ϳ��� �־���Ѵ�.
}

float Sum(float Test1, float Test2)
{
	return Test1 + Test2;
}

int Multiply(int Number1, int Number2)
{
	return Number1 * Number2;
}

int Divide(int Test1, int Test2)
{
	return Test1 / Test2;
}

int Minuse(int Test1, int Test2)
{
	return Test1 - Test2;
}

int TestRecurcive(int Number)
{
	if (Number < 2)
	{
		return 1;
	}
	printf("Recurcive : %d\n", Number);
	return TestRecurcive(Number -1);
}
