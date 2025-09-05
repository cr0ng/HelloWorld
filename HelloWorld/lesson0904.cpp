#include <iostream>
#include <ctime>
#include <time.h>
#include <random>

int lesson0904() {

	//int flag = 0b1010;	
	//// 0b0001 = 왼쪽 키가 눌려졌다
	//// 0b0010 = 오른쪽 키가 눌려졌다
	//// 0b0100 = 위쪽 키가 눌려졌다
	//// 0b1000 = 아래쪽 키가 눌려졌다

	//if ((flag & 0b0010) != 0b0000) {
	//	// 오른쪽 키가 눌려져 있다.
	//}
	//else {
	//	// 오른쪽 키가 눌려져 있지 않다.
	//}

	//flag = flag | 0b0001; // 결과 = 0b1011;

	//int result = flag ^ 0b0001; // 결과 = 0b1011;
	//result = 0b1011 ^ 0b0001;	// 결과 = 0b1010;

	//int test = 0b0001;
	//test = ~test; // 왼쪽 키를 제외한 나머지 모두 세팅

	//emum : 상수들에게 사람이 알아보기 좋은 이름을 붙여 놓은 것
	//enum Key 
	//{
	//	// 값을 주지 않아도 순차적 순서 부여
	//	Up		= 1 << 0,	//0b0001
	//	Down	= 1 << 1,	//0b0010
	//	Left	= 1 << 2,	//0b0100
	//	Right	= 1 << 3,	//0b1000
	//};

	//if ((flag & Up) != 0)
	//{
	//	// 위쪽 방향키가 눌려져 있다.
	//}

	// 양수를 하나 입력 받고 홀수인지 짝수인지 출력하기( % 연산자 사용 금지)
	/*int Number = 0;

	printf("숫자를 입력하세요 : ");
	std::cin >> Number;

	if ((Number & 1) != 0) {
		printf("해당 숫자는 홀수입니다. \n");
	}
	else {
		printf("해당 숫자는 짝수입니다. \n");
	}*/

	// 헬로 월드 10번 찍기
	//for (int i = 0, int j = 0; i < 10; i++) { // 변수를 여러개 할 수도 있다.
	/*for (int i = 0; i < 10; i++) {
		printf("Hello World (For문) : %d\n", i);
	}*/

	// 3의 배수가 나오기 전까지 출력
	//int Count = 1;
	//while ((Count % 3) != 0) {	// while()의 조건이 참이면 코드 블럭 실행
	//	printf("Hello World (While문) : %d\n", Count);
	//	Count++;
	//}

	//Count = 1;
	//do {
	//	printf("Hello World (do-While문) : %d\n", Count);
	//	Count++;
	//} while ((Count % 3) != 0); // 일단 한 번 실행하고 while() 조건이 참이면 코드 블럭 실행

	// -----------------------------------------------------------------------------------------

	// 1번 문제
	//int InsertNumber = 0; // 쓰레기값을 제거하기 위해

	//printf("0을 입력하면 입력된 모든 숫자의 합이 출력됩니다. \n");
	//printf("숫자를 입력하세요 ");
	//std::cin >> InsertNumber;

	//int Sum = InsertNumber;

	//while (InsertNumber != 0 ) {
	//	printf("숫자를 입력하세요 ");
	//	std::cin >> InsertNumber;
	//	Sum += InsertNumber;
	//}
	//
	///*do {
	//	printf("숫자를 입력하세요 ");
	//	std::cin >> InsertNumber;
	//	Sum += InsertNumber;
	//} while (InsertNumber != 0);*/

	//printf("\n입력한 모든 숫자의 합은 : %d \n", Sum);

	//// 2번 문제
	//int MultiplicationNumber = 0;
	//printf("\n\n어떤 숫자의 구구단을 출력할까요 ");

	//std::cin >> MultiplicationNumber;

	//for (int i = 1; i < 10; i++) {
	//	printf("%d * %d = %d \n", MultiplicationNumber, i, MultiplicationNumber* i);
	//}

	//// 3번 문제
	//int FindOddNum = 0;

	//printf("\n\n숫자를 입력하면 그 안에 있는 홀수가 모두 출력됩니다 : ");
	//std::cin >> FindOddNum;

	//for (int i = 0; i <= FindOddNum; i++) {
	//	if (i % 2 == 1) {
	//		printf("%d ", i);
	//	}
	//}

	//// 4번 문제
	//printf("\n\n1 ~ 100사이 숫자 중 7의 배수만 출력하기\n");

	//for (int i = 1; i <= 100; i++) {
	//	if (i % 7 == 0) {
	//		printf("%d ", i);
	//	}
	//}
	//
	//// 5번 문제
	/*int PyramidFloor = 0;

	printf("\n\n몇 층짜리 피라미드를 지을까요? : ");
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
	//printf("지연 시간을 초 단위로 입력하시오 : \n");

	//float Secs;
	//std::cin >> Secs;
	//clock_t Delay = Secs * CLOCKS_PER_SEC;

	//printf("카운트를 시작합니다. \a\n");
	//clock_t Start = clock();
	//while (clock() - Start < Delay)
	//{
	//	/*if (((clock() - Start) % 1000) == 0) {
	//	printf("%d 초 \n", clock() - Start);
	//	}*/
	//}

	//printf("종료 \a\n");


	// C 스타일의 랜덤 사용법
	//srand(time(0)); // 시간은 항상 바뀜
	//srand(0); // 테스트용으로 고정

	//for (int i = 0; i < 10; i++) {
	//	int RandomNumber = rand();
	//	printf("랜덤한 숫자 : %d\n", RandomNumber);
	//}
	
	// 0 ~ 5 까지의 숫자를 랜덤으로 구하고 싶다.
	//int RandomNumber1 = rand() % 6;
	
	// 1 ~ 6 까지의 숫자를 랜덤으로 구하고 싶다.
	//int RandomNumber1 = rand() % 6 + 1;

	// C++ 스타일의 랜덤 사용법
	/*std::random_device RandomDevice;
	std::mt19937 Generate(RandomDevice());*/

	//printf("균등분포 : ");
	//std::uniform_int_distribution<> uniformDis(1, 100); // 1 ~ 100 사이 값
	//for (int i = 0; i < 10; i++) {
	//	int Number = uniformDis(Generate);
	//	printf("%d", Number);
	//	if (i < 9) {
	//		printf(", ");
	//	}
	//}
	//printf("\n\n");

	//printf("정규분포 : "); // 특정 값 위주로 나오게 하는것
	//std::normal_distribution<> normalDis(80, 10); // 정수가 없다.
	//for (int i = 0; i < 10; i++) {
	//	float fNumber = normalDis(Generate);
	//	printf("%.2f", fNumber);
	//	if (i < 9) {
	//		printf(", ");
	//	}
	//}
	//printf("\n");

	// ------------------------------------------------------------------------------------

	//랜덤 실습
	// 1번 문제
	/*std::uniform_int_distribution<> ThrowDice(1, 6);

	int CountSix = 0;
	const int ThrowDiceNum = 1000000;
	for (int i = 0; i < ThrowDiceNum; i++) {
		int DiceNumber = ThrowDice(Generate);
		if ((DiceNumber % 6) == 0) {
			CountSix++;
		}
	}

	printf("주사위를 %d번 던져서 6이 %d번 나왔습니다.\n", ThrowDiceNum, CountSix);*/

	// 2번 문제
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
		printf("가위바위보 내세요 (1: 주먹, 2: 가위, 3: 보) ");
		std::cin >> UserHand;

		srand(time(0));
		ComputerHand = rand() % 3 + 1;

		printf("사용자는 : %d, 컴퓨터는 : %d \n", UserHand, ComputerHand);
		switch(ComputerHand) {
			case ROCK:
				if (UserHand == ROCK) {
					printf("무승부 \n\n ");
					break;
				}
				else if (UserHand == SCISSORS) {
					ComputerScore++;
					printf("컴퓨터 승리 : %d \n\n ", ComputerScore);
					break;
				}
				else {
					UserScore++;
					printf("유저 승리 : %d \n\n ", UserScore);
					break;
				}
			case 2:
				if (UserHand == ROCK) {
					ComputerScore++;
					printf("컴퓨터 승리 : %d \n\n ", ComputerScore);
					break;
				}
				else if (UserHand == SCISSORS) {
					printf("무승부 \n\n ");
					break;
				}
				else {
					UserScore++;
					printf("유저 승리 : %d \n\n ", UserScore);
					break;
				}
			case 3:
				if (UserHand == ROCK) {
					UserScore++;
					printf("유저 승리 : %d \n\n ", UserScore);
					break;
				}
				else if (UserHand == SCISSORS) {
					ComputerScore++;
					printf("컴퓨터 승리 : %d \n\n ", ComputerScore);
					break;
				}
				else {
					printf("무승부 \n\n ");
					break;
				}
		}
	}
	printf("\n\n게임이 종료되었습니다.\n");
	if (UserScore == 3) {
			printf("승리자는 유저입니다.");
	}
	else {
		printf("승리자는 컴퓨터입니다.\n\n");
	}*/

	// 3번
	/*srand(time(0));

	int HighRowNumber = rand() % 100 + 1;
	int UserNumber = 0;
	int Count = 0;

	printf("-- 컴퓨터가 뽑은 숫자 : %d -- \n", HighRowNumber);
	printf("하이로우 게임! 5번 안에 맞추셔야 합니다. \n");
	printf("1 ~ 100 사이의 숫자를 골라보세요 : ");
	std::cin >> UserNumber;
	Count++;

	while ((UserNumber != HighRowNumber) && (Count != 5)) {
		if (UserNumber > HighRowNumber) {
			printf("더 높게\n");
		}
		else
		{
			printf("더 낮게\n");
		}
			Count++;
			printf("숫자를  다시 골라보세요 : ");
			std::cin >> UserNumber;
	}
	if (UserNumber == HighRowNumber) {
		printf("정답입니다.\n");
	}
	else {
		printf("탈락입니다.\n");
	}*/

	// 4번 문제
	enum Key {
		FLASHLIGHT = 1,
		BATTERIES,
		KEY,
		COIN,
	};

	int UserMovement = 0;
	int Flash = 0, Battery = 0, Key = 0, Coin = 0;
	printf("**현재 인벤토리 : 비어있음 \n");
	printf("아이템 목록 : 손전등(1), 배터리(2), 키(3), 동전(4) \n");
	printf("아이템을 고르세요 (0을 입력하면 인벤토리가 꺼집니다.) \n");

	std::cin >> UserMovement;

	while (UserMovement!= 0) {

		if ((UserMovement ^ FLASHLIGHT) == 0) {
			//같으면 0000이 됨
			if (Flash == 0) {
				printf(">>손전등을 주웠습니다.<<\n");
				Flash = Flash | FLASHLIGHT; // Flash 변수를 FLASHLIGHT 값으로 저장
			}
			else {
				printf(">>손전등을 사용합니다.<<\n");
				Flash = 0; // Flash 변수를 0으로 초기화
			}
		}
		else if ((UserMovement ^ BATTERIES) == 0) {
			if (Battery == 0) {
				printf(">>배터리를 주웠습니다.<<\n");
				Battery = Battery | BATTERIES; 
			}
			else {
				printf(">>배터리를 사용합니다.<<\n");
				Battery = 0;
			}
		}
		else if ((UserMovement ^ KEY) == 0) {
			if (Key == 0) {
				printf(">>키를 주웠습니다.<<\n");
				Key = Key | KEY; 
			}
			else {
				printf(">>키를 사용합니다.<<\n");
				Key = 0;
			}
		}
		else if ((UserMovement ^ COIN) == 0) {
			if (Coin == 0) {
				printf(">>동전을 주웠습니다.<<\n");
				Coin = Coin | COIN; 
			}
			else {
				printf(">>동전을 사용합니다.<<\n");
				Coin = 0;
			}
		}
		else {
			printf("존재하지 않는 아이템 입니다. \n");
		}
		
		printf("**현재 인벤토리 : ");
		if (Flash == 0 && Battery == 0 && Key == 0 && Coin == 0) {
			printf("비어있음 \n");
		}
		if (Flash == 1) {
			printf("손전등 ");
		}
		if (Battery == 2) {
			printf("배터리 ");
		}
		if (Key == 3) {
			printf("키 ");
		}
		if (Coin == 4) {
			printf("동전 ");
		}

		printf("\n\n인벤 목록 : 손전등(1), 배터리(2), 키(3), 동전(4) \n");
		printf("아이템을 고르세요 (0을 입력하면 인벤토리가 꺼집니다.) \n");

		std::cin >> UserMovement;

	}
	printf("\n인벤창을 닫습니다. \n\n\n\n");

	// 5번 문제
	//enum Key {
	//	UserWin =1,
	//	ComputerWin
	//};

	//int ComputerMoney = 10000, UserMoney = 10000;
	//int ComputerDice1 = 0, ComputerDice2 = 0, UserDice1 = 0, UserDice2 = 0, ComputerDiceTotal = 0, UserDiceTotal = 0;
	//int WhoWin = 0; 	
	//int BattingMoney = 0;
	//int Reset = 0; // 게임 맨 처음 시작
	//
	//srand(time(0));
	//printf("주사위 게임을 시작합니다. \n");
	//printf("현재 금액 : 컴퓨터 - 10000원, 플레이어 - 10000원\n\n");

	//while ((UserMoney != 0) && (ComputerMoney != 0 )) {
	//	printf("1차 주사위를 굴립니다. \n");
	//	ComputerDice1 = rand() % 6 + 1;
	//	UserDice1 = rand() % 6 + 1;

	//	printf("주사위를 공개합니다\n");
	//	printf("컴퓨터 : %d , 플레이어 : %d \n\n", ComputerDice1, UserDice1); 

	//	if (WhoWin == 0) {
	//		printf("전 판에 진 사람이 없어 플레이어가 먼저 배팅 금액을 제시합니다. \n배팅 금액은 두 사람의 소지금 이하여야 합니다. \n");
	//		printf("현재 금액 : 컴퓨터 - %d원, 플레이어 - %d원\n", ComputerMoney, UserMoney);
	//		std::cin >> BattingMoney;
	//		if ((BattingMoney > ComputerMoney) || (BattingMoney > UserMoney)) {
	//			printf("소지금을 넘는 금액을 배팅할 수 없습니다. 다시 입력하세요 \n");
	//			std::cin >> BattingMoney;
	//		}

	//		printf("배팅 금액은 %d 이며 금액이 차감됩니다.\n", BattingMoney);
	//		ComputerMoney -= BattingMoney;
	//		UserMoney -= BattingMoney;
	//		/*printf("현재 금액 : 컴퓨터 - %d원, 플레이어 - %d원\n", ComputerMoney, UserMoney);*/
	//	}
	//	else if (WhoWin == UserWin) {
	//			printf("이전판에서 진 컴퓨터가 먼저 배팅합니다. \n배팅 금액은 두 사람의 소지금 이하여야 합니다. \n");
	//			printf("현재 금액 : 컴퓨터 - %d원, 플레이어 - %d원\n", ComputerMoney, UserMoney);
	//			if (ComputerMoney < UserMoney) {
	//				BattingMoney = rand() % ComputerMoney + 1;
	//			}
	//			else {
	//				BattingMoney = rand() % UserMoney + 1;
	//			}
	//			printf("배팅 금액은 %d 이며 금액이 차감됩니다.\n", BattingMoney);
	//			ComputerMoney -= BattingMoney;
	//			UserMoney -= BattingMoney;
	//			//printf("현재 금액 : 컴퓨터 - %d원, 플레이어 - %d원\n", ComputerMoney, UserMoney);
	//	}
	//	else {
	//		printf("이전판에서 진 플레이어가 먼저 배팅합니다. \n배팅 금액은 두 사람의 소지금 이하여야 합니다. \n");
	//		printf("현재 금액 : 컴퓨터 - %d원, 플레이어 - %d원\n", ComputerMoney, UserMoney);
	//		std::cin >> BattingMoney;
	//		if ((BattingMoney > ComputerMoney) || (BattingMoney > UserMoney)) {
	//			printf("소지금을 넘는 금액을 배팅할 수 없습니다. 다시 입력하세요 \n");
	//			std::cin >> BattingMoney;
	//		}

	//		printf("배팅 금액은 %d 이며 금액이 차감됩니다.\n", BattingMoney);
	//		ComputerMoney -= BattingMoney;
	//		UserMoney -= BattingMoney;
	//		//printf("현재 금액 : 컴퓨터 - %d원, 플레이어 - %d원\n", ComputerMoney, UserMoney);
	//	}
	//	printf("현재 금액 : 컴퓨터 - %d원, 플레이어 - %d원\n", ComputerMoney, UserMoney);
	//	printf("\n\n2차 주사위를 굴립니다. \n");
	//	ComputerDice2 = rand() % 6 + 1;
	//	UserDice2 = rand() % 6 + 1;

	//	printf("주사위를 공개합니다\n");
	//	printf("컴퓨터 : %d , 플레이어 : %d \n\n", ComputerDice2, UserDice2);
	//	ComputerDiceTotal = ComputerDice1 + ComputerDice2;
	//	UserDiceTotal = UserDice1 + UserDice2;

	//	printf("각 주사위의 합은 컴퓨터 : %d, 플레이어 : %d 로 ", ComputerDiceTotal, UserDiceTotal);
	//	if (ComputerDiceTotal > UserDiceTotal) {
	//		printf("컴퓨터가 이겼습니다.\n");
	//		ComputerMoney += BattingMoney * 2;
	//		//printf("현재 금액 : 컴퓨터 - %d원, 플레이어 - %d원\n\n", ComputerMoney, UserMoney);
	//		WhoWin = 2;
	//	}
	//	else if (ComputerDiceTotal < UserDiceTotal){
	//		printf("플레이어가 이겼습니다.\n");
	//		UserMoney += BattingMoney * 2;
	//		//printf("현재 금액 : 컴퓨터 - %d원, 플레이어 - %d원\n\n", ComputerMoney, UserMoney);
	//		WhoWin = 1;
	//	}
	//	else {
	//		printf("동점이므로 배팅 금액이 반환됩니다.\n");
	//		ComputerMoney += BattingMoney;
	//		UserMoney += BattingMoney;
	//		//printf("현재 금액 : 컴퓨터 - %d원, 플레이어 - %d원\n\n", ComputerMoney, UserMoney);
	//		WhoWin = 0;
	//	}
	//	printf("현재 금액 : 컴퓨터 - %d원, 플레이어 - %d원\n\n", ComputerMoney, UserMoney);
	//	printf("\n***************************************************************************\n\n");
	//}
	//printf("게임 종료\n\n");

	// 6번 문제
	return 0;
}