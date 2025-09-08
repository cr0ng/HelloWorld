#include <stdio.h>
#include <iostream>
#include "HW0906.h"
int HW0906() {


	// 1번 문제
	int AvgNumber1 = 0, AvgNumber2 = 0, AvgNumber3 = 0;
	printf("평균을 구할 3개의 숫자를 입력하세요  :");
	std::cin >> AvgNumber1 >> AvgNumber2 >> AvgNumber3;
	printf("%.2f",Avg3Number(AvgNumber1, AvgNumber2, AvgNumber3));
	

	// 2번 문제
	//printf("%d", SalePrice(100, 50));

	// 3번 문제
	/*int Dice = ThrowDice();
	printf("주사위를 굴렸습니다!🎲 %d", Dice);
	*/

	// 4번 문제
	/*int Score = 0;
	printf("점수를 입력하세요 : ");
	std::cin >> Score;

	ScoreGrade(Score);*/

	// 5번 문제
	/*int Value = 0, Value2 = 0, Value3 = 0;
	printf("3개의 숫자를 입력하세요. 맨 처음 값은 value 입니다. ");
	std::cin >> Value >> Value2 >> Value3;

	printf("%d", ClampHW(Value, Value2, Value3));*/

	// 심화 1번 문제
	/*int InputNumber = 0;
	printf("숫자를 입력하세요 : ");
	std::cin >> InputNumber;

	printf("%d 의 각 자리 수의 합은 %d 입니다.", InputNumber, SumEachDigit(InputNumber));*/

	// 심화 2번 문제
	/*int DecimalNumber = 0;
	printf("2진수로 변환할 10진수 수를 입력하세요  : ");
	std::cin >> DecimalNumber;
	printf("%d를 2진수로 변환하면", DecimalNumber);
	int BinaryNuber = RecurciveDecimalToBinary(DecimalNumber);*/

	// 심화 3번 문제
	/*int BattingMoney = 0;
	int Funds = 10000;
	printf("슬롯 머신 게임 시작! 첫 소지금은 10000원 \n");

	while (Funds > 100) {
		printf("얼마를 배팅하시겠습니까?");
		std::cin >> BattingMoney;
		if (BattingMoney > Funds) {
			printf("소지금보다 큰 금액을 배팅할 수 없습니다.\n");
		}
		else if (BattingMoney <= 100) {
			printf("\n배팅은 100원 이상 해야합니다.\n");
		}
		else {
			Funds = SlotGame(Funds ,BattingMoney);
			printf("소지금 : %d\n", Funds);
		}
	}
	printf("돈이 부족합니다. 게임을 종료합니다. \n");*/

	// 심화 4번 문제
	//enum turn {
	//PLAYER = 1,
	//MONSTER = 2,
	//};
	//int PlayerHP = 100;
	//int MonsterHP = 100;
	//int Turn = 1;
	//int Damage = 0;

	//srand(time(0));
	//printf("전투를 시작합니다.\n플레이어 체력 : 100, 몬스터 체력 : 100 \n플레이어 먼저 시작 \n");
	//
	//while ((PlayerHP > 0) && (MonsterHP > 0)) {
	//	Damage = TurnBattle();
	//	if (Turn == PLAYER) {
	//		//플레이어 공격 차례
	//		printf("\n▶ 플레이어 공격 \n");
	//		MonsterHP -= Damage;
	//		printf("몬스터 남은 체력 : %d \n", MonsterHP);
	//		Turn = MONSTER;
	//	}
	//	else {
	//		//몬스터 공격 차례
	//		printf("\n▷ 몬스터 공격 \n");
	//		PlayerHP -= Damage;
	//		printf("플레이어 남은 체력 : %d \n", PlayerHP);
	//		Turn = PLAYER;
	//	}
	//}

	//if (PlayerHP > 0) {
	//	printf("플레이어의 승리입니다.");
	//}
	//else {
	//	printf("플레이어의 패배입니다.");
	//}

	// 심화 5번 문제
	//int SelectCard = 0;
	//int Funds = 10000;
	//int BattingMoney = 0;
	//printf("도둑 잡기를 시작합니다. 현재 플레이어의 소지금 : %d\n", Funds);

	//srand(time(0));
	//

	//while (Funds > 100) {
	//	printf("얼마를 배팅하시겠습니까?");
	//	std::cin >> BattingMoney;
	//	
	//	if (BattingMoney > Funds) {
	//		printf("소지금보다 큰 금액을 배팅할 수 없습니다.\n");
	//	}
	//	else if (BattingMoney <= 100) {
	//		printf("\n배팅은 100원 이상 해야합니다.\n");
	//	}
	//	else {
	//		int Card1 = PickCard();
	//		int Card2 = PickCard();
	//
	//		while (Card1 == Card2) {
	//			Card2 = PickCard();		// 중복없는 카드 2장 뽑기
	//		}
	//		printf("첫번째로 뽑은 카드는 %d 두번째로 뽑은 카드는 %d \n", Card1, Card2);  // 카드 확인용

	//		int CardLocation1 = MixCard();
	//		int CardLocation2 = MixCard();
	//		int CardLocation3 = MixCard();

	//		while (CardLocation1 == CardLocation2) {	// 1,2 중복 없게
	//			CardLocation2 = MixCard();
	//		}
	//		while (CardLocation3 == CardLocation1 || CardLocation3 == CardLocation2) { // 모두 중복 없게
	//			CardLocation3 = MixCard();
	//		}
	//		printf("%d %d %d \n", CardLocation1, CardLocation2, CardLocation3); // 카드 위치 확인용, CardLocation3 이 조커의 위치
	//		printf("3가지 카드 중 한 장을 고르세요 [1, 2, 3] "); // 카드 별 위치
	//		std::cin >> SelectCard;
	//		
	//		if (SelectCard == CardLocation1) {
	//			printf("%d 번의 카드는 %d 입니다. \n", SelectCard, Card1);
	//		}
	//		else if (SelectCard == CardLocation2) {
	//			printf("%d 번의 카드는 %d 입니다. \n", SelectCard, Card2);
	//		}
	//		else {
	//			printf("조커를 뽑았습니다. \n");
	//		}
	//		Funds = PickJocker(SelectCard, CardLocation3, BattingMoney, Funds);

	//	}
	//}
	//printf("돈이 부족합니다. 게임을 종료합니다. \n");
	//

	return 0;
}

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
	//srand(time(0));
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
	while (InputNumber > 0 ) {
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
		printf("%d", Decimal % 2); // print를 나중에 해야 거꾸로 나옴

		return 0;
}

int SlotGame(int Funds, int BattingMoney)
{
	srand(time(0));
	int SlotNumber = rand() % 900 + 100;	// 100~999 뽑히게 했는데 생각해보니까 0이 나오면 안되넹..
	
	if ((SlotNumber % 111) == 0)
	{
		if ((SlotNumber % 7) == 0) {
			printf("★☆★ %d 가 나왔습니다.★☆★\n", SlotNumber); /// 777 나왔을때
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
	return rand() % 14 + 1; // 카드 뽑기
}

int MixCard()
{
	return rand() % 3 + 1; // 3장의 카드 위치 설정
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
						Funds += BattingMoney * 2 * 2;		// 이 때도 배팅금액의 2배
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
