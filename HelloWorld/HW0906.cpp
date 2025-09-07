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
		printf("A����");
	}
	else if (Score >= B)
	{
		printf("B����");
	}
	else if (Score >= C)
	{
		printf("C����");
	}
	else if (Score >= D)
	{
		printf("D����");
	}
	else
	{
		printf("F����");
	}
	return 0;
}

int SumEachDigit(int InputNumber)
{
	int Sum = 0;
	printf("SumEachDigit �Լ� ����\n");
	while (InputNumber > 10) {
		Sum += InputNumber % 10; // 1�� �ڸ��� �ִ� ���� ���ϱ�
		InputNumber /= 10; // 10���� ���� �� InputNumber�� �����ϱ�
	}
	return Sum;
}

int RecurciveDecimalToBinary(int Decimal)
{
	// �� �̰� ����Լ��� �ƴ��ڳ�..
	//int Binary = 0;
	//int digit = 1;

	//while (Decimal > 0) {
	//	Binary += (Decimal % 2) * digit; //1bit ��ġ���� ä��鼭 �� ���ϱ�
	//	digit *= 10; //��Ʈ ��ġ �������� ��ĭ���� ����ǵ���
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
		printf("�ڡ١� %d �� ���Խ��ϴ�.�ڡ١�\n", SlotNumber);
		if ((SlotNumber % 7) == 0) {
			BattingMoney *= 200;
		}
		BattingMoney *= 50;
		Funds += BattingMoney;
	}
	else {
		printf("%d �� ���Խ��ϴ�.\n", SlotNumber);
		Funds -= BattingMoney;

	}
	
	return Funds;
}

int TurnBattle()
{
	int Damage = rand() % 11 + 5;
	int Critical = rand() % 100;

	if (Critical >= 0 && Critical < 10) {
		printf("��ũ��Ƽ��!�� \n");
		Damage *= 2;
	}
	printf("������ : %d \n", Damage);
	
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
		printf("���ÿ� �����Ͽ����ϴ�.\n");
	}
	else {
		printf("���ÿ� �����Ͽ����ϴ�.\n");
		printf("���� �ݾ��� 2�踦 �߰��� �����ϸ� �ٽ� ������ �� �ֽ��ϴ�.\n�ٽ� �����Ͻðڽ��ϱ�? [Y , N] ");
			std::cin >> Answer;
			if (Answer == 'Y' || Answer == 'y') {
				if (BattingMoney*2 > Funds) {
					printf("���� �ݾ��� �������� �ʰ��Ͽ� ������ �� �����ϴ�. \n");
				}
				else{
					Funds -= BattingMoney * 2;
					printf("3���� ī�� �� �� ���� ������ [1, 2, 3]  "); // ī�� �� ��ġ
					std::cin >> SelectCard;

					if (SelectCard == JokerLocation) {
						Funds += BattingMoney * 2 * 2;		// �� ���� ���ñݾ��� 2���ΰ�..?
						printf("���ÿ� �����Ͽ����ϴ�.\n");
					}
					else {
						printf("���ÿ� �����Ͽ����ϴ�.\n");
					}
				}
				
			}
			else {
				printf("�̹� ������ �����մϴ�. \n");
			}
	}
	printf("���� ������ : %d \n\n", Funds);
	return Funds;
}

