#include "lesson0908.h"
#include <stdio.h>
#include <iostream>
#include <limits.h>

int Lesson0908() {
	srand(time(0));
	// �迭
	int a = 10;
	int Array[5];	// int 5���� �����ϴ� �迭
	Array[0] = 10;	// �迭�� ù��° ��ҿ� 10�� �����Ѵ�.
	Array[3] = 40;	// �迭�� 4��° ��ҿ� 40�� �����Ѵ�.

	//Array[5] = 60;	// ���ۿ�����. �迭 ���� ���� �����Ϸ��� �ϱ� ������ ������ �߻��Ѵ�.

	int Array2[5] = { 1,2,3,4,5 };
	int Array3[5] = { 1,2,0 };

	int Array4[5] = { 0 };

	const int Size = 5;
	int Array5[Size] = {};
	sizeof(Array5);	// Array5�� ��ü ����Ʈ ũ�⸦ �� �� �ִ�.
	sizeof(Array5[0]); // Array5�� ��� �ϳ��� ũ�⸦ �� �� �ִ�.
	int ElementCount = sizeof(Array5) / sizeof(Array5[0]);	// Array5�� ��� ����

	//int Size2 = 5;
	//int Array6[Size2] = {}; // �迭 ������ �� ũ�⸦ ������ ������ ���� ����.




	// ĳ��Ʈ
	//int a = 10;
	//float b = 15.5f;

	//a = (int)b; // b�� int������ ĳ�����ؼ� a�� �����Ѵ�. ( C��Ÿ��, ����� ĳ����)
	//a = b;		// b�� a�� �����Ѵ�. �׷��� a�� b�� Ÿ���� �ٸ��ϱ� b�� a�� �Ͻ������� ĳ�����ؼ� �����Ѵ�. ( C��Ÿ��, �Ͻ��� ��Ÿ��)
	//b = a;		// �Ͻ��� ĳ������ ��ü�� ǥ���� ���� �ʿ��� ū �����δ� ���� ���� ��찡 ����.

	//a = static_cast<int>(b); // b�� int������ ĳ�����ؼ� a�� �����Ѵ�. ( C++��Ÿ��, ����� ĳ����)

	// ������ �迭
	int Array6[4][3] = { {1,2,3},{4,5,6}, {7,8,9},{0,1,2} };
	//int 3��¥�� �迭�� 4�� ����ִ�
	//// ��� int Array[12]�� �޸� ������ ����.
	//int test = Array6[1][2];	// test = 6
	int Array7[12] = { 1,2,3,4,5,6,7,8,9,0,1,2 };

	//int i = 0;

	//Shuffle(Array7, 12);
	//Day0908_ReF();

	//Practice1();
	//Practice2();
	//Practice3();

	//PracticeP1();
	//PracticeP2();
	//LottoNumber();
	EscapeMaze();

	return 0;
}

int Practice1()
{
	int Array[5] = {1,2,3,4,5};
	printf("Array ����� �ʱ�ȭ �غ��� \n");
	return 0;
}

int Practice2()
{
	int Array[5] = { 1,2,3,4,52 };
	int Sum = 0;
	float Average = 0.0f;
	int ArrayCount = static_cast<int>(sizeof(Array) / sizeof(Array[0]));


	for (int i=0; i < ArrayCount; i++) {
		Sum += Array[i];
	}
	Average = Sum / static_cast<float>(ArrayCount);
	printf("Array�� ���� %d �̰� ����� %.2f �Դϴ�.\n", Sum, Average);
	return 0;
}

int Practice3()
{
	int Array[10] = { 10,8,55,62,3,123,40,15,32,63 };
	int Min = Array[0], Max = Array[0];
	int ElementCount = sizeof(Array) / sizeof(Array[0]);
	for (int i = 0; i < ElementCount; i++) {
		
		if (Array[i] <= Min) {
			Min = Array[i];
		}
		
		if(Array[i] >= Max){
			Max = Array[i];
		}
	}
	printf("�迭�� �ִ밪�� %d, �ּҰ��� %d �Դϴ�.\n", Max, Min);
	return 0;
}

// �Ǽ�-������ �˰���
void Shuffle(int Array[], int Length)
{
	/*
	1. �迭�� ������ ��ҿ��� ù ��ұ��� ��ȸ
	2. ���� ����� �ε���(i)�� 0 ~ i �� ������ �ε���(j)�� ����
	3. i ��° ��ҿ� j��° ��Ҹ� ���� ��ȯ
	4. i�� 0�� �� ������ �ݺ�
	*/

	for (int i = Length - 1; i > 0; i-- )
	{
		int j = rand() % (i + 1);
		int Temp = Array[i];
		Array[i] = Array[j];
		Array[j] = Temp;
	}
}

void TestRef(int& OutData, const int& ReadData)
{
	OutData *= ReadData;
	//ReadData = 10; // �б�� ���������� ����� �ȵ�
}

void Day0908_ReF()
{
	int Number = 10;
	int Number2 = 10;
	int& Ref = Number;	// Number�� ������ Ref��.
	//

	TestRef(Number,Number2);

	int i = 0;
}


// �ǽ�
int PracticeP1() {
	int Array[6] = {};
	int DiceNumber = 0;
	const int Times = 1000000;

	for (int i = 0; i < Times; i++) {
		DiceNumber = ThrowDiceWhatNumber();
		Array[DiceNumber]++;
	}

	for (int j = 0; j < 6; j++) {
		printf("�ֻ��� %d : %d�� \n", (j+1), Array[j]);
	}

	return 0;
}

int ThrowDiceWhatNumber()
{
	int DiceNumber = rand() % 6;
	return DiceNumber;
}

int PracticeP2()
{
	int ArrayP2[6] = { 2,4,6,8,10,12 };
	int Size = sizeof(ArrayP2) / sizeof(ArrayP2[0]);
	//printf("size: %d", Size);
	ReverseArray(ArrayP2, Size);
	for (int i = 0; i < Size; i++) {
		printf("%d ", ArrayP2[i]);
	}
	return 0;
}

void ReverseArray(int Array[], int Size) {

	for (int i = 0; i < Size/2 ; i++)
	{
		int Temp = Array[i];
		Array[i] = Array[Size-i-1];
		Array[Size - i-1] = Temp;
	}
}

int LottoNumber()
{
	const int Total = 6;
	int LottoNumbers[Total] = {};
	int LottoNumber = 0;
	
	printf("�ζ� ��ȣ ������ : ");
	for (int i = 0; i < Total; i++) {
		LottoNumber = rand() % 45 + 1;
		for (int j = 0; j < Total; j++) {
			while (LottoNumber == LottoNumbers[j]) {
				LottoNumber = rand() % 45 + 1;
			}
		}
		LottoNumbers[i] = LottoNumber;

		printf("%d ", LottoNumbers[i]);
	}
	return 0;
}

int EscapeMaze()
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
	while (true) { // ����...

	printf("���� �Է� : ");
	char Direction = 0;
	std::cin >> Direction;
		
		
		 if ((Direction == 'D' || Direction == 'd') && (D & AvailabelDirection )) {
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
		 else{
				
				 printf("�߸��� �Է��Դϴ�. �̵��� �� �ִ� ���� �߿��� �����ϼ���.\n");
				 continue;
				 /*printf("���� �Է� : ");
				 char Direction = 0;
				 std::cin >> Direction;*/
		 } // �Է��� �� �ִ� ������ �ƴϸ�
		 break;
	}
		
	}

	printf("�ڡ١ڡ١ڡٰ��� ����ڡ١ڡ١ڡ�\n");

	return 0;
}

