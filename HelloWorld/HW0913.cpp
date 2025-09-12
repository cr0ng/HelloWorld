#include "HW0913.h"
#include <stdio.h>
#include <iostream>

void HW0913_1()
{
	int Year=0, Month=0, Day=0;
	printf("날짜를 입력하세요");
	std::cin >> Year >> Month >> Day;

	//윤년(366일)이었던 해
	for (int i = 1; i < Year; i++) {
		if ((Year % 4 == 0) && !(Year % 100 == 0) && (Year % 400 == 0)) {
			printf("%d ", Year);
		}
	}
	// month 배열로 만들기
	
}
