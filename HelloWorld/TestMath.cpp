#include "TestMath.h"
#include <stdio.h>

void PrintHelloWorld()
{
	printf("Hello World!\n");
	return;	// void에도 return을 사용하고 싶을때
}

int Sum(int Test1, int Test2)  // int Sum(int, int); 이 선언을 정의했다.
{
	if (Test1 == -1) {
		return 0;
	}
	return Test1 + Test2; // return 은 마지막에 무조건 하나는 있어야한다.
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
