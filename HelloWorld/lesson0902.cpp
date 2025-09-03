// HelloWorld.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 소스파일
// 주석 (comment ) : 프로그램에서 영향을 끼치지 않는 부분  (컴파일러가 무시하는 문장)

/*
 여러 줄 주석
 Ctrl + D :  한 줄 복제하기
 Shift + Delete : 한 줄 삭제하기
 Shift + 화살표 : 블럭 잡기
 Alt + Shift + 상하 화살표 : 세로로 블럭 잡기
 Ctrl + space : 자동완성기능(인텔리센스) 창 띄우기
 Alt + 화살표 : 현재 줄 옮기기
 F5 : 프로그램 디버그
 Ctrl + B + B : 프로젝트 빌드 / 빌드 - 솔루션 빌드
 Ctrl + B + R : 프로젝트 리빌드
 Ctrl + 좌우 화살표 : 단어 이동
 Ctrl + 상하 화살표 : 페이지 업다운
 Ctrl + K + C : 블럭 영역 전부 주석 처리
 Ctrl + K + U : 블럭 영역 전부 주석해제 처리
*/

/*
	컴파일러 : 번역기 ( 사람이 써 놓은 코드를 기계가 알아듣게 번역해줌)
	-> 목적 코드 생성
	-> 링커가 연결해서 실행파일 생성

	빌드 : 실행파일 생성
	리빌드 : 전체 다시 빌드하기 (정리 + 빌드) * 제대로 작성했음에도 실행이 되지 않을때 시도해보기 * / 빌드 - 솔루션 다시 빌드

*/

/*
	변수 (Variable)
	- 변하는 숫자
	- 컴퓨터에 값을 기억 시키기 위해 만들고 사용 (메모리에 저장)

	// int : 정수형(소수점이 없는 숫자, ex) 5, 10, -2, 0 )
		ex) int number = 5.3; -> 5만 들어감
			number = 5 / 2; -> 2
*/

/*
	연산자(Operator)
	- 계산을 하기 위한 기호
	- 대입 연산자
		= : 오른쪽에 있는 값을 왼쪽에 넣어라
		a = b : // b에 있는 값을 a에 넣어라
	- 산술 연산자
		사칙연산 : +, -, *, /, % (나머지 연산)
		a = 5 % 3 -> 2
	- 복합 대입연산자
		줄여쓰기용
		a += b;
		a = a + b; // 위 아래 동일한 코드
	- 증감 연산자
		a++; // a에 1을 더해라
		a--; // a에 1을 빼라
*/

/*
	이스케이프 시퀀스
	\n : 줄 바꾸기 ( 개행문자)
	\t : 탭 넣기
	\" : 쌍따옴표 표시
	\\ : \ 출력
	\r : 캐리지 리턴 (윈도우에서는 중요하지 않음, But 리눅스에서는 중요!)

*/

#include <iostream>

int lesson0902() {
	printf("0902");
	//std::cout << "Hello world!\n"; // c++ 출력 방법
	//printf("Hello\tworld!\n"); // c언의 출력 방법 <- 언리얼에서 이 문법 사용
	//printf("♥김유진 ");	// ""안에 \n 있으면 줄을 바꾸라는 의미 (이스케이프 시퀀스)

	// number라는 이름을 가진 int(인티저) 변수를 선언하고 거기에 0을 대입
	//int number,age = 0;
	//int number; // 변수 선언.
	//number = 0; // 변수에 값을 대입

	//int number1 = 0; // 0으로 초기화 해주기
	//int number2 = 0; // 숫자를 바로 넣어주는 습관 기르기
	//printf("숫자 1을 입력하시오 : ");
	//std::cin >> number1;
	//printf("숫자 2를 입력하시오 : ");
	//std::cin >> number2;

	//int number3 = number1 + number2;
	//printf("두 숫자의 합은 %d 입니다.\n", number1 + number2);
	//printf("두 숫자의 합은 %d 입니다.\n", number3);


	//scanf("%d", &number); // 숫자 하나 입력받기
	//printf("입력한 숫자는 (C) : %d\n", number); 

	//std::cin >> number; // 숫자 하나 입력받기
	//printf("입력한 숫자는 (C++) : %d\n", number); 

	// 프로그램을 실행했을 때 나이를 물어보고 입력받은 숫자를 그대로 출력해보기
	//printf("나이를 입력하세요  : ");
	//scanf("%d", &age);
	//std::cin >> age;
	//printf("나이는 %d살 입니다.", age);

	/* 1번 printf문을 이용해서 아래와 같은 모양 찍어보기
		 *
		***
	   *****
	*/
	/*

	printf("1번 \n");
	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n\n");


	printf("2번 \n");
	printf("□□□□□□□□\n");
	printf("□        □  □ \n");
	printf("□     □     □ \n");
	printf("□□□□□□□□\n\n");


	printf("3번 \n");
	int x, y, temp;

	printf("두 수를 입력하세요 : ");
	std::cin >> x;
	std::cin >> y;
	temp = y;
	y = x;
	x = temp;
	printf("입력된 숫자를 거꾸로 출력해보면 %d , %d 입니다\n\n", x, y);

	printf("4번 \n");
	int width, height = 0;
	printf("가로, 세로를 입력하세요 : ");
	std::cin >> width;
	std::cin >> height;
	printf("가로가 %d이고 세로가 %d인 사각형의 넓이는 %d 입니다.\n\n", width, height, width * height);

	printf("5번 \n");
	int a, b, c;

	printf("두 수를 입력하세요 : ");
	std::cin >> a;
	std::cin >> b;
	c = a - (a / b)*b;
	printf("두 수를 나눈 나머지 값은 %d 입니다.\n\n", c );

	printf("6번 \n");
	int time, hour, min, sec, tmp = 0;

	printf("초를 입력하세요 ");
	std::cin >> time;
	hour = time / (60 * 60);
	tmp = time - (hour * 60 * 60);
	min = tmp / 60;
	tmp = tmp - (min * 60);
	sec = tmp;*/

	/* 나머지 연산자로 해보기
	hour = time / (60 * 60);
	tmp = time % (hour * 60 * 60);
	min = tmp / 60;
	tmp = tmp % (min * 60);
	sec = tmp;
	*/

	/*

	printf("입력한 %d초는 %d시간 %d분 %d초 입니다.\n\n", time, hour, min, sec);

	printf("7번 \n");
	int coin500, coin100, coin50, coin10, money = 0;

	printf("금액을 입력하세요 : ");
	std::cin >> money;

	coin500 = money / 500;
	money = money - (coin500 * 500);
	coin100 = money / 100;
	money = money - (coin100 * 100);
	coin50 = money / 50;
	money = money - (coin50 * 50);
	coin10 = money / 10;

	printf("동전으로는 500원짜리 %d개, 100원짜리 %d개, 50원짜리 %d개, 10원짜리 %d개가 필요합니다.\n\n", coin500, coin100, coin50, coin10);


	printf("8번 \n");
	int number, hundreds, tens, units = 0;

	printf("세 자리 숫자를 입력하세요 : ");
	std::cin >> number;

	hundreds = number / 100;
	tens = (number % 100) / 10;
	units = (number % 10);


	printf("%d인 100의 자리, %d인 10의 자리, %d인 1의 자리. \n\n", hundreds, tens, units);*/

	//float number1 = 10.0f;	// 10이라는 float 타입의 값을 float인 number1에 넣기
	//float number2 = 15.0;	// 15라는 double 타입의 값을 float인 number2에 넣기
	//
	//std::cin >> number1 >> number2;
	//printf("number1 : %f\nnumber2 : %.2f", number1, number2);

	// 간단 실습 : 원의 반지름을 입력 받고 넓이 구하기

	//int radius = 0;
	//float area = 0.0f;
	//float pie = 3.141592f;
	//
	//std::cin >> radius;
	//area = pie * radius * radius;
	//std::cout << "반지름이 " << radius << "인 원의 넓이는 " << area << "입니다.\n";
	//printf("반지름이 %d인 원의 넓이는 %.3f 입니다.", radius, area);

	return 0;
}