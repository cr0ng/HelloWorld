#include <iostream>

int lesson0905() {
	// TestMath.h, TestMath.cpp ���� ����
	// Practice0905.h, Practice0905.cpp
	//printf("lesson0905");


	//1�� ����
	/*int Min = -1;
	int Max = -1;
	int Result = 0;

	printf("������ ���� ���� ���� ���� ū ���� �ۼ��ϼ��� : \n");
	std::cin >> Min >> Max;

	Practice0905_01(Min, Max);
	*/

	// 2�� ����
	/*int Age;
	printf("����� ���̸� �Է����ּ��� : ");
	std::cin >> Age;

	Practice0905_02(Age);*/

	// 3�� ����
	/*int Radius;
	printf("���� �������� �Է��ϼ��� : ");
	std::cin >> Radius;
	Practice0905_03(Radius);*/

	// 4�� ����
	/*int Number = 0;
	printf("���ڸ� �Է��ϼ��� : ");
	std::cin >> Number;
	OddOrNot(Number);*/

	// 5�� ����
	/*int Score = 0;
	printf("���� �з� �Լ��Դϴ�. ������ �Է��ϸ� ����� ��µ˴ϴ�. ���� �ڵ�[101]\n");
	printf("������ �Է��ϼ��� : ");
	std::cin >> Score;
	ScoreRanking(Score);

	while (Score <= 100) {
		printf("������ �Է��ϼ��� : ");
		std::cin >> Score;

		ScoreRanking(Score);
	}*/

	// 6�� ����
	/*enum Item {
		KEY = 1 << 0,
		FUSE = 1 << 1 ,
		LIGHT = 1 << 2,
		NOTE = 1 << 3
	};

	int Inventory = 0;
	int PlayerSelect = -1;

	while (PlayerSelect != 4) {

		printf("� �ൿ�� �ұ�� [1: ������ �ݱ�, 2: ������ ���, 3:����ϱ� 4:����]\n");
		std::cin >> PlayerSelect;

		switch (PlayerSelect)
		{
			case 1 :
			{
				printf("� �������� �ֿ���? [0:����, 1:ǻ��, 2:������, 3:��Ʈ]  :\n");
				int AddItem;
				std::cin >> AddItem;

				Inventory = GetItem(Inventory,AddItem);
			}
			break;
			case 2:
			{
				printf("� �������� �������? [0:����, 1:ǻ��, 2:������, 3:��Ʈ]  :\n");
				int RemoveItem = 0;
				std::cin >> RemoveItem;

				Inventory = LoseItem(Inventory, RemoveItem);
			}
			break;
			case 3:
			{
				printf("� �������� ������ų���? [0:����, 1:ǻ��, 2:������, 3:��Ʈ]  :\n");
				int ToggleItem = 0;
				std::cin >> ToggleItem;

				Inventory = Toggle2Item(Inventory, ToggleItem);
			}
			break;
			break;
			default:
			break;
		}
		printf("* �κ��丮 : ");
		if ((Inventory & KEY) != 0)
		{
			printf("���� ");
		}
		if ((Inventory & FUSE) != 0)
		{
			printf("ǻ�� ");
		}
		if ((Inventory & LIGHT) != 0)
		{
			printf("������ ");
		}
		if ((Inventory & NOTE) != 0)
		{
			printf("��Ʈ ");
		}
		if (((Inventory & KEY) == 0) && ((Inventory & FUSE) == 0) && ((Inventory & LIGHT) == 0) && ((Inventory & NOTE) == 0)) {
			printf("������� ");
		}
		printf("*\n\n");
	}*/

	// 7�� ����
	/*int PyramidFloor = 0;

	printf("�� ��¥�� �Ƕ�̵带 �������? : ");
	std::cin >> PyramidFloor;
	DrawPyramid(PyramidFloor);*/

	// ���ø� �Լ� 
	//int FirstNumber = 0, SecondNumber = 0;
	//printf("�� ���� �Է��ϼ���  : ");
	//std::cin >> FirstNumber >> SecondNumber;

	//// 1. Min �Լ�
	//printf("\n�� �� �߿� ���� ���ڴ� %d �Դϴ�. \n", MinNum(FirstNumber, SecondNumber));

	//// 2. Max �Լ�
	//printf("\n�� �� �߿� ū ���ڴ� %d �Դϴ�. \n", MaxNum(FirstNumber, SecondNumber));

	/*int FirstNumber = 0, SecondNumber = 0, ThirdNumber;
	printf("���� �� ��(value, min, max)�� �Է��ϼ���  : ");
	std::cin >> FirstNumber >> SecondNumber >> ThirdNumber;
	printf("%d",Clamp(FirstNumber, SecondNumber, ThirdNumber));*/

	/*int InputNumber = 0;
	printf("���丮���� ���ϰ� ���� ���� �Է��� : \n");
	std::cin >> InputNumber;
	printf("%d! = ", InputNumber);
	int Result = FactorialNumber(InputNumber);
	printf("%d \n", Result);*/

return 0;
}

//int Sum(int Test1, int Test2); // ����Ÿ���� int�� �̸��� Sum�̰� �Ķ���ʹ� int 2���� �Լ��� �����ߴ�.
//int Sum(int, int);	// �� �Լ��� ����, ������ ���� ���� �Ķ���� �̸��� ���� ����

