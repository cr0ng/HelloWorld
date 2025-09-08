#include "Practice0905.h"
#include <stdio.h>
#include <iostream>

int Practice0905_01(int Min, int Max) {
	
	srand(time(0));
	int Result = rand() % Max + Min;

	printf("%d ~ %d 범위 안의 랜덤한 숫자 : %d 나왔다", Min, Max, Result);
	return 0;

}

int Practice0905_02(int Age)
{
	printf("당신은 %d살 입니다. \n", Age);
	return 0;
}

float Practice0905_03(float Radius)
{
	const float PI = 3.141592;
	float Area = Radius * Radius * PI;
	printf("반지름이 %.2f 인 원의 넓이는 %.2f 입니다. \n", Radius, Area);

	return 0.0f;
}

bool OddOrNot(int Number)
{
	if (Number % 2 == 0) {
		printf("짝수");
		return false;
	}
	else {
		printf("홀수");
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
		printf("A학점\n");
	}
	else if (Score >=B ) {
		printf("B학점\n");
	}
	else if (Score >= C) {
		printf("C학점\n");
	}
	else if (Score >= D) {
		printf("D학점\n");
	}
	else{
		printf("F학점\n");
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
			printf(" "); // 앞에 빈칸 채우기
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
// 선생님 코드
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

		printf("배팅을 해주세요 (100~%d) : ", Money);
		std::cin >> CurrentBet;
		printf("%d원을 배팅했습니다.\n", CurrentBet);

		Money -= CurrentBet;

		// 배팅을 안하고 있다.

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
			// 절대 들어오면 안된다.
			break;
		}

		printf("카드를 선택하세요 (0, 1, 2) : ");
		int PlayerInput = 0;
		std::cin >> PlayerInput;

		bool PlayerWin = false;
		printf("플레이어는 %d를 선택했습니다.\n", PlayerInput);
		switch (PlayerInput)
		{
		case 0:
			if (Dealer1 == CardJoker)
			{
				// 발견함
				PlayerWin = true;
			}
			break;
		case 1:
			if (Dealer2 == CardJoker)
			{
				// 발견함
				PlayerWin = true;
			}
			break;
		case 2:
			if (Dealer3 == CardJoker)
			{
				// 발견함
				PlayerWin = true;
			}
			break;
		default:
			// 절대 들어오면 안된다.
			break;
		}

		if (PlayerWin)
		{
			Money += CurrentBet * 2;
			printf("조커를 뽑았습니다. 당신의 현재 금액은 %d입니다.\n", Money);
		}
		else
		{
			printf("당신이 뽑은 카드는 조커가 아닙니다.\n");

			if (Money >= CurrentBet * 2)
			{
				printf("추가 도전 하시겠습니까 ? (0:yes, 1 : no) : ");
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
							printf("남은 카드 중 하나를 선택하세요 (1,2) : ");
							std::cin >> PlayerSecondInput;
						} //while (!(PlayerSecondInput == 1 || PlayerSecondInput == 2));
						while (PlayerSecondInput != 1 && PlayerSecondInput != 2);
					}
					break;
					case 1:
					{
						do
						{
							printf("남은 카드 중 하나를 선택하세요 (0,2) : ");
							std::cin >> PlayerSecondInput;
						} while (PlayerSecondInput != 0 && PlayerSecondInput != 2);
					}
					break;
					case 2:
					{
						do
						{
							printf("남은 카드 중 하나를 선택하세요 (0,1) : ");
							std::cin >> PlayerSecondInput;
						} while (PlayerSecondInput != 0 && PlayerSecondInput != 1);
					}
					break;
					default:
						// 절대 들어오면 안된다.
						break;
					}

					printf("플레이어는 두번째로 %d를 선택했습니다.\n", PlayerSecondInput);
					switch (PlayerSecondInput)
					{
					case 0:
						if (Dealer1 == CardJoker)
						{
							// 발견함
							PlayerWin = true;
						}
						break;
					case 1:
						if (Dealer2 == CardJoker)
						{
							// 발견함
							PlayerWin = true;
						}
						break;
					case 2:
						if (Dealer3 == CardJoker)
						{
							// 발견함
							PlayerWin = true;
						}
						break;
					default:
						// 절대 들어오면 안된다.
						break;
					}

					if (PlayerWin)
					{
						Money += CurrentBet * 2;
						printf("조커를 뽑았습니다. 당신의 현재 금액은 %d입니다.\n", Money);
					}
					else
					{
						printf("당신의 패배입니다.\n");
					}
				}
				else
				{
					printf("당신의 패배입니다.\n");
				}
			}
			else
			{
				printf("당신의 패배입니다.\n");
			}
		}
	}
}