#include "HW0913.h"
#include <stdio.h>
#include <iostream>

void HW0913_1()
{
	int Year=0, Month=0, Day=0;
	printf("날짜를 입력하세요 ");
	std::cin >> Year >> Month >> Day;
	
	// 각 월당 날짜수를 배열로 저장하기
	int MonthPerDay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int AllDay = 0, YearDay=0 , MonthDay= 0;
	int CountLeapYear = 0;

	//윤년(366일)이었던 해
	for (int i = 1; i < Year; i++) {
		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0)) {
			CountLeapYear++;
		}
	}

	//년도 * 365
	YearDay = (Year - 1) * 365 + CountLeapYear;

	for (int j = 1; j < Month; j++) {
		if (((Year % 4 == 0) && (Year % 100 != 0) || (Year % 400 == 0))&& (j==2)) { // 윤년인 2월이면 +1
			MonthDay += 1;
		}
		MonthDay += MonthPerDay[j - 1];
	}

	AllDay = YearDay + MonthDay + Day;  //1년 1월 1일(월요일)을 기준으로 입력한 날짜까지 며칠이 지났는지 계산

	printf("총 %d일\n", AllDay);

	int Whatday = ((AllDay-1) % 7); // 1일부터 시작하니까 1 빼기
	switch (Whatday) {
	case 0:
		printf("월");
		break;
	case 1:
		printf("화");
		break;
	case 2:
		printf("수");
		break;
	case 3:
		printf("목");
		break;
	case 4:
		printf("금");
		break;
	case 5:
		printf("토");
		break;
	case 6:
		printf("일");
		break;
	default:
		break;
	}
}


void HW0913_2()
{
}
