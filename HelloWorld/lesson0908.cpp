#include "lesson0908.h"
#include <stdio.h>
#include <iostream>
#include <limits.h>

int Lesson0908() {
	srand(time(0));
	// 배열
	int a = 10;
	int Array[5];	// int 5개를 관리하는 배열
	Array[0] = 10;	// 배열의 첫번째 요소에 10을 대입한다.
	Array[3] = 40;	// 배열의 4번째 요소에 40을 대입한다.

	//Array[5] = 60;	// 버퍼오버런. 배열 영역 밖을 접근하려고 하기 때문에 에러가 발생한다.

	int Array2[5] = { 1,2,3,4,5 };
	int Array3[5] = { 1,2,0 };

	int Array4[5] = { 0 };

	const int Size = 5;
	int Array5[Size] = {};
	sizeof(Array5);	// Array5의 전체 바이트 크기를 알 수 있다.
	sizeof(Array5[0]); // Array5의 요소 하나의 크기를 알 수 있다.
	int ElementCount = sizeof(Array5) / sizeof(Array5[0]);	// Array5의 요소 개수

	//int Size2 = 5;
	//int Array6[Size2] = {}; // 배열 선언할 때 크기를 변수로 지정할 수는 없다.




	// 캐스트
	//int a = 10;
	//float b = 15.5f;

	//a = (int)b; // b를 int형으로 캐스팅해서 a에 대입한다. ( C스타일, 명시적 캐스팅)
	//a = b;		// b를 a에 대입한다. 그런데 a와 b는 타입이 다르니까 b를 a로 암시적으로 캐스팅해서 대입한다. ( C스타일, 암시적 스타일)
	//b = a;		// 암시적 캐스팅은 대체로 표현이 작은 쪽에서 큰 쪽으로는 문제 없는 경우가 많다.

	//a = static_cast<int>(b); // b를 int형으로 캐스팅해서 a에 대입한다. ( C++스타일, 명시적 캐스팅)

	// 이차원 배열
	int Array6[4][3] = { {1,2,3},{4,5,6}, {7,8,9},{0,1,2} };
	//int 3개짜리 배열이 4줄 들어있다
	//// 사실 int Array[12]랑 메모리 구조가 같다.
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
	printf("Array 만들고 초기화 해보기 \n");
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
	printf("Array의 합은 %d 이고 평균은 %.2f 입니다.\n", Sum, Average);
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
	printf("배열의 최대값은 %d, 최소값은 %d 입니다.\n", Max, Min);
	return 0;
}

// 피셔-예이츠 알고리즘
void Shuffle(int Array[], int Length)
{
	/*
	1. 배열의 마지막 요소에서 첫 요소까지 순회
	2. 현재 요소의 인덱스(i)와 0 ~ i 중 임의의 인덱스(j)를 선택
	3. i 번째 요소와 j번째 요소를 서로 교환
	4. i가 0이 될 때까지 반복
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
	//ReadData = 10; // 읽기는 가능하지만 쓰기는 안됨
}

void Day0908_ReF()
{
	int Number = 10;
	int Number2 = 10;
	int& Ref = Number;	// Number의 참조는 Ref다.
	//

	TestRef(Number,Number2);

	int i = 0;
}


// 실습
int PracticeP1() {
	int Array[6] = {};
	int DiceNumber = 0;
	const int Times = 1000000;

	for (int i = 0; i < Times; i++) {
		DiceNumber = ThrowDiceWhatNumber();
		Array[DiceNumber]++;
	}

	for (int j = 0; j < 6; j++) {
		printf("주사위 %d : %d번 \n", (j+1), Array[j]);
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
	
	printf("로또 번호 생성기 : ");
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
	while (true) { // 찜찜...

	printf("방향 입력 : ");
	char Direction = 0;
	std::cin >> Direction;
		
		
		 if ((Direction == 'D' || Direction == 'd') && (D & AvailabelDirection )) {
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
		 else{
				
				 printf("잘못된 입력입니다. 이동할 수 있는 방향 중에서 선택하세요.\n");
				 continue;
				 /*printf("방향 입력 : ");
				 char Direction = 0;
				 std::cin >> Direction;*/
		 } // 입력할 수 있는 방향이 아니면
		 break;
	}
		
	}

	printf("★☆★☆★☆게임 종료★☆★☆★☆\n");

	return 0;
}

