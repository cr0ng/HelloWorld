#include "TestMath.h"
#include <stdio.h>

void PrintHelloWorld()
{
	printf("Hello World!\n");
	return;	// void���� return�� ����ϰ� ������
}

int Sum(int Test1, int Test2)  // int Sum(int, int); �� ������ �����ߴ�.
{
	if (Test1 == -1) {
		return 0;
	}
	return Test1 + Test2; // return �� �������� ������ �ϳ��� �־���Ѵ�.
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
