#include "lesson0909.h"
#include "lesson0912.h"
#include <stdio.h>
#include <iostream>

Player P;


int Lesson0909() {
	srand(time(0));
	// 간단 실습
	// Number라는 변수를 하나 선언하고 포인터 변수 p에 Number의 주소를 저장하기
	// p를 이용해서 Number의 값을 변경시키기

	float Number = 123.4f;
	int Number2 = 10;
	float* p = nullptr; // p는 완전히 비어있다.
	p = &Number;		// p에 Number의 주소를 저장했다.
	//p = &Number2;		// 타입이 다르기 때문에 안된다.

	(*p) = 12.34f;		// 곱하기 연산과 헷갈릴 수 있으니 확실하게 괄호 해주는것이 좋음

	//PointerParameter(&Number2);

	// 간단 실습
	// int* 와 float*를 파라미터로 받은 함수 만들기
	// int* 로 받은 값은 3 더하기, float*로 받은 값은 절반으로 만들기

	float* test = p;
	test++;

	int i = 0;

	/*IntPlusFloatDivide(&Number2, &Number);
	printf("Number2 : %d", Number2);
	printf("Number : %.2f", Number);*/

	// 배열과 포인터
	int Array[5] = { 10, 20, 30, 40 ,50 };
	int* pArray = Array;	// 배열의 이름은 배열의 첫번째 요소의 주소와 같다.
	int* pArray2 = &Array[0];	// Array == &Array[0] 두 개는 같은 의미

	// pArray를 이용해서 Array[2]를 300으로 수정하기
	//(pArray + 2) // 30의 주소
	*(pArray + 2) = 300;

	//for (int data : Array)		//range-for
	//{
	//	printf("%d ",data);
	//}
	//printf("\n");

	//DynamicAllocation();

	//SimplePractice();

	//Practice1_0909();
	//Practice2_0909();
	Practice3_0909();

	return 0;
}

void PointerParameter(int* pNumber)
{
	(*pNumber) = (*pNumber) * 2;	// 입력받은 주소에 있는 int 값을 2배로 만들기
}

void IntPlusFloatDivide(int* pInt, float* pFloat)
{
	(*pInt) += 3;
	//(*pFloat) = (*pFloat) / 2.0f;
	(*pFloat) *= 0.5f;	// *과 /중에 선택할 수 있는 상황이면 *가 성능상 유리하다.
}

void DynamicAllocation()
{
	// C 스타일 메모리 할당 및 해제
	int Size = 5;
	int* Array = nullptr;
	Array = (int*)malloc(sizeof(int) * Size); // int 5개짜리 메모리 블럭 할당 받기 

	Array[2] = 20;
	/*
		작업들
	*/

	free(Array);		// Array를 해제. malloc을 했으면 무조건 free부터 만들고 작업할 것
	Array = nullptr;	//댕글링 포인터 방지

	// C++ 스타일
	int* Data = new int(5);		// int 하나를 할당 받는데 주소가 가리키는 값은 5를 설정해라
	delete Data;
	Data = nullptr;
	Array = new int[10];	// int 10개짜리 배열을 만들어라
	delete[] Array;				// 배열은 반드시 이렇게 해제해야 한다.
	//delete Array; // 절대 이렇게 하면 안된다. 이렇게 하면 Array[0]부분만 할당 해제가 된다.
	Array = nullptr;
}

void SimplePractice() {
	/*int* SimpleArray = new int[3];
	int InputNumber = 0;
	printf("숫자를 입력하세요 : ");
	std::cin >> InputNumber;

	while (InputNumber != 0) {

		int Size = sizeof(SimpleArray)/sizeof(SimpleArray[0]) + 1 ;
		SimpleArray = new int[Size];

		*(SimpleArray + (Size - 1)) = InputNumber;
		printf("숫자를 입력하세요 : ");
		std::cin >> InputNumber;
		int i = 0;
	}
	delete[] SimpleArray;
	SimpleArray = nullptr;*/
	const int StartSize = 3;
	const int ExitInput = -1;	// 입력 종료값 or 빈칸 표현값
	int* Array = new int[StartSize] {0};
	for (int i = 0; i < StartSize; i++)
	{
		Array[i] = ExitInput;
	}
	int CurrentIndex = 0;
	int CurrentSize = StartSize;

	int InputNumber = 0;

	while (InputNumber != ExitInput) {
		printf("배열에 넣을 숫자를 입력하세요 : ");
		std::cin >> InputNumber;

		Array[CurrentIndex] = InputNumber;
		CurrentIndex++;

		if (CurrentIndex >= CurrentSize)
		{
			int* newArray = new int[CurrentSize + 1];
			for (int i = 0; i < CurrentSize; i++) {
				newArray[i] = Array[i];
			}
			newArray[CurrentSize] = ExitInput;

			delete[] Array;
			Array = newArray;
			CurrentSize++;

		}
		printf("입력된 데이터 : ");
		for (int i = 0; i < CurrentSize; i++) {
			printf("%d ", Array[i]);
		}
		printf("\n");
	}

	delete[] Array;
	Array = nullptr;
}

void Practice1_0909()
{
	int Width = 0, Length = 0;
	int Value = 0;

	printf("가로 세로 입력 : ");
	std::cin >> Width >> Length;
	int FullSize = Width * Length;
	int k = 0;
	int* Array0909_1 = new int[FullSize] {0};

	/*for (int i = 1; i <= Length; i++) {
		for (int j = 1; j <= Width; j++)
		{
			Array0909_1[(i * j)-1] = Value;
			printf("%d ", Array0909_1[(i * j) - 1]);
			Value++;
		}
		printf("\n");
	}*/

	for (int i = 0; i < FullSize ; i++) {
		Array0909_1[i] = Value;
		if (i % Width == 0) {
			printf("\n");
		}
		printf("%d ", Array0909_1[i]);
		Value++;
	}
	delete[] Array0909_1;
	Array0909_1 = nullptr;
}

void Practice2_0909()
{
	const int Size = 5;
	int HighLowNumber = rand() % 100 + 1;
	int UserNumber = 0;
	int Count = 0;
	int HighLowArray[Size] = {0};
	int Index = 0; 

	printf("-- 컴퓨터가 뽑은 숫자 : %d -- \n", HighLowNumber);
	printf("하이로우 게임! 5번 안에 맞추셔야 합니다. \n");
	printf("1 ~ 100 사이의 숫자를 골라보세요 : ");
	std::cin >> UserNumber;
	Count++;

	while ((UserNumber != HighLowNumber) && (Count != 5)) {
		
		HighLowArray[Index] = UserNumber;
		Index++;

		if (UserNumber > HighLowNumber) {
			printf("더 낮게\n");
		}
		else
		{
			printf("더 높게\n");
		}
		Count++;
		printf("숫자를  다시 골라보세요 : ");
		std::cin >> UserNumber;
	}
	if (UserNumber == HighLowNumber) {
		printf("정답입니다.\n");
	}
	else {
		printf("탈락입니다.\n");
	}
		HighLowArray[Index] = UserNumber;
	
	printf("플레이어가 지금까지 나열한 수 : ");
	for (int i = 0; i < Size; i++) {
		printf("%d ", HighLowArray[i]);
	}
}

int Practice3_0909()
{
	
	enum Key {
		W = 1 << 0,
		A = 1 << 1,
		D = 1 << 2,
		S = 1 << 3

	};
	const int MazeHeight = 10;
	const int MazeWidth = 20;

	int PlayerX = 1;
	int PlayerY = 1;
	//int PlayerHP = 100;

	printf("==텍스트 미로 탈출 게임==\n");

	// 미로 배열
	int Maze[MazeHeight][MazeWidth] =
	{
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,2,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,1},
		{1,1,1,1,0,1,0,1,1,0,1,0,1,1,0,1,0,1,0,1},
		{1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1},
		{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
		{1,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
		{1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},
		{1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,3,1},
		{1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
	};

	while ((PlayerX != 18) || (PlayerY != 7))
	{

		// 플레이어가 E에 도착할 때 까지 반복
		printf("\n\n");
		for (int i = 0; i < MazeHeight; i++) {
			for (int j = 0; j < MazeWidth; j++) {
				if (i == PlayerY && j == PlayerX) {
					printf("P ");
				}
				else {
					if (Maze[i][j] == 0) {
						printf(". ");
					}
					else if (Maze[i][j] == 1) {
						printf("# ");
					}
					else if (Maze[i][j] == 2) {
						printf("S ");
					}
					else if (Maze[i][j] == 3) {
						printf("E ");
					}
				}
			}
			printf("\n");
		}

		printf("이동할 수 있는 방향을 선택하세요 (w: 위, s: 아래, a: 왼쪽, d: 오른쪽) :\n ");
		printf("입력할 수 있는 방향: \n"); // 입력할 수 있는 방향 출력
		int AvailabelDirection = 0;
		if ((Maze[PlayerY - 1][PlayerX] == 0) || (Maze[PlayerY - 1][PlayerX] == 3)) {
			printf("w(↑) ");
			AvailabelDirection |= W;
		}
		if (Maze[PlayerY][PlayerX - 1] == 0 || (Maze[PlayerY][PlayerX - 1] == 3)) {
			printf("a(←) ");
			AvailabelDirection |= A;
		}
		if (Maze[PlayerY][PlayerX + 1] == 0 || (Maze[PlayerY][PlayerX + 1] == 3)) {
			printf("d(→) ");
			AvailabelDirection |= D;
		}
		if (Maze[PlayerY + 1][PlayerX] == 0 || (Maze[PlayerY + 1][PlayerX] == 3)) {
			printf("s(↓) ");
			AvailabelDirection |= S;
		}

		printf("\n");
		while (true) {

			printf("방향 입력 : ");
			char Direction = 0;
			std::cin >> Direction;


			if ((Direction == 'D' || Direction == 'd') && (D & AvailabelDirection)) {
				// 입력값이 D,d 이고 가능한 이동 방향이면
				PlayerX += 1;
			}
			else if ((Direction == 'W' || Direction == 'w') && (W & AvailabelDirection))
			{
				PlayerY -= 1;
			}
			else if ((Direction == 'A' || Direction == 'a') && (A & AvailabelDirection))
			{
				PlayerX -= 1;
			}
			else if ((Direction == 'S' || Direction == 's') && (S & AvailabelDirection))
			{
				PlayerY += 1;

			}
			else {

				printf("잘못된 입력입니다. 이동할 수 있는 방향 중에서 선택하세요.\n");
				continue;
			} // 입력할 수 있는 방향이 아니면
		
			// 이동 후 일정 확률에 따라 몬스터 만나거나 HP 회복
			//int Battleprobability = rand() & 100 + 1;
			//int Recoverprobability = rand() & 100 + 1;

			//if ((Battleprobability > 0 && Battleprobability <= 20) && !(Recoverprobability > 0 && Recoverprobability <= 10)) {
			//	PlayerHP = StartMazeBattle(PlayerHP);
			//	if (PlayerHP <= 0) {
			//		printf("플레이어가 죽었습니다. 게임을 종료합니다. \n");
			//		//break;
			//		return 0;
			//	}
			//}
			//if (!(Battleprobability > 0 && Battleprobability <= 20) && (Recoverprobability > 0 && Recoverprobability <= 10)) {
			//	PlayerHP = RecoveryHP(PlayerHP);
			//}

			// 이동 후 일정 확률에 따라 몬스터 만나거나 회복사 만나기
			int Battleprobability = rand() & 100 + 1;
			int Recoverprobability = rand() & 100 + 1;
			MonsterData M;

			if ((Battleprobability > 0 && Battleprobability <= 20) && !(Recoverprobability > 0 && Recoverprobability <= 10)) {
				MazeRandomMonsterBattle(P, M);
				if (P.PlayerHP <= 0) {
					printf("플레이어가 죽었습니다. 게임을 종료합니다. \n");
					return 0;
				}
			}
			if (!(Battleprobability > 0 && Battleprobability <= 20) && (Recoverprobability > 0 && Recoverprobability <= 10)) {
				MeetHealer(P,M);
			}

			// 이동 후 일정 확률에 따라 몬스터 만나서 해치우면 보상으로 HP 회복
			//int Battleprobability = rand() & 100 + 1;
			//if ((Battleprobability > 0 && Battleprobability <= 20)) {
			//	int PlayerHp = BattleResultPlayerHP(PlayerY, PlayerX);
			//	if (PlayerHp <= 0) {
			//		printf("플레이어가 죽었습니다. 게임을 종료합니다. \n");
			//		//break;
			//		return 0;
			//	}
			//}

			break;

		}

	}

	printf("★☆★☆★☆게임 종료★☆★☆★☆\n");
	return 123;

}


int RecoveryHP(int PlayerHP)
{
	printf("\n\n★★★★★★★★★★★★★★HP 회복★★★★★★★★★★★★★★★\n\n");
	printf("플레이어의 체력이 %d에서 100으로 회복되었습니다.\n\n", PlayerHP);
	return 100;
}

int StartMazeBattle(int PlayerHP)
{
	enum turn {
		PLAYER = 1,
		MONSTER = 2,
	};
	int MonsterHP = 100;
	int Turn = 1;
	int Damage = 0;

	printf("\n\n★★★★★★★★★★★★★몬스터 출현★★★★★★★★★★★★★★★★★★\n");
	printf("전투를 시작합니다.\n플레이어 체력 : %d, 몬스터 체력 : %d \n플레이어 먼저 시작 \n",PlayerHP,MonsterHP);

	while ((PlayerHP > 0) && (MonsterHP > 0)) {
		
		if (Turn == PLAYER) {
			//플레이어 공격 차례
			printf("\n▶ 플레이어 공격 \n");
			Damage = TurnMazeBattle();
			MonsterHP -= Damage;
			printf("몬스터 남은 체력 : %d \n", MonsterHP);
			Turn = MONSTER;
		}
		else {
			//몬스터 공격 차례
			printf("\n▷ 몬스터 공격 \n");
			Damage = TurnMazeBattle();
			PlayerHP -= Damage;
			printf("플레이어 남은 체력 : %d \n\n", PlayerHP);
			Turn = PLAYER;
		}
	}

	if (PlayerHP > 0) {
		printf("플레이어의 승리입니다.\n");
		printf("플레이어의 남은 체력 : %d \n", PlayerHP);
	}
	else {
		printf("플레이어의 패배입니다.\n");
	}

	return PlayerHP;
}

int TurnMazeBattle()
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
