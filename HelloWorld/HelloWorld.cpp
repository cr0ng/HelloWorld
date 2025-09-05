#define _CRT_SECURE_NO_WARNINGS


#include <iostream> // 입출력 관련 (cout)
#include <stdio.h>
#include <cstdio>  // stdio.h에 네임스페이스 추가한 래퍼
#include "header.h"
#include "TestMath.h"
#include "practice0905.h"
#include "HW0906.h"

//using namespace std;

//int lesson0902();
//int lesson0903();
//int lesson0904();


int main() // 엔트리 포인트 (코드가 시작되는 곳)
{


	//lesson0902();	// 9월 2일 내용
	//lesson0903();	// 9월 3일 내용
	//lesson0904();	// 9월 4일 내용
	//lesson0905();	// 9월 5일 내용
	//int Number = Sum(1, 7); // Sum 함수를 호출했다. 파라미터로 1과 7을 넘김. 그리고 8을 돌려받았다.
	//Number = Multiply(2, 3);
	//Number = Multiply(7);
	//Number = Divide(8,2);
	//Number = Minuse(7,3);
	//
	//printf("%d\n", Number);
	//TestRecurcive(5);
	//float Number2 = Add(10.5f, 20.4f); // 만나면 그 때 Add 생성
	//int Number3 = Square(2);
	//int Number4 = Number * Number;

	//float Number1 = 10.2f;
	//float Number2 = 2.0f;

	//1번 문제
	/*int Min = -1;
	int Max = -1;
	int Result = 0;

	printf("범위의 가장 작은 수와 가장 큰 수를 작성하세요 : \n");
	std::cin >> Min >> Max;

	Practice0905_01(Min, Max);
	*/

	// 2번 문제
	/*int Age;
	printf("당신의 나이를 입력해주세요 : ");
	std::cin >> Age;

	Practice0905_02(Age);*/

	// 3번 문제
	/*int Radius;
	printf("원의 반지름을 입력하세요 : ");
	std::cin >> Radius;
	Practice0905_03(Radius);*/

	// 4번 문제
	/*int Number = 0;
	printf("숫자를 입력하세요 : ");
	std::cin >> Number;
	OddOrNot(Number);*/

	// 5번 문제
	/*int Score = 0;
	printf("성적 분류 함수입니다. 점수를 입력하면 등급이 출력됩니다. 종료 코드[101]\n");
	printf("점수를 입력하세요 : ");
	std::cin >> Score;
	ScoreRanking(Score);

	while (Score <= 100) {
		printf("점수를 입력하세요 : ");
		std::cin >> Score;

		ScoreRanking(Score);
	}*/
	
	// 6번 문제
	/*enum Item {
		KEY = 1 << 0,
		FUSE = 1 << 1 ,
		LIGHT = 1 << 2,
		NOTE = 1 << 3
	};

	int Inventory = 0;
	int PlayerSelect = -1;

	while (PlayerSelect != 4) {

		printf("어떤 행동을 할까요 [1: 아이템 줍기, 2: 아이템 사용, 3:토글하기 4:종료]\n");
		std::cin >> PlayerSelect;

		switch (PlayerSelect)
		{
			case 1 :
			{
				printf("어떤 아이템을 주울까요? [0:열쇠, 1:퓨즈, 2:손전등, 3:노트]  :\n");
				int AddItem;
				std::cin >> AddItem;

				Inventory = GetItem(Inventory,AddItem);
			}
			break;
			case 2:
			{
				printf("어떤 아이템을 버릴까요? [0:열쇠, 1:퓨즈, 2:손전등, 3:노트]  :\n");
				int RemoveItem = 0;
				std::cin >> RemoveItem;

				Inventory = LoseItem(Inventory, RemoveItem);
			}
			break;
			case 3:
			{
				printf("어떤 아이템을 반전시킬까요? [0:열쇠, 1:퓨즈, 2:손전등, 3:노트]  :\n");
				int ToggleItem = 0;
				std::cin >> ToggleItem;

				Inventory = Toggle2Item(Inventory, ToggleItem);
			}
			break;
			break;
			default:
			break;
		}
		printf("* 인벤토리 : ");
		if ((Inventory & KEY) != 0)
		{
			printf("열쇠 ");
		}
		if ((Inventory & FUSE) != 0)
		{
			printf("퓨즈 ");
		}
		if ((Inventory & LIGHT) != 0)
		{
			printf("손전등 ");
		}
		if ((Inventory & NOTE) != 0)
		{
			printf("노트 ");
		}
		if (((Inventory & KEY) == 0) && ((Inventory & FUSE) == 0) && ((Inventory & LIGHT) == 0) && ((Inventory & NOTE) == 0)) {
			printf("비어있음 ");
		}
		printf("*\n\n");
	}*/

	// 7번 문제
	/*int PyramidFloor = 0;

	printf("몇 층짜리 피라미드를 지을까요? : ");
	std::cin >> PyramidFloor;
	DrawPyramid(PyramidFloor);*/

	// 템플릿 함수 
	//int FirstNumber = 0, SecondNumber = 0;
	//printf("두 수를 입력하세요  : ");
	//std::cin >> FirstNumber >> SecondNumber;

	//// 1. Min 함수
	//printf("\n두 수 중에 작은 숫자는 %d 입니다. \n", MinNum(FirstNumber, SecondNumber));

	//// 2. Max 함수
	//printf("\n두 수 중에 큰 숫자는 %d 입니다. \n", MaxNum(FirstNumber, SecondNumber));

	/*int FirstNumber = 0, SecondNumber = 0, ThirdNumber;
	printf("숫자 세 개(value, min, max)를 입력하세요  : ");
	std::cin >> FirstNumber >> SecondNumber >> ThirdNumber;
	printf("%d",Clamp(FirstNumber, SecondNumber, ThirdNumber));*/

	/*int InputNumber = 0;
	printf("팩토리얼을 구하고 싶은 수를 입력해 : \n");
	std::cin >> InputNumber;
	printf("%d! = ", InputNumber);
	int Result = FactorialNumber(InputNumber);
	printf("%d \n", Result);*/






	// 1번 문제
	int AvgNumber1 = 0, AvgNumber2 = 0, AvgNumber3 = 0;
	printf("평균을 구할 3개의 숫자를 입력하세요  :");
	std::cin >> AvgNumber1 >> AvgNumber2 >> AvgNumber3;

	// 2번 문제
	//printf("%d", SalePrice(100, 50));
	return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
