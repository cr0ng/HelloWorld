#include <iostream>

int lesson0903() {
	//float number1 = 10.0f;	// 10�̶�� float Ÿ���� ���� float�� number1�� �ֱ�
	//float number2 = 15.0;	// 15��� double Ÿ���� ���� float�� number2�� �ֱ�
	//
	//std::cin >> number1 >> number2;
	//printf("number1 : %f\nnumber2 : %.2f", number1, number2);

	// ���� �ǽ� : ���� �������� �Է� �ް� ���� ���ϱ�
	/*int radius = 0;
	float area = 0.0f;
	float pie = 3.141592f;

	printf("���� �������� �Է��ϼ��� : ");
	std::cin >> radius;
	area = pie * radius * radius;

	printf("�������� %d�� ���� ���̴� %.3f �Դϴ�.\n", radius, area);
	std::cout << "�������� " << radius << "�� ���� ���̴� " << area << "�Դϴ�.\n";

	// �𸮾󿡼��� printf ������ ���� ������ std:cout�� �ִ� �����θ� �˱�
	// cout�� �Ҽ��� �ڸ��� �����ϴ� ����� ������
	*/

	//int square = 0;
	//
	//printf("���簢���� �� ���� ���̸� �Է��ϼ���  : ");
	//std::cin >> square;
	//
	//printf("���簢���� ���̴� %d �Դϴ�.", square * square);
	//// �����÷ο� �߻��� �� ����

	//float a = 10.0f;
	//float b = 0.0f;
	//std::cin >> b;
	//b = b * 123.0f;

	//bool result = a == b;

	//float Ÿ���� == �� ���� �� �ݵ�� �Ʒ��� ���� �����ؾ���.
	/*float epsilon = 0.001f;
	a < (b + epsilon);
	a > (b - epsilon);*/

	//if : �Ұ�ȣ ���� true�̸� �߰�ȣ ���� �ڵ带 �����϶�.
	//		Ư�� ������ ������ ���� �ڵ带 �����ϰ� ���� �� ���
	//int a = 10;
	//int b = 0;
	//printf("a�� 10\nb�� �Է��ϼ��� : ");
	//std::cin >> b;

	//if (a > b) 
	//{
	//	printf("a: %d, b: %d ���� a�� �� ũ�� \n",a,b);
	//}
	//
	//if (a <= b)
	//{
	//	printf("a: %d, b: %d ���� b�� �� ũ�� \n",a,b);
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

	//c = (a > b) ? (a * 2 + b) : (a + b * 2); //���׿�����

	//if ( b < 60 )
	//{
	//	printf("�� F");
	//}
	//else if ( b < 70)
	//{
	//	printf("�� D");
	//}
	//else if (b < 80)
	//{
	//	printf("�� C");
	//}
	//else if (b < 90)
	//{
	//	printf("�� B");
	//}
	//else
	//{
	//	printf("�� A");
	//}

	//int a = 0;
	//std::cin >> a;
	//switch (a)
	//{
	//case 1 :
	//	printf("1�̴�. \n");
	//	//break;
	//case 3:
	//	printf("3�̴�. \n");
	//	break;
	//case 5:
	//	printf("5�̴�. \n");
	//	break;
	//default:
	//	printf("1,3,5 �� �ƴϴ�. \n");
	//	break;
	//}

	//int a = 10;
	//if (a > 5 && 15 > a)
	//{
	//	// ||�� �տ��� true�� ������ �ڿ��� ����� ���ϱ� ������ ���ʿ� true�� Ȯ���� ���� ������ ���ƾ���
	//	// &&�� �տ��� false�� ������ �ڿ��� ����� ���ϱ� ������ ���ʿ� false�� Ȯ���� ���� ������ ���� ����ȭ
	//	// ����
	//}
	//else
	//{
	//	// ����
	//}

	// 1�� ����
	/*int number1 = 0;
	printf("���ڸ� �Է��ϼ��� : ");
	std::cin >> number1;

	if (number1 > 0) {
		printf("�Է��Ͻ� ���ڴ� ����Դϴ�.");
	}
	else if (number1 < 0) {
		printf("�Է��Ͻ� ���ڴ� �����Դϴ�.");
	}
	else {
		printf("�Է��Ͻ� ���ڴ� 0 �Դϴ�.");
	}*/

	// 2�� ����
	/*int number2 = 0;
	printf("���ڸ� �Է��ϼ��� : ");
	std::cin >> number2;

	if (number2 % 2 == 0) {
		printf("�Է��Ͻ� ���ڴ� ¦���Դϴ�.");
	}
	else if (number2 % 2 == 1) {
		printf("�Է��Ͻ� ���ڴ� Ȧ���Դϴ�.");*/

	// 3�� ����
	/*int number3_1 = 0;
	int number3_2 = 0;

	printf("���� 2���� �Է��ϼ��� : ");
	std::cin >> number3_1 >> number3_2;

	if (number3_1 > number3_2) {
		printf("�� ���� �� �� ū ���ڴ� %d �Դϴ�.", number3_1);
	}
	else if (number3_1 < number3_2) {
		printf("�� ���� �� �� ū ���ڴ� %d �Դϴ�.", number3_2);
	}
	else {
		printf("�� ���ڴ� �����ϴ�.");
	}*/

	// 4�� ����
	/*int age, height = 0;
	printf("���̿� Ű�� �Է��ϼ��� : ");
	std::cin >> age >> height;

	if (age >= 6 && height >= 120) {
		printf("��ſ� �ѷ��ڽ��� �ð�!");
	}
	else {
		printf("�ѷ��ڽ��� �� Ÿ�� �̤�");
	}*/

	// 5�� ����
	/*int score = 0;
	printf("������ �Է��ϸ� ������ ��µ˴ϴ� : ");
	std::cin >> score;

	if (score >= 90) {
		printf("A �Դϴ�.");
	}
	else if (score >= 80) {
		printf("B �Դϴ�.");
	}
	else if (score >= 70) {
		printf("C �Դϴ�.");
	}
	else if (score >= 60) {
		printf("D �Դϴ�.");
	}
	else {
		printf("F �Դϴ�.");
	}*/

	// 6�� ����
	int score1, score2, score3 = 0;
	float avg = 0.0f;

	printf("�� ������ ������ �Է��ϼ��� : ");
	std::cin >> score1 >> score2 >> score3;

	avg = (score1 + score2 + score3) / 3.0f;
	printf("��� ���� : %.1f \n", avg);

	if ((score1 >= 40 && score2 >= 40 && score3 >= 40) && avg >= 60) {
		printf("�հ��Դϴ�.");
	}
	else {
		printf("���հ��Դϴ�.");
	}

	return 0;
}