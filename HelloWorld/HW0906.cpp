#include <stdio.h>
#include <iostream>
#include "HW0906.h"

float Avg3Number(int Number1, int Number2, int Number3)
{
	return (Number1 + Number2 + Number3)/3.0f;
}

int  SalePrice(int Price, int Sale)
{
	return Price - Price * Sale/100 ;
}

int ThrowDice()
{
	srand(time(0));
	int Dice = rand() % 6 + 1;
	return Dice;
}

int ScoreGrade(int Score)
{
	enum Grade {
		A = 90,
		B = 80,
		C = 70,
		D = 60,
	};
	if (Score >= A) 
	{
		printf("A학점");
	}
	else if (Score >= B)
	{
		printf("B학점");
	}
	else if (Score >= C)
	{
		printf("C학점");
	}
	else if (Score >= D)
	{
		printf("D학점");
	}
	else
	{
		printf("F학점");
	}
	return 0;
}

int SumEachDigit(int InputNumber)
{
	int Sum = 0;
	printf("SumEachDigit 함수 실행\n");
	while (InputNumber > 10) {
		Sum += InputNumber % 10; // 1의 자리에 있는 숫자 더하기
		InputNumber /= 10; // 10으로 나눈 값 InputNumber에 저장하기
	}
	return Sum;
}

int RecurciveDecimalToBinary(int Decimal)
{
	// 아 이건 재귀함수가 아니자나..
	//int Binary = 0;
	//int digit = 1;

	//while (Decimal > 0) {
	//	Binary += (Decimal % 2) * digit; //1bit 위치부터 채우면서 다 더하기
	//	digit *= 10; //비트 위치 왼쪽으로 한칸옆에 저장되도록
	//	Decimal /= 2;
	//}
	//return Binary;
	
	if (Decimal <= 1) {
		printf("1");
		return 1;
		
	}
		RecurciveDecimalToBinary(Decimal / 2);
		printf("%d", Decimal % 2);

		return 0;
}

int SlotGame(int Funds, int BattingMoney)
{
	srand(time(0));
	int SlotNumber = rand() % 900 + 100;
	
	if ((SlotNumber % 111) == 0)
	{
		printf("★☆★ %d 가 나왔습니다.★☆★\n", SlotNumber);
		if ((SlotNumber % 7) == 0) {
			BattingMoney *= 200;
		}
		BattingMoney *= 50;
		Funds += BattingMoney;
	}
	else {
		printf("%d 가 나왔습니다.\n", SlotNumber);
		Funds -= BattingMoney;

	}
	
	return Funds;
}

int TurnBattle()
{
	int Damage = rand() % 11 + 5;
	int Critical = rand() % 100;

	if (Critical >= 0 && Critical < 10) {
		printf("★크리티컬!★ \n");
		Damage *= 2;
	}
	printf("데미지 : %d \n", Damage);
	
	return Damage;
}

int PickCard()
{
	return rand() % 13 + 1;
}

int MixCard()
{
	return rand() % 3 + 1;
}

int PickJocker(int SelectCard, int JokerLocation, int BattingMoney, int Funds)
{
	char Answer = 0 ;
	Funds -= BattingMoney;
	if (SelectCard == JokerLocation) {
		Funds += BattingMoney * 2;
		printf("배팅에 성공하였습니다.\n");
	}
	else {
		printf("배팅에 실패하였습니다.\n");
		printf("배팅 금액의 2배를 추가로 지불하면 다시 도전할 수 있습니다.\n다시 도전하시겠습니까? [Y , N] ");
			std::cin >> Answer;
			if (Answer == 'Y' || Answer == 'y') {
				if (BattingMoney*2 > Funds) {
					printf("배팅 금액이 소지금을 초과하여 진행할 수 없습니다. \n");
				}
				else{
					Funds -= BattingMoney * 2;
					printf("3가지 카드 중 한 장을 고르세요 [1, 2, 3]  "); // 카드 별 위치
					std::cin >> SelectCard;

					if (SelectCard == JokerLocation) {
						Funds += BattingMoney * 2 * 2;		// 이 때도 배팅금액의 2배인가..?
						printf("배팅에 성공하였습니다.\n");
					}
					else {
						printf("배팅에 실패하였습니다.\n");
					}
				}
				
			}
			else {
				printf("이번 게임을 종료합니다. \n");
			}
	}
	printf("현재 소지금 : %d \n\n", Funds);
	return Funds;
}

