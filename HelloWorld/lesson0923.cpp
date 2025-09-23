#include "lesson0923.h"
#include "TemplateCalculator.h"
#include "Coordinate.h"
#include <cstdio>
#include <vector>
#include <algorithm>

void lesson0923::TestTemplateClass()
{
	Coordinate<int> PositionInt(1, 3);
	Coordinate<float> PositionFloat(0.05f, 5.7f);

	printf("PositionInt : %d, %d\n", PositionInt.x, PositionInt.y);
	printf("PositionFloat : %f, %f\n", PositionFloat.x, PositionFloat.y);

	PositionInt.Print();
	PositionFloat.Print();

	Coordinate<std::string> PositionString("A", "B");
	PositionString.Print();

}

void lesson0923::TestCalculator()
{
	TemplateCalculator Calc;
	int ResultInt = Calc.Add(1, 3);
	float ResultFloat = Calc.Add(2.5f, 7.3f);
	Coordinate<int> ResultCoord = Calc.Add(Coordinate<int>(1, 2), Coordinate<int>(3, 4));

	ResultInt = Calc.Multiply(5, 3);
	ResultFloat = Calc.Multiply(3.5f, 2.0f);
	ResultCoord = Calc.Multiply(Coordinate<int>(1, 2), Coordinate<int>(3, 4));

	ResultFloat = Calc.Add(2.5f, 7.3f);
	bool ResultBool = Calc.Equal(9.8f, ResultFloat);
	bool ResultBool2 = 9.8f == ResultFloat;

	int i = 0;
}

void lesson0923::TestVector()
{
	// #include <vector> �ʼ�
	std::vector<int> Scores;	// int �迭 scores ����
	Scores.reserve(5);			// ���� ����� ������ ����Ǵ� �ִ� ũ�⸦ ���� ���� ����

	Scores.push_back(10);		// vector�� �ڿ� �߰�
	Scores.push_back(20);
	Scores.push_back(30);

	// Ư�� ������ �ʱ�ȭ �� vector�� ����� ���� �� (3���� "����"���� �ʱ�ȭ�� vector)
	std::vector<std::string> Names(3, "����");	

	printf("ù��° ���� : %d\n", Scores[0]);	// �迭 ����ϵ��� ���. �ٸ� ������ ����� ������.
	//printf("4��° ���� : %d\n", Scores[3]);
	printf("�ι�° ���� : %d\n", Scores.at(1));	// �� ��° ��ҿ� ����
	//printf("�׹�° ���� : %d\n", Scores.at(3));	// �� ��° ��ҿ� ����(=���ܸ� �߻�)
	printf("������ ���� : %d\n", Scores.back());	// ������ ��ҿ� ����
	printf("ù��° ���� : %d\n", Scores.front());	// ù��° ��ҿ� ����

	// �Ϲ����� ��ȸ ���
	printf("��� ���� : ");
	for (int i = 0; i < Scores.size(); i++) {
		printf("%d ",Scores[i]);
	}
	printf("\n");

	// �ݺ��ڸ� ���� ��ȸ ���
	for (auto iter = Scores.begin(); iter != Scores.end(); iter++) 
	//for (std::vector<int>::iterator iter = Scores.begin(); iter != Scores.end(); iter++) 
	{
		printf("%d ", *iter);	// ���� iter ��ġ�� �ִ� ���� ���
	}
	printf("\n");

	// �뷮 Ȯ��(Size, Capacity)
	// Size : ���� vector���� ���� ���Ǵ� ���� ����ִ� ����
	// Capacity : ���� vector�� �Ҵ�� �޸� ���� (���� ������� ���� �͵� ����)
	printf("���� ���� ����(Size) : %d\n", static_cast<unsigned int>(Scores.size()));
	printf("�Ҵ�� �޸�(Capacity) : %u\n", static_cast<unsigned int>(Scores.capacity()));

	// �����ϱ� : �ڿ��� �����ϴ� ���� ����.
	Scores.pop_back();	// ������ ���� �ϳ� ����

	printf("��� ���� : ");
	for (int i = 0; i < Scores.size(); i++) {
		printf("%d ", Scores[i]);
	}
	printf("\n");

	Scores.clear();	// ��� ���� ����(Size�� 0, Capacity�� �״��)
	printf("��� ���� : ");
	for (int i = 0; i < Scores.size(); i++) {
		printf("%d ", Scores[i]);
	}
	printf("\n");
	printf("���� ���� ����(Size) : %d\n", static_cast<unsigned int>(Scores.size()));
	printf("�Ҵ�� �޸�(Capacity) : %u\n", static_cast<unsigned int>(Scores.capacity()));

	if (Scores.empty())
	{
		printf("Scores�� �����. \n");
	}
	
	// �߰��� �߰� �����ϴ� �Լ�. (�������ϸ� ���� �� ��)
	//Scores.insert();
	//Scores.erase();

	// ���� �� ��
	// - ������ ���ҵ��� ������ �߿����� ���� ��  ��밡��
	// - �߰��� �ִ� ���Ҹ� ������ �� �������� �ִ� ���� ��ȯ�ϰ� pop_back���� �����ϴ� ����

	std::vector<int> Numbers = { 10,20,30,40,50 };
	int DeleteNumber = 20;

	//auto FindIter = std::find(Numbers.begin(), Numbers.end(), DeleteNumber);
	std::vector<int>::iterator FindIter = std::find(Numbers.begin(), Numbers.end(), DeleteNumber);
	if (FindIter != Numbers.end())
	{
		// ã�Ҵ�.
		*FindIter = Numbers.back();	// ã�� ��ġ�� ������ ���� �־��.
		Numbers.pop_back();			// ������ ��� ����
	}
	else
	{

	}
	int i = 0;
}

void lesson0923::TestVectorPracice()
{
	//std::vector �����ϱ�
	/* 
	* 1. ���� �Է¹ް� ����ϱ�
	2. �ִ�, �ּ� ���ϱ�
	3. �����ϱ� (std::sort)
	4. Ư�� �� ã��	(std::find ����)
	5. �ߺ� �����ϱ�
	6. ���� ��ġ��
	7. ���ڿ� ����� ����б�
	8.��� ��� ���ϱ�
	*/

	std::vector<int> Vector1;
	std::vector<int> Vector2;
	Vector1.reserve(3);
	Vector2.reserve(3);
	Vector2.push_back(10);
	Vector2.push_back(20);
	Vector2.push_back(30);

	int VectorValue = -1;
	while (!(VectorValue == 0)) {

		printf("������ �Է��ϼ���(���߷��� 0) ");
		std::cin >> VectorValue;
		if (VectorValue != 0) {
			Vector1.push_back(VectorValue);
		}
	}

	printf("Vector1 : ");
	for (int i = 0; i < Vector1.size(); i++) {
		
		printf("%d ", Vector1[i]);
	}
	printf("\n\n");

	int Max = Vector1[0];
	int Min = Vector1[0];
	
	for (int i = 0; i < Vector1.size(); i++) {

		if (Vector1[i] > Max) {
			Max = Vector1[i];
		}

		else if (Vector1[i] < Min) {
			Min = Vector1[i];
		}
	}

	printf("Vector1 �迭�� �ִ밪�� %d, �ּҰ��� %d �Դϴ�.\n\n",Max,Min);

	std::sort(Vector1.begin(), Vector1.end());
	printf("Vector1 �����ϱ�: ");
	printVector(Vector1);
	printf("\n\n");

	int FindValue = 0,FindCount = 0;
	printf("ã�� ���� �Է��ϼ��� : ");
	std::cin >> FindValue;
	for (int i = 0; i < Vector1.size(); i++) {

		if (Vector1[i] == FindValue) {
		printf("%d�� Vector1�� %d��°�� �ֽ��ϴ�.\n", FindValue,i);
		FindCount++;
		break;
		}
	}
	if (FindCount == 0) {
		printf("ã�� ���� Vector1�� �������� �ʽ��ϴ�.\n");
	}
	printf("\n");

	printf("Vector1���� �ߺ��� ���� : ");
	for (int i = 0; i < Vector1.size(); i++) {
		for (int j = i + 1;j < Vector1.size(); j++) {
			if (Vector1[i] == Vector1[j]) {
				Vector1[j] = Vector1.back();
				Vector1.pop_back();
			}
		}
		printf("%d ", Vector1[i]);
	}
	printf("\n\n");

	printf("���� ��ġ��. Vector2 = {10, 20, 30}\n");

	std::vector<int> VectorSum;
	for (int i = 0; i < Vector1.size(); i++) {
		VectorSum.push_back(Vector1[i]);
	}
	for (int i = 0; i < Vector2.size(); i++) {
		VectorSum.push_back(Vector2[i]);
	}
	printf("��� VectorSum : ");
	printVector(VectorSum);
	printf("\n\n");

	printf("Vector1 ����� ����ϱ� : ");
	for (int i = Vector1.size()-1; i >= 0 ; i--) {

		printf("%d ", Vector1[i]);
	}
	printf("\n\n");

	printf("��� ��� ���ϱ� ");
	int Sum = 0;
	for (int i = 0; i < Vector1.size(); i++) {
		Sum += Vector1[i];
	}
	printf("Sum : %d", Sum);
	printf("\n\n");
}

void lesson0923::printVector(std::vector<int>& Vector)
{
	for (int i = 0 ; i < Vector.size() ; i++) {

		printf("%d ", Vector[i]);
	}
	printf("\n\n");
}
