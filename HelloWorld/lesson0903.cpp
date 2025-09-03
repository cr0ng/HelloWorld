#include <iostream>

int lesson0903() {
	//float number1 = 10.0f;	// 10이라는 float 타입의 값을 float인 number1에 넣기
	//float number2 = 15.0;	// 15라는 double 타입의 값을 float인 number2에 넣기
	//
	//std::cin >> number1 >> number2;
	//printf("number1 : %f\nnumber2 : %.2f", number1, number2);

	// 간단 실습 : 원의 반지름을 입력 받고 넓이 구하기
	/*int radius = 0;
	float area = 0.0f;
	float pie = 3.141592f;

	printf("원의 반지름을 입력하세요 : ");
	std::cin >> radius;
	area = pie * radius * radius;

	printf("반지름이 %d인 원의 넓이는 %.3f 입니다.\n", radius, area);
	std::cout << "반지름이 " << radius << "인 원의 넓이는 " << area << "입니다.\n";

	// 언리얼에서는 printf 형식을 쓰기 때문에 std:cout은 있다 정도로만 알기
	// cout은 소수점 자리수 설정하는 방식이 복잡함
	*/

	//int square = 0;
	//
	//printf("정사각형의 한 변의 길이를 입력하세요  : ");
	//std::cin >> square;
	//
	//printf("정사각형의 넓이는 %d 입니다.", square * square);
	//// 오버플로우 발생할 수 있음

	//float a = 10.0f;
	//float b = 0.0f;
	//std::cin >> b;
	//b = b * 123.0f;

	//bool result = a == b;

	//float 타입을 == 로 비교할 땐 반드시 아래와 같이 진행해야함.
	/*float epsilon = 0.001f;
	a < (b + epsilon);
	a > (b - epsilon);*/

	//if : 소괄호 안이 true이면 중괄호 안의 코드를 실행하라.
	//		특정 조건을 만족할 때만 코드를 실행하고 싶을 때 사용
	//int a = 10;
	//int b = 0;
	//printf("a는 10\nb를 입력하세요 : ");
	//std::cin >> b;

	//if (a > b) 
	//{
	//	printf("a: %d, b: %d 따라서 a가 더 크다 \n",a,b);
	//}
	//
	//if (a <= b)
	//{
	//	printf("a: %d, b: %d 따라서 b가 더 크다 \n",a,b);
	//}

	//if-else
	//int a = 10;
	//int b = 23;
	//int c = 0;

	//if (a > b)
	//{
	//	c = a * 2 + b;
	//}
	//else 
	//{
	//	c = a + b * 2;
	//}

	//c = (a > b) ? (a * 2 + b) : (a + b * 2); //삼항연산자

	//if ( b < 60 )
	//{
	//	printf("너 F");
	//}
	//else if ( b < 70)
	//{
	//	printf("너 D");
	//}
	//else if (b < 80)
	//{
	//	printf("너 C");
	//}
	//else if (b < 90)
	//{
	//	printf("너 B");
	//}
	//else
	//{
	//	printf("너 A");
	//}

	//int a = 0;
	//std::cin >> a;
	//switch (a)
	//{
	//case 1 :
	//	printf("1이다. \n");
	//	//break;
	//case 3:
	//	printf("3이다. \n");
	//	break;
	//case 5:
	//	printf("5이다. \n");
	//	break;
	//default:
	//	printf("1,3,5 가 아니다. \n");
	//	break;
	//}

	//int a = 10;
	//if (a > 5 && 15 > a)
	//{
	//	// ||는 앞에서 true가 나오면 뒤에는 계산을 안하기 때문에 앞쪽에 true일 확률이 높은 조건을 놓아야함
	//	// &&는 앞에서 false가 나오면 뒤에는 계산을 안하기 때문에 앞쪽에 false일 확률이 높은 조건을 놓아 최적화
	//	// 성공
	//}
	//else
	//{
	//	// 실패
	//}

	// 1번 문제
	/*int number1 = 0;
	printf("숫자를 입력하세요 : ");
	std::cin >> number1;

	if (number1 > 0) {
		printf("입력하신 숫자는 양수입니다.");
	}
	else if (number1 < 0) {
		printf("입력하신 숫자는 음수입니다.");
	}
	else {
		printf("입력하신 숫자는 0 입니다.");
	}*/

	// 2번 문제
	/*int number2 = 0;
	printf("숫자를 입력하세요 : ");
	std::cin >> number2;

	if (number2 % 2 == 0) {
		printf("입력하신 숫자는 짝수입니다.");
	}
	else if (number2 % 2 == 1) {
		printf("입력하신 숫자는 홀수입니다.");*/

	// 3번 문제
	/*int number3_1 = 0;
	int number3_2 = 0;

	printf("숫자 2개를 입력하세요 : ");
	std::cin >> number3_1 >> number3_2;

	if (number3_1 > number3_2) {
		printf("두 숫자 중 더 큰 숫자는 %d 입니다.", number3_1);
	}
	else if (number3_1 < number3_2) {
		printf("두 숫자 중 더 큰 숫자는 %d 입니다.", number3_2);
	}
	else {
		printf("두 숫자는 같습니다.");
	}*/

	// 4번 문제
	/*int age, height = 0;
	printf("나이와 키를 입력하세요 : ");
	std::cin >> age >> height;

	if (age >= 6 && height >= 120) {
		printf("즐거운 롤러코스터 시간!");
	}
	else {
		printf("롤러코스터 못 타요 ㅜㅜ");
	}*/

	// 5번 문제
	/*int score = 0;
	printf("점수를 입력하면 학점이 출력됩니다 : ");
	std::cin >> score;

	if (score >= 90) {
		printf("A 입니다.");
	}
	else if (score >= 80) {
		printf("B 입니다.");
	}
	else if (score >= 70) {
		printf("C 입니다.");
	}
	else if (score >= 60) {
		printf("D 입니다.");
	}
	else {
		printf("F 입니다.");
	}*/

	// 6번 문제
	int score1, score2, score3 = 0;
	float avg = 0.0f;

	printf("세 과목의 점수를 입력하세요 : ");
	std::cin >> score1 >> score2 >> score3;

	avg = (score1 + score2 + score3) / 3.0f;
	printf("평균 점수 : %.1f \n", avg);

	if ((score1 >= 40 && score2 >= 40 && score3 >= 40) && avg >= 60) {
		printf("합격입니다.");
	}
	else {
		printf("불합격입니다.");
	}

	return 0;
}