#include <iostream>
#include <fstream> // ���� I/O ����
#include <cstdlib> // exit() ����

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

	//if�� ������ ū ���� ���� üũ �ǰ� �ϱ�
	//������ ����ϱ� ������ �����ϱ�

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
	int BigNumber = 0;

	printf("���� 2���� �Է��ϼ��� : ");
	std::cin >> number3_1 >> number3_2;

	BigNumber = number3_1 > number3_2 ? number3_1 : number3_2;

	if (BigNumber == number3_1 && BigNumber == number3_2) {
		printf("�� ���ڴ� �����մϴ�.");
	}
	else {
		printf("�� ���� �� �� ū ���ڴ� %d �Դϴ�.", BigNumber);
	}*/

	// 4�� ����
	/* const unsigned int LIMITAGE = 5;
	const float LIMITHEIGHT = 120.0f;

	unsigned int age = 0;
	// unsigned : 0�� ������ �����
	float height = 0;
	// �Ͻ��� ��ȯ : 0.0f�� ǥ�� �� �ϴ� ������ ���߿� �ٲ� ���� �־(���� ��ȯ���ִ°�) 
	// ���� ǥ�� ������ ū������ �����

	printf("���̿� Ű�� �Է��ϼ��� : ");
	std::cin >> age >> height;

	//if (age >= 6 && height >= 120) { //���� �ѹ��� �� ������ ����� ����
	if(age > LIMITAGE && height >= LIMITHEIGHT){
		printf("��ſ� �ѷ��ڽ��� �ð�!\n");
	}
	else {
		printf("�ѷ��ڽ��� �� Ÿ�� �̤�\n");
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
		
	//const int AVERAGELIMIT = 60;
	//const int FAILLIMIT = 40;
	//
	//int score1, score2, score3 = 0;
	////float avg = 0.0f;
	//
	//printf("�� ������ ������ �Է��ϼ��� : ");
	//std::cin >> score1 >> score2 >> score3;

	//float Average = (score1 + score2 + score3) / 3.0f;
	//// ������ ���ڵ� �������� float������
	//// �Ͻ��� ��ȯ, int / float �� ������� float�� ��
	//
	//printf("��� ���� : %.1f \n", Average);

	//if ((score1 >= FAILLIMIT && score2 >= FAILLIMIT && score3 >= FAILLIMIT ) && Average >= AVERAGELIMIT ) {
	//	printf("�հ��Դϴ�.\n");
	//}
	//else {
	//	printf("���հ��Դϴ�.\n");
	//}
	

	// 06.15 �ؽ�Ʈ ���� ����
	//char automobile[50];
	//int year;
	//double a_price;
	//double d_price;

	//std::ofstream outFile;
	//outFile.open("fileTest.txt");
	//// �ַ���� �ִ� ������ �ƴ϶� ���� .cpp ������ �ִ� ������Ʈ ���� ��ο� �ؽ�Ʈ ������ ������

	//printf("�ڵ��� ����Ŀ�� ������ �Է��Ͻÿ� : ");
	//std::cin.getline(automobile, 50);
	//printf("������ �Է��Ͻÿ� : ");
	//std::cin >> year;
	//printf("���� ������ �Է��Ͻÿ� :");
	//std::cin >> a_price;
	//d_price = 0.913 * a_price;

	//printf("\n����Ŀ�� ���� : %s \n", automobile);
	//printf("���� : %d \n", year);
	//printf("���� ���� $ : %lf \n", a_price);
	//printf("���� ���� $ : %lf \n", d_price);

	//outFile << "����Ŀ�� ���� : "<< automobile << std::endl;
	//outFile << "���� : "<< year << std::endl;
	//outFile << "���� ���� $ : " << a_price << "\n";
	//outFile << "���� ���� $ : " << d_price << "\n";
	//
	//outFile.close();

	//06.16 �ؽ�Ʈ ���� �б�
	const int SIZE = 60;
	char FileName[SIZE];
	std::ifstream InFile;
	printf("������ ������ �̸��� �Է��Ͻÿ� : ");
	std::cin.getline(FileName, SIZE);
	InFile.open(FileName);

	if (!InFile.is_open()) {
		printf("%s ������ �� �� �����ϴ�. \n",FileName);
		printf("���α׷��� �����մϴ� \n");
		exit(EXIT_FAILURE);
	}

	double Value;
	double Sum = 0.0;
	int Count = 0;

	InFile >> Value;
	while (InFile.good()) { // �Է��� ��ȣ�ϰ� EOF�� �ƴ� ����
	//while (InFile >> Value){
		++Count;
		printf("value : %.2lf \n", Value);
		Sum += Value;
		InFile >> Value;
	}

	if (InFile.eof())
		printf("���� ���� �����߽��ϴ�. \n");
	else if (InFile.fail())
		printf("������ ����ġ�� �Է��� ����Ǿ����ϴ�. \n");
	else
		printf("�� �� ���� ������ �Է��� ����Ǿ����ϴ�. \n");

	if (Count == 0)
		printf("�����Ͱ� �����ϴ�. \n");
	else
	{
		printf("���� �׸��� ���� : %d \n", Count);
		printf("�հ� : %.2lf \n", Sum);
		printf("��� : %.2lf \n", Sum / Count);
	}

	InFile.close();

	return 0;
}