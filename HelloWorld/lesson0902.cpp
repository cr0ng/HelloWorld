// HelloWorld.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

// �ҽ�����
// �ּ� (comment ) : ���α׷����� ������ ��ġ�� �ʴ� �κ�  (�����Ϸ��� �����ϴ� ����)

/*
 ���� �� �ּ�
 Ctrl + D :  �� �� �����ϱ�
 Shift + Delete : �� �� �����ϱ�
 Shift + ȭ��ǥ : �� ���
 Alt + Shift + ���� ȭ��ǥ : ���η� �� ���
 Ctrl + space : �ڵ��ϼ����(���ڸ�����) â ����
 Alt + ȭ��ǥ : ���� �� �ű��
 F5 : ���α׷� �����
 Ctrl + B + B : ������Ʈ ���� / ���� - �ַ�� ����
 Ctrl + B + R : ������Ʈ ������
 Ctrl + �¿� ȭ��ǥ : �ܾ� �̵�
 Ctrl + ���� ȭ��ǥ : ������ ���ٿ�
 Ctrl + K + C : �� ���� ���� �ּ� ó��
 Ctrl + K + U : �� ���� ���� �ּ����� ó��
*/

/*
	�����Ϸ� : ������ ( ����� �� ���� �ڵ带 ��谡 �˾Ƶ�� ��������)
	-> ���� �ڵ� ����
	-> ��Ŀ�� �����ؼ� �������� ����

	���� : �������� ����
	������ : ��ü �ٽ� �����ϱ� (���� + ����) * ����� �ۼ��������� ������ ���� ������ �õ��غ��� * / ���� - �ַ�� �ٽ� ����

*/

/*
	���� (Variable)
	- ���ϴ� ����
	- ��ǻ�Ϳ� ���� ��� ��Ű�� ���� ����� ��� (�޸𸮿� ����)

	// int : ������(�Ҽ����� ���� ����, ex) 5, 10, -2, 0 )
		ex) int number = 5.3; -> 5�� ��
			number = 5 / 2; -> 2
*/

/*
	������(Operator)
	- ����� �ϱ� ���� ��ȣ
	- ���� ������
		= : �����ʿ� �ִ� ���� ���ʿ� �־��
		a = b : // b�� �ִ� ���� a�� �־��
	- ��� ������
		��Ģ���� : +, -, *, /, % (������ ����)
		a = 5 % 3 -> 2
	- ���� ���Կ�����
		�ٿ������
		a += b;
		a = a + b; // �� �Ʒ� ������ �ڵ�
	- ���� ������
		a++; // a�� 1�� ���ض�
		a--; // a�� 1�� ����
*/

/*
	�̽������� ������
	\n : �� �ٲٱ� ( ���๮��)
	\t : �� �ֱ�
	\" : �ֵ���ǥ ǥ��
	\\ : \ ���
	\r : ĳ���� ���� (�����쿡���� �߿����� ����, But ������������ �߿�!)

*/

#include <iostream>

int lesson0902() {
	printf("0902");
	//std::cout << "Hello world!\n"; // c++ ��� ���
	//printf("Hello\tworld!\n"); // c���� ��� ��� <- �𸮾󿡼� �� ���� ���
	//printf("�������� ");	// ""�ȿ� \n ������ ���� �ٲٶ�� �ǹ� (�̽������� ������)

	// number��� �̸��� ���� int(��Ƽ��) ������ �����ϰ� �ű⿡ 0�� ����
	//int number,age = 0;
	//int number; // ���� ����.
	//number = 0; // ������ ���� ����

	//int number1 = 0; // 0���� �ʱ�ȭ ���ֱ�
	//int number2 = 0; // ���ڸ� �ٷ� �־��ִ� ���� �⸣��
	//printf("���� 1�� �Է��Ͻÿ� : ");
	//std::cin >> number1;
	//printf("���� 2�� �Է��Ͻÿ� : ");
	//std::cin >> number2;

	//int number3 = number1 + number2;
	//printf("�� ������ ���� %d �Դϴ�.\n", number1 + number2);
	//printf("�� ������ ���� %d �Դϴ�.\n", number3);


	//scanf("%d", &number); // ���� �ϳ� �Է¹ޱ�
	//printf("�Է��� ���ڴ� (C) : %d\n", number); 

	//std::cin >> number; // ���� �ϳ� �Է¹ޱ�
	//printf("�Է��� ���ڴ� (C++) : %d\n", number); 

	// ���α׷��� �������� �� ���̸� ����� �Է¹��� ���ڸ� �״�� ����غ���
	//printf("���̸� �Է��ϼ���  : ");
	//scanf("%d", &age);
	//std::cin >> age;
	//printf("���̴� %d�� �Դϴ�.", age);

	/* 1�� printf���� �̿��ؼ� �Ʒ��� ���� ��� ����
		 *
		***
	   *****
	*/
	/*

	printf("1�� \n");
	printf("  *  \n");
	printf(" *** \n");
	printf("*****\n\n");


	printf("2�� \n");
	printf("���������\n");
	printf("��        ��  �� \n");
	printf("��     ��     �� \n");
	printf("���������\n\n");


	printf("3�� \n");
	int x, y, temp;

	printf("�� ���� �Է��ϼ��� : ");
	std::cin >> x;
	std::cin >> y;
	temp = y;
	y = x;
	x = temp;
	printf("�Էµ� ���ڸ� �Ųٷ� ����غ��� %d , %d �Դϴ�\n\n", x, y);

	printf("4�� \n");
	int width, height = 0;
	printf("����, ���θ� �Է��ϼ��� : ");
	std::cin >> width;
	std::cin >> height;
	printf("���ΰ� %d�̰� ���ΰ� %d�� �簢���� ���̴� %d �Դϴ�.\n\n", width, height, width * height);

	printf("5�� \n");
	int a, b, c;

	printf("�� ���� �Է��ϼ��� : ");
	std::cin >> a;
	std::cin >> b;
	c = a - (a / b)*b;
	printf("�� ���� ���� ������ ���� %d �Դϴ�.\n\n", c );

	printf("6�� \n");
	int time, hour, min, sec, tmp = 0;

	printf("�ʸ� �Է��ϼ��� ");
	std::cin >> time;
	hour = time / (60 * 60);
	tmp = time - (hour * 60 * 60);
	min = tmp / 60;
	tmp = tmp - (min * 60);
	sec = tmp;*/

	/* ������ �����ڷ� �غ���
	hour = time / (60 * 60);
	tmp = time % (hour * 60 * 60);
	min = tmp / 60;
	tmp = tmp % (min * 60);
	sec = tmp;
	*/

	/*

	printf("�Է��� %d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n\n", time, hour, min, sec);

	printf("7�� \n");
	int coin500, coin100, coin50, coin10, money = 0;

	printf("�ݾ��� �Է��ϼ��� : ");
	std::cin >> money;

	coin500 = money / 500;
	money = money - (coin500 * 500);
	coin100 = money / 100;
	money = money - (coin100 * 100);
	coin50 = money / 50;
	money = money - (coin50 * 50);
	coin10 = money / 10;

	printf("�������δ� 500��¥�� %d��, 100��¥�� %d��, 50��¥�� %d��, 10��¥�� %d���� �ʿ��մϴ�.\n\n", coin500, coin100, coin50, coin10);


	printf("8�� \n");
	int number, hundreds, tens, units = 0;

	printf("�� �ڸ� ���ڸ� �Է��ϼ��� : ");
	std::cin >> number;

	hundreds = number / 100;
	tens = (number % 100) / 10;
	units = (number % 10);


	printf("%d�� 100�� �ڸ�, %d�� 10�� �ڸ�, %d�� 1�� �ڸ�. \n\n", hundreds, tens, units);*/

	//float number1 = 10.0f;	// 10�̶�� float Ÿ���� ���� float�� number1�� �ֱ�
	//float number2 = 15.0;	// 15��� double Ÿ���� ���� float�� number2�� �ֱ�
	//
	//std::cin >> number1 >> number2;
	//printf("number1 : %f\nnumber2 : %.2f", number1, number2);

	// ���� �ǽ� : ���� �������� �Է� �ް� ���� ���ϱ�

	//int radius = 0;
	//float area = 0.0f;
	//float pie = 3.141592f;
	//
	//std::cin >> radius;
	//area = pie * radius * radius;
	//std::cout << "�������� " << radius << "�� ���� ���̴� " << area << "�Դϴ�.\n";
	//printf("�������� %d�� ���� ���̴� %.3f �Դϴ�.", radius, area);

	return 0;
}