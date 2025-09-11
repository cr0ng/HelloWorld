#include < stdio.h>
#include < iostream>
#include "baekjoon.h"

void baekjoon1()
{
	int N = 0, M = 0;
	int Count = 1;
	printf("두 수를 입력하세요 (1 ≤ M ≤ N ≤ 8) ");
	int Array[8] = {0};
	std::cin >> N >> M;

	for (int i = 0; i < N; i++) {
		printf("%d ", i);
		Array[i] = i + 1;


		
		printf("\n");
	}
}
