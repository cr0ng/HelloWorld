#include <iostream>

int lesson0905() {
	// TestMath.h, TestMath.cpp 파일 참고
	// Practice0905.h, Practice0905.cpp
	//printf("lesson0905");


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

return 0;
}

//int Sum(int Test1, int Test2); // 리턴타입이 int고 이름은 Sum이고 파라미터는 int 2개인 함수를 선언했다.
//int Sum(int, int);	// 위 함수와 동일, 선언할 때는 수의 파라미터 이름은 생략 가능

