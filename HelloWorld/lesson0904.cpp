#include <iostream>
#include <ctime>
#include <time.h>
#include <random>

int lesson0904() {

	//int flag = 0b1010;	
	//// 0b0001 = ���� Ű�� ��������
	//// 0b0010 = ������ Ű�� ��������
	//// 0b0100 = ���� Ű�� ��������
	//// 0b1000 = �Ʒ��� Ű�� ��������

	//if ((flag & 0b0010) != 0b0000) {
	//	// ������ Ű�� ������ �ִ�.
	//}
	//else {
	//	// ������ Ű�� ������ ���� �ʴ�.
	//}

	//flag = flag | 0b0001; // ��� = 0b1011;

	//int result = flag ^ 0b0001; // ��� = 0b1011;
	//result = 0b1011 ^ 0b0001;	// ��� = 0b1010;

	//int test = 0b0001;
	//test = ~test; // ���� Ű�� ������ ������ ��� ����

	//emum : ����鿡�� ����� �˾ƺ��� ���� �̸��� �ٿ� ���� ��
	//enum Key 
	//{
	//	// ���� ���� �ʾƵ� ������ ���� �ο�
	//	Up		= 1 << 0,	//0b0001
	//	Down	= 1 << 1,	//0b0010
	//	Left	= 1 << 2,	//0b0100
	//	Right	= 1 << 3,	//0b1000
	//};

	//if ((flag & Up) != 0)
	//{
	//	// ���� ����Ű�� ������ �ִ�.
	//}

	// ����� �ϳ� �Է� �ް� Ȧ������ ¦������ ����ϱ�( % ������ ��� ����)
	/*int Number = 0;

	printf("���ڸ� �Է��ϼ��� : ");
	std::cin >> Number;

	if ((Number & 1) != 0) {
		printf("�ش� ���ڴ� Ȧ���Դϴ�. \n");
	}
	else {
		printf("�ش� ���ڴ� ¦���Դϴ�. \n");
	}*/

	// ��� ���� 10�� ���
	//for (int i = 0, int j = 0; i < 10; i++) { // ������ ������ �� ���� �ִ�.
	/*for (int i = 0; i < 10; i++) {
		printf("Hello World (For��) : %d\n", i);
	}*/

	// 3�� ����� ������ ������ ���
	//int Count = 1;
	//while ((Count % 3) != 0) {	// while()�� ������ ���̸� �ڵ� �� ����
	//	printf("Hello World (While��) : %d\n", Count);
	//	Count++;
	//}

	//Count = 1;
	//do {
	//	printf("Hello World (do-While��) : %d\n", Count);
	//	Count++;
	//} while ((Count % 3) != 0); // �ϴ� �� �� �����ϰ� while() ������ ���̸� �ڵ� �� ����

	// -----------------------------------------------------------------------------------------

	// 1�� ����
	//int InsertNumber = 0; // �����Ⱚ�� �����ϱ� ����

	//printf("0�� �Է��ϸ� �Էµ� ��� ������ ���� ��µ˴ϴ�. \n");
	//printf("���ڸ� �Է��ϼ��� ");
	//std::cin >> InsertNumber;

	//int Sum = InsertNumber;

	//while (InsertNumber != 0 ) {
	//	printf("���ڸ� �Է��ϼ��� ");
	//	std::cin >> InsertNumber;
	//	Sum += InsertNumber;
	//}
	//
	///*do {
	//	printf("���ڸ� �Է��ϼ��� ");
	//	std::cin >> InsertNumber;
	//	Sum += InsertNumber;
	//} while (InsertNumber != 0);*/

	//printf("\n�Է��� ��� ������ ���� : %d \n", Sum);

	//// 2�� ����
	//int MultiplicationNumber = 0;
	//printf("\n\n� ������ �������� ����ұ�� ");

	//std::cin >> MultiplicationNumber;

	//for (int i = 1; i < 10; i++) {
	//	printf("%d * %d = %d \n", MultiplicationNumber, i, MultiplicationNumber* i);
	//}

	//// 3�� ����
	//int FindOddNum = 0;

	//printf("\n\n���ڸ� �Է��ϸ� �� �ȿ� �ִ� Ȧ���� ��� ��µ˴ϴ� : ");
	//std::cin >> FindOddNum;

	//for (int i = 0; i <= FindOddNum; i++) {
	//	if (i % 2 == 1) {
	//		printf("%d ", i);
	//	}
	//}

	//// 4�� ����
	//printf("\n\n1 ~ 100���� ���� �� 7�� ����� ����ϱ�\n");

	//for (int i = 1; i <= 100; i++) {
	//	if (i % 7 == 0) {
	//		printf("%d ", i);
	//	}
	//}
	//
	//// 5�� ����
	/*int PyramidFloor = 0;

	printf("\n\n�� ��¥�� �Ƕ�̵带 �������? : ");
	std::cin >> PyramidFloor;

	for (int i = 0; i < PyramidFloor; i++) {
		for (int j = (PyramidFloor - (i+1)) ; j > 0 ; j--) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}*/

	//05.14
	//printf("���� �ð��� �� ������ �Է��Ͻÿ� : \n");

	//float Secs;
	//std::cin >> Secs;
	//clock_t Delay = Secs * CLOCKS_PER_SEC;

	//printf("ī��Ʈ�� �����մϴ�. \a\n");
	//clock_t Start = clock();
	//while (clock() - Start < Delay)
	//{
	//	/*if (((clock() - Start) % 1000) == 0) {
	//	printf("%d �� \n", clock() - Start);
	//	}*/
	//}

	//printf("���� \a\n");


	// C ��Ÿ���� ���� ����
	//srand(time(0)); // �ð��� �׻� �ٲ�
	//srand(0); // �׽�Ʈ������ ����

	//for (int i = 0; i < 10; i++) {
	//	int RandomNumber = rand();
	//	printf("������ ���� : %d\n", RandomNumber);
	//}
	
	// 0 ~ 5 ������ ���ڸ� �������� ���ϰ� �ʹ�.
	//int RandomNumber1 = rand() % 6;
	
	// 1 ~ 6 ������ ���ڸ� �������� ���ϰ� �ʹ�.
	//int RandomNumber1 = rand() % 6 + 1;

	// C++ ��Ÿ���� ���� ����
	/*std::random_device RandomDevice;
	std::mt19937 Generate(RandomDevice());*/

	//printf("�յ���� : ");
	//std::uniform_int_distribution<> uniformDis(1, 100); // 1 ~ 100 ���� ��
	//for (int i = 0; i < 10; i++) {
	//	int Number = uniformDis(Generate);
	//	printf("%d", Number);
	//	if (i < 9) {
	//		printf(", ");
	//	}
	//}
	//printf("\n\n");

	//printf("���Ժ��� : "); // Ư�� �� ���ַ� ������ �ϴ°�
	//std::normal_distribution<> normalDis(80, 10); // ������ ����.
	//for (int i = 0; i < 10; i++) {
	//	float fNumber = normalDis(Generate);
	//	printf("%.2f", fNumber);
	//	if (i < 9) {
	//		printf(", ");
	//	}
	//}
	//printf("\n");

	// ------------------------------------------------------------------------------------

	//���� �ǽ�
	// 1�� ����
	/*std::uniform_int_distribution<> ThrowDice(1, 6);

	int CountSix = 0;
	const int ThrowDiceNum = 1000000;
	for (int i = 0; i < ThrowDiceNum; i++) {
		int DiceNumber = ThrowDice(Generate);
		if ((DiceNumber % 6) == 0) {
			CountSix++;
		}
	}

	printf("�ֻ����� %d�� ������ 6�� %d�� ���Խ��ϴ�.\n", ThrowDiceNum, CountSix);*/

	// 2�� ����
	/*enum Key
	{
		ROCK = 1,
		SCISSORS =2,
		PAPER = 3
	};

	srand(time(0));
	int UserHand = 0 , ComputerHand = 0;
	int ComputerScore = 0 , UserScore = 0;
	
	while (!((ComputerScore == 3) || (UserScore == 3))) {
		printf("���������� ������ (1: �ָ�, 2: ����, 3: ��) ");
		std::cin >> UserHand;

		srand(time(0));
		ComputerHand = rand() % 3 + 1;

		printf("����ڴ� : %d, ��ǻ�ʹ� : %d \n", UserHand, ComputerHand);
		switch(ComputerHand) {
			case ROCK:
				if (UserHand == ROCK) {
					printf("���º� \n\n ");
					break;
				}
				else if (UserHand == SCISSORS) {
					ComputerScore++;
					printf("��ǻ�� �¸� : %d \n\n ", ComputerScore);
					break;
				}
				else {
					UserScore++;
					printf("���� �¸� : %d \n\n ", UserScore);
					break;
				}
			case 2:
				if (UserHand == ROCK) {
					ComputerScore++;
					printf("��ǻ�� �¸� : %d \n\n ", ComputerScore);
					break;
				}
				else if (UserHand == SCISSORS) {
					printf("���º� \n\n ");
					break;
				}
				else {
					UserScore++;
					printf("���� �¸� : %d \n\n ", UserScore);
					break;
				}
			case 3:
				if (UserHand == ROCK) {
					UserScore++;
					printf("���� �¸� : %d \n\n ", UserScore);
					break;
				}
				else if (UserHand == SCISSORS) {
					ComputerScore++;
					printf("��ǻ�� �¸� : %d \n\n ", ComputerScore);
					break;
				}
				else {
					printf("���º� \n\n ");
					break;
				}
		}
	}
	printf("\n\n������ ����Ǿ����ϴ�.\n");
	if (UserScore == 3) {
			printf("�¸��ڴ� �����Դϴ�.");
	}
	else {
		printf("�¸��ڴ� ��ǻ���Դϴ�.\n\n");
	}*/

	// 3��
	/*srand(time(0));

	int HighRowNumber = rand() % 100 + 1;
	int UserNumber = 0;
	int Count = 0;

	printf("-- ��ǻ�Ͱ� ���� ���� : %d -- \n", HighRowNumber);
	printf("���̷ο� ����! 5�� �ȿ� ���߼ž� �մϴ�. \n");
	printf("1 ~ 100 ������ ���ڸ� ��󺸼��� : ");
	std::cin >> UserNumber;
	Count++;

	while ((UserNumber != HighRowNumber) && (Count != 5)) {
		if (UserNumber > HighRowNumber) {
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
	if (UserNumber == HighRowNumber) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("Ż���Դϴ�.\n");
	}*/

	// 4�� ����
	enum Key {
		FLASHLIGHT = 1,
		BATTERIES,
		KEY,
		COIN,
	};

	int UserMovement = 0;
	int Flash = 0, Battery = 0, Key = 0, Coin = 0;
	printf("**���� �κ��丮 : ������� \n");
	printf("������ ��� : ������(1), ���͸�(2), Ű(3), ����(4) \n");
	printf("�������� ������ (0�� �Է��ϸ� �κ��丮�� �����ϴ�.) \n");

	std::cin >> UserMovement;

	while (UserMovement!= 0) {

		if ((UserMovement ^ FLASHLIGHT) == 0) {
			//������ 0000�� ��
			if (Flash == 0) {
				printf(">>�������� �ֿ����ϴ�.<<\n");
				Flash = Flash | FLASHLIGHT; // Flash ������ FLASHLIGHT ������ ����
			}
			else {
				printf(">>�������� ����մϴ�.<<\n");
				Flash = 0; // Flash ������ 0���� �ʱ�ȭ
			}
		}
		else if ((UserMovement ^ BATTERIES) == 0) {
			if (Battery == 0) {
				printf(">>���͸��� �ֿ����ϴ�.<<\n");
				Battery = Battery | BATTERIES; 
			}
			else {
				printf(">>���͸��� ����մϴ�.<<\n");
				Battery = 0;
			}
		}
		else if ((UserMovement ^ KEY) == 0) {
			if (Key == 0) {
				printf(">>Ű�� �ֿ����ϴ�.<<\n");
				Key = Key | KEY; 
			}
			else {
				printf(">>Ű�� ����մϴ�.<<\n");
				Key = 0;
			}
		}
		else if ((UserMovement ^ COIN) == 0) {
			if (Coin == 0) {
				printf(">>������ �ֿ����ϴ�.<<\n");
				Coin = Coin | COIN; 
			}
			else {
				printf(">>������ ����մϴ�.<<\n");
				Coin = 0;
			}
		}
		else {
			printf("�������� �ʴ� ������ �Դϴ�. \n");
		}
		
		printf("**���� �κ��丮 : ");
		if (Flash == 0 && Battery == 0 && Key == 0 && Coin == 0) {
			printf("������� \n");
		}
		if (Flash == 1) {
			printf("������ ");
		}
		if (Battery == 2) {
			printf("���͸� ");
		}
		if (Key == 3) {
			printf("Ű ");
		}
		if (Coin == 4) {
			printf("���� ");
		}

		printf("\n\n�κ� ��� : ������(1), ���͸�(2), Ű(3), ����(4) \n");
		printf("�������� ������ (0�� �Է��ϸ� �κ��丮�� �����ϴ�.) \n");

		std::cin >> UserMovement;

	}
	printf("\n�κ�â�� �ݽ��ϴ�. \n\n\n\n");

	// 5�� ����
	//enum Key {
	//	UserWin =1,
	//	ComputerWin
	//};

	//int ComputerMoney = 10000, UserMoney = 10000;
	//int ComputerDice1 = 0, ComputerDice2 = 0, UserDice1 = 0, UserDice2 = 0, ComputerDiceTotal = 0, UserDiceTotal = 0;
	//int WhoWin = 0; 	
	//int BattingMoney = 0;
	//int Reset = 0; // ���� �� ó�� ����
	//
	//srand(time(0));
	//printf("�ֻ��� ������ �����մϴ�. \n");
	//printf("���� �ݾ� : ��ǻ�� - 10000��, �÷��̾� - 10000��\n\n");

	//while ((UserMoney != 0) && (ComputerMoney != 0 )) {
	//	printf("1�� �ֻ����� �����ϴ�. \n");
	//	ComputerDice1 = rand() % 6 + 1;
	//	UserDice1 = rand() % 6 + 1;

	//	printf("�ֻ����� �����մϴ�\n");
	//	printf("��ǻ�� : %d , �÷��̾� : %d \n\n", ComputerDice1, UserDice1); 

	//	if (WhoWin == 0) {
	//		printf("�� �ǿ� �� ����� ���� �÷��̾ ���� ���� �ݾ��� �����մϴ�. \n���� �ݾ��� �� ����� ������ ���Ͽ��� �մϴ�. \n");
	//		printf("���� �ݾ� : ��ǻ�� - %d��, �÷��̾� - %d��\n", ComputerMoney, UserMoney);
	//		std::cin >> BattingMoney;
	//		if ((BattingMoney > ComputerMoney) || (BattingMoney > UserMoney)) {
	//			printf("�������� �Ѵ� �ݾ��� ������ �� �����ϴ�. �ٽ� �Է��ϼ��� \n");
	//			std::cin >> BattingMoney;
	//		}

	//		printf("���� �ݾ��� %d �̸� �ݾ��� �����˴ϴ�.\n", BattingMoney);
	//		ComputerMoney -= BattingMoney;
	//		UserMoney -= BattingMoney;
	//		/*printf("���� �ݾ� : ��ǻ�� - %d��, �÷��̾� - %d��\n", ComputerMoney, UserMoney);*/
	//	}
	//	else if (WhoWin == UserWin) {
	//			printf("�����ǿ��� �� ��ǻ�Ͱ� ���� �����մϴ�. \n���� �ݾ��� �� ����� ������ ���Ͽ��� �մϴ�. \n");
	//			printf("���� �ݾ� : ��ǻ�� - %d��, �÷��̾� - %d��\n", ComputerMoney, UserMoney);
	//			if (ComputerMoney < UserMoney) {
	//				BattingMoney = rand() % ComputerMoney + 1;
	//			}
	//			else {
	//				BattingMoney = rand() % UserMoney + 1;
	//			}
	//			printf("���� �ݾ��� %d �̸� �ݾ��� �����˴ϴ�.\n", BattingMoney);
	//			ComputerMoney -= BattingMoney;
	//			UserMoney -= BattingMoney;
	//			//printf("���� �ݾ� : ��ǻ�� - %d��, �÷��̾� - %d��\n", ComputerMoney, UserMoney);
	//	}
	//	else {
	//		printf("�����ǿ��� �� �÷��̾ ���� �����մϴ�. \n���� �ݾ��� �� ����� ������ ���Ͽ��� �մϴ�. \n");
	//		printf("���� �ݾ� : ��ǻ�� - %d��, �÷��̾� - %d��\n", ComputerMoney, UserMoney);
	//		std::cin >> BattingMoney;
	//		if ((BattingMoney > ComputerMoney) || (BattingMoney > UserMoney)) {
	//			printf("�������� �Ѵ� �ݾ��� ������ �� �����ϴ�. �ٽ� �Է��ϼ��� \n");
	//			std::cin >> BattingMoney;
	//		}

	//		printf("���� �ݾ��� %d �̸� �ݾ��� �����˴ϴ�.\n", BattingMoney);
	//		ComputerMoney -= BattingMoney;
	//		UserMoney -= BattingMoney;
	//		//printf("���� �ݾ� : ��ǻ�� - %d��, �÷��̾� - %d��\n", ComputerMoney, UserMoney);
	//	}
	//	printf("���� �ݾ� : ��ǻ�� - %d��, �÷��̾� - %d��\n", ComputerMoney, UserMoney);
	//	printf("\n\n2�� �ֻ����� �����ϴ�. \n");
	//	ComputerDice2 = rand() % 6 + 1;
	//	UserDice2 = rand() % 6 + 1;

	//	printf("�ֻ����� �����մϴ�\n");
	//	printf("��ǻ�� : %d , �÷��̾� : %d \n\n", ComputerDice2, UserDice2);
	//	ComputerDiceTotal = ComputerDice1 + ComputerDice2;
	//	UserDiceTotal = UserDice1 + UserDice2;

	//	printf("�� �ֻ����� ���� ��ǻ�� : %d, �÷��̾� : %d �� ", ComputerDiceTotal, UserDiceTotal);
	//	if (ComputerDiceTotal > UserDiceTotal) {
	//		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
	//		ComputerMoney += BattingMoney * 2;
	//		//printf("���� �ݾ� : ��ǻ�� - %d��, �÷��̾� - %d��\n\n", ComputerMoney, UserMoney);
	//		WhoWin = 2;
	//	}
	//	else if (ComputerDiceTotal < UserDiceTotal){
	//		printf("�÷��̾ �̰���ϴ�.\n");
	//		UserMoney += BattingMoney * 2;
	//		//printf("���� �ݾ� : ��ǻ�� - %d��, �÷��̾� - %d��\n\n", ComputerMoney, UserMoney);
	//		WhoWin = 1;
	//	}
	//	else {
	//		printf("�����̹Ƿ� ���� �ݾ��� ��ȯ�˴ϴ�.\n");
	//		ComputerMoney += BattingMoney;
	//		UserMoney += BattingMoney;
	//		//printf("���� �ݾ� : ��ǻ�� - %d��, �÷��̾� - %d��\n\n", ComputerMoney, UserMoney);
	//		WhoWin = 0;
	//	}
	//	printf("���� �ݾ� : ��ǻ�� - %d��, �÷��̾� - %d��\n\n", ComputerMoney, UserMoney);
	//	printf("\n***************************************************************************\n\n");
	//}
	//printf("���� ����\n\n");

	// 6�� ����
	return 0;
}