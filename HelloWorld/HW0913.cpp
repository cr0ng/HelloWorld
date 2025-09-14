#include "HW0913.h"
#include <stdio.h>
#include <iostream>

void HW0913_1()
{
	int Year=0, Month=0, Day=0;
	printf("��¥�� �Է��ϼ��� ");
	std::cin >> Year >> Month >> Day;
	
	// �� ���� ��¥���� �迭�� �����ϱ�
	int MonthPerDay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int AllDay = 0, YearDay=0 , MonthDay= 0;
	int CountLeapYear = 0;

	//����(366��)�̾��� ��
	for (int i = 1; i < Year; i++) {
		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0)) {
			CountLeapYear++;
		}
	}

	//�⵵ * 365
	YearDay = (Year - 1) * 365 + CountLeapYear;

	for (int j = 1; j < Month; j++) {
		if (((Year % 4 == 0) && (Year % 100 != 0) || (Year % 400 == 0))&& (j==2)) { // ������ 2���̸� +1
			MonthDay += 1;
		}
		MonthDay += MonthPerDay[j - 1];
	}

	AllDay = YearDay + MonthDay + Day;  //1�� 1�� 1��(������)�� �������� �Է��� ��¥���� ��ĥ�� �������� ���

	printf("�� %d��\n", AllDay);

	int Whatday = ((AllDay-1) % 7); // 1�Ϻ��� �����ϴϱ� 1 ����
	switch (Whatday) {
	case 0:
		printf("��");
		break;
	case 1:
		printf("ȭ");
		break;
	case 2:
		printf("��");
		break;
	case 3:
		printf("��");
		break;
	case 4:
		printf("��");
		break;
	case 5:
		printf("��");
		break;
	case 6:
		printf("��");
		break;
	default:
		break;
	}
}


void HW0913_2()
{
}
