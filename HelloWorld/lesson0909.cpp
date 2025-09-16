#include "lesson0909.h"
#include "lesson0912.h"
#include <stdio.h>
#include <iostream>

Player P;


int Lesson0909() {
	srand(time(0));
	// ���� �ǽ�
	// Number��� ������ �ϳ� �����ϰ� ������ ���� p�� Number�� �ּҸ� �����ϱ�
	// p�� �̿��ؼ� Number�� ���� �����Ű��

	float Number = 123.4f;
	int Number2 = 10;
	float* p = nullptr; // p�� ������ ����ִ�.
	p = &Number;		// p�� Number�� �ּҸ� �����ߴ�.
	//p = &Number2;		// Ÿ���� �ٸ��� ������ �ȵȴ�.

	(*p) = 12.34f;		// ���ϱ� ����� �򰥸� �� ������ Ȯ���ϰ� ��ȣ ���ִ°��� ����

	//PointerParameter(&Number2);

	// ���� �ǽ�
	// int* �� float*�� �Ķ���ͷ� ���� �Լ� �����
	// int* �� ���� ���� 3 ���ϱ�, float*�� ���� ���� �������� �����

	float* test = p;
	test++;

	int i = 0;

	/*IntPlusFloatDivide(&Number2, &Number);
	printf("Number2 : %d", Number2);
	printf("Number : %.2f", Number);*/

	// �迭�� ������
	int Array[5] = { 10, 20, 30, 40 ,50 };
	int* pArray = Array;	// �迭�� �̸��� �迭�� ù��° ����� �ּҿ� ����.
	int* pArray2 = &Array[0];	// Array == &Array[0] �� ���� ���� �ǹ�

	// pArray�� �̿��ؼ� Array[2]�� 300���� �����ϱ�
	//(pArray + 2) // 30�� �ּ�
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
	(*pNumber) = (*pNumber) * 2;	// �Է¹��� �ּҿ� �ִ� int ���� 2��� �����
}

void IntPlusFloatDivide(int* pInt, float* pFloat)
{
	(*pInt) += 3;
	//(*pFloat) = (*pFloat) / 2.0f;
	(*pFloat) *= 0.5f;	// *�� /�߿� ������ �� �ִ� ��Ȳ�̸� *�� ���ɻ� �����ϴ�.
}

void DynamicAllocation()
{
	// C ��Ÿ�� �޸� �Ҵ� �� ����
	int Size = 5;
	int* Array = nullptr;
	Array = (int*)malloc(sizeof(int) * Size); // int 5��¥�� �޸� �� �Ҵ� �ޱ� 

	Array[2] = 20;
	/*
		�۾���
	*/

	free(Array);		// Array�� ����. malloc�� ������ ������ free���� ����� �۾��� ��
	Array = nullptr;	//��۸� ������ ����

	// C++ ��Ÿ��
	int* Data = new int(5);		// int �ϳ��� �Ҵ� �޴µ� �ּҰ� ����Ű�� ���� 5�� �����ض�
	delete Data;
	Data = nullptr;
	Array = new int[10];	// int 10��¥�� �迭�� ������
	delete[] Array;				// �迭�� �ݵ�� �̷��� �����ؾ� �Ѵ�.
	//delete Array; // ���� �̷��� �ϸ� �ȵȴ�. �̷��� �ϸ� Array[0]�κи� �Ҵ� ������ �ȴ�.
	Array = nullptr;
}

void SimplePractice() {
	/*int* SimpleArray = new int[3];
	int InputNumber = 0;
	printf("���ڸ� �Է��ϼ��� : ");
	std::cin >> InputNumber;

	while (InputNumber != 0) {

		int Size = sizeof(SimpleArray)/sizeof(SimpleArray[0]) + 1 ;
		SimpleArray = new int[Size];

		*(SimpleArray + (Size - 1)) = InputNumber;
		printf("���ڸ� �Է��ϼ��� : ");
		std::cin >> InputNumber;
		int i = 0;
	}
	delete[] SimpleArray;
	SimpleArray = nullptr;*/
	const int StartSize = 3;
	const int ExitInput = -1;	// �Է� ���ᰪ or ��ĭ ǥ����
	int* Array = new int[StartSize] {0};
	for (int i = 0; i < StartSize; i++)
	{
		Array[i] = ExitInput;
	}
	int CurrentIndex = 0;
	int CurrentSize = StartSize;

	int InputNumber = 0;

	while (InputNumber != ExitInput) {
		printf("�迭�� ���� ���ڸ� �Է��ϼ��� : ");
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
		printf("�Էµ� ������ : ");
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

	printf("���� ���� �Է� : ");
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

	printf("-- ��ǻ�Ͱ� ���� ���� : %d -- \n", HighLowNumber);
	printf("���̷ο� ����! 5�� �ȿ� ���߼ž� �մϴ�. \n");
	printf("1 ~ 100 ������ ���ڸ� ��󺸼��� : ");
	std::cin >> UserNumber;
	Count++;

	while ((UserNumber != HighLowNumber) && (Count != 5)) {
		
		HighLowArray[Index] = UserNumber;
		Index++;

		if (UserNumber > HighLowNumber) {
			printf("�� ����\n");
		}
		else
		{
			printf("�� ����\n");
		}
		Count++;
		printf("���ڸ�  �ٽ� ��󺸼��� : ");
		std::cin >> UserNumber;
	}
	if (UserNumber == HighLowNumber) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("Ż���Դϴ�.\n");
	}
		HighLowArray[Index] = UserNumber;
	
	printf("�÷��̾ ���ݱ��� ������ �� : ");
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

	printf("==�ؽ�Ʈ �̷� Ż�� ����==\n");

	// �̷� �迭
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

		// �÷��̾ E�� ������ �� ���� �ݺ�
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

		printf("�̵��� �� �ִ� ������ �����ϼ��� (w: ��, s: �Ʒ�, a: ����, d: ������) :\n ");
		printf("�Է��� �� �ִ� ����: \n"); // �Է��� �� �ִ� ���� ���
		int AvailabelDirection = 0;
		if ((Maze[PlayerY - 1][PlayerX] == 0) || (Maze[PlayerY - 1][PlayerX] == 3)) {
			printf("w(��) ");
			AvailabelDirection |= W;
		}
		if (Maze[PlayerY][PlayerX - 1] == 0 || (Maze[PlayerY][PlayerX - 1] == 3)) {
			printf("a(��) ");
			AvailabelDirection |= A;
		}
		if (Maze[PlayerY][PlayerX + 1] == 0 || (Maze[PlayerY][PlayerX + 1] == 3)) {
			printf("d(��) ");
			AvailabelDirection |= D;
		}
		if (Maze[PlayerY + 1][PlayerX] == 0 || (Maze[PlayerY + 1][PlayerX] == 3)) {
			printf("s(��) ");
			AvailabelDirection |= S;
		}

		printf("\n");
		while (true) {

			printf("���� �Է� : ");
			char Direction = 0;
			std::cin >> Direction;


			if ((Direction == 'D' || Direction == 'd') && (D & AvailabelDirection)) {
				// �Է°��� D,d �̰� ������ �̵� �����̸�
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

				printf("�߸��� �Է��Դϴ�. �̵��� �� �ִ� ���� �߿��� �����ϼ���.\n");
				continue;
			} // �Է��� �� �ִ� ������ �ƴϸ�
		
			// �̵� �� ���� Ȯ���� ���� ���� �����ų� HP ȸ��
			//int Battleprobability = rand() & 100 + 1;
			//int Recoverprobability = rand() & 100 + 1;

			//if ((Battleprobability > 0 && Battleprobability <= 20) && !(Recoverprobability > 0 && Recoverprobability <= 10)) {
			//	PlayerHP = StartMazeBattle(PlayerHP);
			//	if (PlayerHP <= 0) {
			//		printf("�÷��̾ �׾����ϴ�. ������ �����մϴ�. \n");
			//		//break;
			//		return 0;
			//	}
			//}
			//if (!(Battleprobability > 0 && Battleprobability <= 20) && (Recoverprobability > 0 && Recoverprobability <= 10)) {
			//	PlayerHP = RecoveryHP(PlayerHP);
			//}

			// �̵� �� ���� Ȯ���� ���� ���� �����ų� ȸ���� ������
			int Battleprobability = rand() & 100 + 1;
			int Recoverprobability = rand() & 100 + 1;
			MonsterData M;

			if ((Battleprobability > 0 && Battleprobability <= 20) && !(Recoverprobability > 0 && Recoverprobability <= 10)) {
				MazeRandomMonsterBattle(P, M);
				if (P.PlayerHP <= 0) {
					printf("�÷��̾ �׾����ϴ�. ������ �����մϴ�. \n");
					return 0;
				}
			}
			if (!(Battleprobability > 0 && Battleprobability <= 20) && (Recoverprobability > 0 && Recoverprobability <= 10)) {
				MeetHealer(P,M);
			}

			// �̵� �� ���� Ȯ���� ���� ���� ������ ��ġ��� �������� HP ȸ��
			//int Battleprobability = rand() & 100 + 1;
			//if ((Battleprobability > 0 && Battleprobability <= 20)) {
			//	int PlayerHp = BattleResultPlayerHP(PlayerY, PlayerX);
			//	if (PlayerHp <= 0) {
			//		printf("�÷��̾ �׾����ϴ�. ������ �����մϴ�. \n");
			//		//break;
			//		return 0;
			//	}
			//}

			break;

		}

	}

	printf("�ڡ١ڡ١ڡٰ��� ����ڡ١ڡ١ڡ�\n");
	return 123;

}


int RecoveryHP(int PlayerHP)
{
	printf("\n\n�ڡڡڡڡڡڡڡڡڡڡڡڡڡ�HP ȸ���ڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n\n");
	printf("�÷��̾��� ü���� %d���� 100���� ȸ���Ǿ����ϴ�.\n\n", PlayerHP);
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

	printf("\n\n�ڡڡڡڡڡڡڡڡڡڡڡڡڸ��� �����ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n");
	printf("������ �����մϴ�.\n�÷��̾� ü�� : %d, ���� ü�� : %d \n�÷��̾� ���� ���� \n",PlayerHP,MonsterHP);

	while ((PlayerHP > 0) && (MonsterHP > 0)) {
		
		if (Turn == PLAYER) {
			//�÷��̾� ���� ����
			printf("\n�� �÷��̾� ���� \n");
			Damage = TurnMazeBattle();
			MonsterHP -= Damage;
			printf("���� ���� ü�� : %d \n", MonsterHP);
			Turn = MONSTER;
		}
		else {
			//���� ���� ����
			printf("\n�� ���� ���� \n");
			Damage = TurnMazeBattle();
			PlayerHP -= Damage;
			printf("�÷��̾� ���� ü�� : %d \n\n", PlayerHP);
			Turn = PLAYER;
		}
	}

	if (PlayerHP > 0) {
		printf("�÷��̾��� �¸��Դϴ�.\n");
		printf("�÷��̾��� ���� ü�� : %d \n", PlayerHP);
	}
	else {
		printf("�÷��̾��� �й��Դϴ�.\n");
	}

	return PlayerHP;
}

int TurnMazeBattle()
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
