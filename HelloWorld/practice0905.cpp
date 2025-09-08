#include "Practice0905.h"
#include <stdio.h>
#include <iostream>

int Practice0905_01(int Min, int Max) {
	
	srand(time(0));
	int Result = rand() % Max + Min;

	printf("%d ~ %d ���� ���� ������ ���� : %d ���Դ�", Min, Max, Result);
	return 0;

}

int Practice0905_02(int Age)
{
	printf("����� %d�� �Դϴ�. \n", Age);
	return 0;
}

float Practice0905_03(float Radius)
{
	const float PI = 3.141592;
	float Area = Radius * Radius * PI;
	printf("�������� %.2f �� ���� ���̴� %.2f �Դϴ�. \n", Radius, Area);

	return 0.0f;
}

bool OddOrNot(int Number)
{
	if (Number % 2 == 0) {
		printf("¦��");
		return false;
	}
	else {
		printf("Ȧ��");
		return true;
	}
}

int ScoreRanking(int Score)
{
	enum GRADE {
		A = 90,
		B = 80,
		C = 70,
		D = 60,
		F = 50
	};

	if (Score >= A) {
		printf("A����\n");
	}
	else if (Score >=B ) {
		printf("B����\n");
	}
	else if (Score >= C) {
		printf("C����\n");
	}
	else if (Score >= D) {
		printf("D����\n");
	}
	else{
		printf("F����\n");
	}

	return 0;
}

int GetItem(int Inventory, int Item)
{
	Inventory |= (1 << Item);
	return Inventory;
}

int LoseItem(int Inventory, int Item)
{
	Inventory &= (~(1 << Item));
	return Inventory;
}
int Toggle2Item(int Inventory, int Item)
{
	Inventory ^= (1 << Item);
	return Inventory;
}

int DrawPyramid(int Floor)
{
	for (int i = 0; i < Floor; i++) {
		for (int j = (Floor - (i + 1)); j > 0; j--) {
			printf(" "); // �տ� ��ĭ ä���
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


int FactorialNumber(int Number)
{
	if (Number < 2)
	{
		return 1;
	}

	return Number * FactorialNumber(Number - 1);
}
// ������ �ڵ�
void Practice0905_02_05()
{
	enum Card
	{
		CardA = 0,
		Card2,
		Card3,
		Card4,
		Card5,
		Card6,
		Card7,
		Card8,
		Card9,
		Card10,
		CardJ,
		CardQ,
		CardK,
		CardJoker,
		NumOfCards
	};

	int Money = 10000;
	const int MinimumBet = 100;

	while (Money >= MinimumBet)
	{
		int CurrentBet = MinimumBet;

		printf("������ ���ּ��� (100~%d) : ", Money);
		std::cin >> CurrentBet;
		printf("%d���� �����߽��ϴ�.\n", CurrentBet);

		Money -= CurrentBet;

		// ������ ���ϰ� �ִ�.

		int Dealer1 = rand() % CardJoker;
		int Dealer2 = -1;
		do
		{
			Dealer2 = rand() % CardJoker;
		} while (Dealer2 == Dealer1);
		int Dealer3 = -1;
		do
		{
			Dealer3 = rand() % CardJoker;
		} while (Dealer3 == Dealer1 || Dealer3 == Dealer2);

		int JokerIndex = rand() % 3;
		switch (JokerIndex)
		{
		case 0:
			Dealer1 = CardJoker;
			break;
		case 1:
			Dealer2 = CardJoker;
			break;
		case 2:
			Dealer3 = CardJoker;
			break;
		default:
			// ���� ������ �ȵȴ�.
			break;
		}

		printf("ī�带 �����ϼ��� (0, 1, 2) : ");
		int PlayerInput = 0;
		std::cin >> PlayerInput;

		bool PlayerWin = false;
		printf("�÷��̾�� %d�� �����߽��ϴ�.\n", PlayerInput);
		switch (PlayerInput)
		{
		case 0:
			if (Dealer1 == CardJoker)
			{
				// �߰���
				PlayerWin = true;
			}
			break;
		case 1:
			if (Dealer2 == CardJoker)
			{
				// �߰���
				PlayerWin = true;
			}
			break;
		case 2:
			if (Dealer3 == CardJoker)
			{
				// �߰���
				PlayerWin = true;
			}
			break;
		default:
			// ���� ������ �ȵȴ�.
			break;
		}

		if (PlayerWin)
		{
			Money += CurrentBet * 2;
			printf("��Ŀ�� �̾ҽ��ϴ�. ����� ���� �ݾ��� %d�Դϴ�.\n", Money);
		}
		else
		{
			printf("����� ���� ī��� ��Ŀ�� �ƴմϴ�.\n");

			if (Money >= CurrentBet * 2)
			{
				printf("�߰� ���� �Ͻðڽ��ϱ� ? (0:yes, 1 : no) : ");
				int Select = -1;
				std::cin >> Select;
				if (Select == 0)
				{
					Money -= CurrentBet * 2;
					CurrentBet *= 3;
					int PlayerSecondInput = -1;
					switch (PlayerInput)
					{
					case 0:
					{
						do
						{
							printf("���� ī�� �� �ϳ��� �����ϼ��� (1,2) : ");
							std::cin >> PlayerSecondInput;
						} //while (!(PlayerSecondInput == 1 || PlayerSecondInput == 2));
						while (PlayerSecondInput != 1 && PlayerSecondInput != 2);
					}
					break;
					case 1:
					{
						do
						{
							printf("���� ī�� �� �ϳ��� �����ϼ��� (0,2) : ");
							std::cin >> PlayerSecondInput;
						} while (PlayerSecondInput != 0 && PlayerSecondInput != 2);
					}
					break;
					case 2:
					{
						do
						{
							printf("���� ī�� �� �ϳ��� �����ϼ��� (0,1) : ");
							std::cin >> PlayerSecondInput;
						} while (PlayerSecondInput != 0 && PlayerSecondInput != 1);
					}
					break;
					default:
						// ���� ������ �ȵȴ�.
						break;
					}

					printf("�÷��̾�� �ι�°�� %d�� �����߽��ϴ�.\n", PlayerSecondInput);
					switch (PlayerSecondInput)
					{
					case 0:
						if (Dealer1 == CardJoker)
						{
							// �߰���
							PlayerWin = true;
						}
						break;
					case 1:
						if (Dealer2 == CardJoker)
						{
							// �߰���
							PlayerWin = true;
						}
						break;
					case 2:
						if (Dealer3 == CardJoker)
						{
							// �߰���
							PlayerWin = true;
						}
						break;
					default:
						// ���� ������ �ȵȴ�.
						break;
					}

					if (PlayerWin)
					{
						Money += CurrentBet * 2;
						printf("��Ŀ�� �̾ҽ��ϴ�. ����� ���� �ݾ��� %d�Դϴ�.\n", Money);
					}
					else
					{
						printf("����� �й��Դϴ�.\n");
					}
				}
				else
				{
					printf("����� �й��Դϴ�.\n");
				}
			}
			else
			{
				printf("����� �й��Դϴ�.\n");
			}
		}
	}
}