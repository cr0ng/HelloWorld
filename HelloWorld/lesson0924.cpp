#include "lesson0924.h"
#include <vector>
#include <algorithm>
#include <set>
#include <cstdio>
#include <iostream>
#include <map>
#include <unordered_map>

bool operator<(const SortTest& Left, const SortTest& Right)
{
	return Left.a < Right.a;
}

void PrintVector(std::vector<int>& InVector)
{
	for (int n : InVector)
	{
		printf("%d ", n);
	}
	printf("\n");
}

void PrintVector(std::vector<SortTest>& InVector)
{
	for (const SortTest& n : InVector)
	{
		printf("(%d, %.1f) ", n.a,n.b);
	}
	printf("\n");
}


void lesson0924::TestLambda()
{
	std::vector<int> Numbers = { 5, 7 , 1, 9 ,3 };
	//std::sort (Numbers.begin(), Numbers.end()); //  �������� ����

	PrintVector(Numbers);

	std::sort(Numbers.begin(), Numbers.end(),
		[](int a, int b)
		{
			return a > b; // �������� ����
		}
	);
	PrintVector(Numbers);
}

void lesson0924::TestLambda2()
{
	std::vector<SortTest> Test = { {1, 5.0f}, {7, 3.5f}, {5, 10.0f} };
	PrintVector(Test);
	std::sort(Test.begin(), Test.end());
	PrintVector(Test);
	std::sort(Test.begin(), Test.end(),
		[](const SortTest& first, const SortTest& second)
		{
			return first.b < second.b;
		}
	);
	PrintVector(Test);
}

void lesson0924::TestLambdaPractice()
{
	// ���� �ǽ�
	std::vector<SortTest> Test = { {1, 5.0f}, {7, 3.5f}, {5, 10.0f} };
	PrintVector(Test);
	printf("ù��°�� �������� : ");
	// 1. ���ٷ� SortTest�� a,b �������� ���� ���� ������
	std::sort(Test.begin(), Test.end(),
		[](const SortTest& first, const SortTest& second)
		{
			return first.a > second.a;
		}
	);
	PrintVector(Test);

	printf("�ι�°�� �������� : ");
	std::sort(Test.begin(), Test.end(),
		[](const SortTest& first, const SortTest& second)
		{
			return first.b > second.b;
		}
	);
	PrintVector(Test);

	// 2. Ư�� ������ �����ϴ� ù��° ���� ã��
	// [](int n)
	// { return ��/����; }
	std::vector<int> Numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int Threshold = 5;		// threshold���� ū ù���� ���� ã��
	std::vector<int>::iterator iter = std::find_if(Numbers.begin(), Numbers.end(),
		[Threshold](int n)
		{
			return Threshold < n;	// ĸ���� Threshold���� ũ�� true
		});
	if (iter != Numbers.end())
	{
		// ã�Ҵ�.
		printf("%d���� ū ù��° ���Ҵ� %d �Դϴ�. \n", Threshold, *iter);
	}

}
void PrintSet(const std::set<int>& InSet)
{
	/*printf("Set : ");*/
	for (int n : InSet)
	{
		printf("%d ", n);
	}
	printf("\n");
}

void lesson0924::TestSet()
{
	//#include <set> �ʼ�
	std::set<int> TestSet;

	printf("set�� �߰��ϱ�\n");
	TestSet.insert(30);
	TestSet.insert(10);
	TestSet.insert(50);
	TestSet.insert(20);
	TestSet.insert(30);	// ���õ�
	PrintSet(TestSet);

	printf("set�� ũ��\n");
	printf("size : %d\n",static_cast<int>( TestSet.size()));

	printf("���� ã��\n");
	int Target = 200;
	std::set<int>::iterator iter = TestSet.find(Target);	// ���� Ȯ�� + ���� Ȯ��
	if (iter != TestSet.end())
	{
		// ã�Ҵ�.
		printf("find : %d�� ã�ҽ��ϴ�.\n", Target);
	}
	else
	{
		// ��ã�Ҵ�.
		printf("find : %d�� ã�� ���߽��ϴ�.\n", Target);
	}

	bool IsFind = TestSet.contains(Target); // Target�� �ִ��� ������ Ȯ���ϴ� �Լ�
	if (IsFind)
	{
		// ã�Ҵ�.
		printf("contains : %d�� ã�ҽ��ϴ�.\n", Target);
	}
	else
	{
		// ��ã�Ҵ�.
		printf("contains : %d�� ã�� ���߽��ϴ�.\n", Target);
	}

	printf("\n�ϳ��� �����ϱ� (30)\n");
	TestSet.erase(30);
	PrintSet(TestSet);

	printf("\n���� �����ϱ�\n");
	TestSet.clear();
	PrintSet(TestSet);

	printf("\n��Ʈ�� ������� �� ������� Ȯ���ϱ�\n");
	if (TestSet.empty())
	{
		// �����.
		printf("����ִ�.");
	}
	else 
	{
		// �� �����.
		printf("�� ����ִ�.");
	}
}

void lesson0924::TestSetPractice()
{

	// 1. �ߺ� ���� ���� �Է� �� ���
	// ����ڰ� ���� ���� ������ �Է��ϸ� �ߺ� ���� �����ϰ� ����ϴ� ���α׷��� ��������.
	//std::set<int> TestSetPractice;

	//printf("1. set�� �߰��ϱ�\n");
	//int InsertSetNumber = -1;
	//while (InsertSetNumber != 0) {
	//	printf("set�� �߰��� ���� �Է��ϼ��� (0 �Է��ϸ� ��) ");
	//	std::cin >> InsertSetNumber;
	//	if (InsertSetNumber != 0) {
	//		TestSetPractice.insert(InsertSetNumber);
	//	}
	//}
	//printf("TestSetPractice1 : ");
	//PrintSet(TestSetPractice);

	// ������ �ڵ�
	/*printf("\n �ߺ� ���� ���� �Է� �� ���\n");
	std::set<int> TestSet1;

	int InputNumber = 0;
	while (InputNumber != -1)
	{
		printf("������ �Է��ϼ��� (-1: ����) : ");
		std::cin >> InputNumber;
		if (InputNumber != -1) {
			TestSet1.insert(InputNumber);
		}
	}

	PrintSet(TestSet1);*/


	//// 2. ���� ���� (������, ������, ������)
	//// �� ���� set�� ���� ������, ������, �������� ���ϴ� �ǽ��� �غ�����.
	//printf("\n\n2. ���� ����\n");
	//std::set<int> TestSetPractice2 = {10, 40, 50, 70};
	//printf("TestSetPractice2 : ");
	//PrintSet(TestSetPractice2);

	//// ������
	//std::set<int> TestSetPracticeUnion(TestSetPractice);			
	//for (int n : TestSetPractice2)
	//{
	//	TestSetPracticeUnion.insert(n);
	//}
	//printf("TestSetPracticeUnion : ");
	//PrintSet(TestSetPracticeUnion);

	//// ������
	//std::set<int> TestSetPracticeIntersection;			
	//for (int n : TestSetPractice2)
	//{
	//	bool IsFind = TestSetPractice.contains(n);
	//	if (IsFind) {
	//		TestSetPracticeIntersection.insert(n);
	//	}
	//}
	//printf("TestSetPracticeIntersection : ");
	//PrintSet(TestSetPracticeIntersection);

	//// ������
	//std::set<int> TestSetPracticeDifference(TestSetPractice);
	//for (int n : TestSetPractice2)
	//{
	//	bool IsFind = TestSetPractice.contains(n);
	//	if (IsFind) {
	//		TestSetPracticeDifference.erase(n);
	//	}
	//}
	//printf("TestSetPracticeDifference : ");
	//PrintSet(TestSetPracticeDifference);

	// ������ �ڵ�
	//std::set<int> TestSet2_1 = { 1,2,3,4,5 };
	//std::set<int> TestSet2_2 = { 3,4,5,6,7 };
	//std::set<int> TestSet2_Result;

	//printf("\n���տ���\n");
	//PrintSet(TestSet2_1);
	//PrintSet(TestSet2_2);

	//printf("������ = ");
	//// ������
	//TestSet2_Result = TestSet2_1;
	//for (int n : TestSet2_2)
	//{
	//	TestSet2_Result.insert(n);
	//}
	//PrintSet(TestSet2_Result);

	//printf("������ = ");
	//TestSet2_Result.clear();
	//for (int n : TestSet2_2)
	//{
	//	if (TestSet2_Result.contains(n))
	//	{
	//		TestSet2_Result.insert(n);
	//	}
	//}
	//PrintSet(TestSet2_Result);

	//printf("������ = ");
	//TestSet2_Result = TestSet2_1;
	//for (int n : TestSet2_2)
	//{
	//	if (TestSet2_1.contains(n))
	//	{
	//		TestSet2_Result.erase(n);
	//	}
	//}
	//PrintSet(TestSet2_Result);


	//// 3. Ư�� ���� ���� ���� Ȯ��
	//// set�� Ư�� ���� ����ִ��� �˻��ϴ� ���α׷��� ��������.
	//printf("\n\n3. Ư�� �� ã��\n");
	//int TargetNumber = 10;
	//bool IsFind = TestSetPractice.contains(TargetNumber);
	//if (IsFind) {
	//	printf("%d ���� ����ֽ��ϴ�. \n", TargetNumber);
	//}
	//else {
	//	printf("%d ���� �����ϴ�. \n", TargetNumber);
	//}

	//// 4. ��������/�������� ���
	//// set�� ���Ҹ� �������� �Ǵ� ������������ ����ϴ� �ǽ��� �غ�����. (�ݺ����� ����)
	//printf("\n\n4. ��������/ �������� ���\n");
	//printf("TestSetPractice1 ��������: ");
	//PrintSet(TestSetPractice);

//printf("TestSetPractice1 ��������: ");
///*std::sort(TestSetPractice.begin(), TestSetPractice.end(),
//	[](const int& a, const int& b) {
//		return a > b;
//	});*/

//std::set<int>::iterator iter;
//// �������� ���� �ϴ°�
//PrintSet(TestSetPractice);


// 4. ������ �ڵ�
/*std::set<int> TestSet4 = { 5,76,23,34,6,67,3,1,2,44 };
PrintSet(TestSet4);


printf("Set Reverse : ");
for (auto iter = TestSet4.rbegin(); iter != TestSet4.rend(); iter++)
{
	printf("%d ", *iter);
}
printf("\n");*/

// 5. ������ �ڵ�
//std::string TestString = "Hello World!";	// Helo Wrd! �� ��µǾ����
//std::set<char> TestSet5;
//std::string TestResult5;

//for (char c : TestString)
//	// for(auto iter = TestString.begin() ; iter != TestString.end() ; iter++
//	// for(int i=0;i<TestString.size();i++)
//{
//	if (!TestSet5.contains(c))
//	{
//		TestSet5.insert(c);
//		TestResult5 += c;
//	}
//}
//printf("Result = %s\n", TestResult5.c_str());

// 6. ������ �ڵ�
/*std::set<int> TestSet6 = {5,6,7,23,45,93,12,73,1,4,15};
PrintSet(TestSet6);
if (!TestSet6.empty())
{
	printf("�ִ밪 = %d, �ּҰ� = %d\n", *TestSet6.begin(), *TestSet6.rbegin());
}*/

// 7. ������ �ڵ�
std::set<int> TestSet7 = { 1, 5, 2,3,23,876,34,12,42 };
PrintSet(TestSet7);
std::vector<int> TestVector7_1(TestSet7.begin(), TestSet7.end());
PrintVector(TestVector7_1);
std::vector<int> TestVector7_2;
TestVector7_2.reserve(TestSet7.size());
for (int n : TestSet7)
{
	TestVector7_2.push_back(n);
}
PrintVector(TestVector7_2);
}

std::string ToString(CharacterType InType)
{
	switch (InType)
	{
	case CharacterType::Warrior:
		return "����";
	case CharacterType::Mage:
		return "������";
	case CharacterType::Archer:
		return "�ü�";
	case CharacterType::Thief:
		return "����";
	default:
		break;
	}
	return "�� �� ����";
}

void PrintStatus(const CharacterStatus& InStatus)
{
	printf("| ���� : %2d | ü�� : %3d | ���ݷ� : %2d |\n", InStatus.Level, InStatus.Health, InStatus.Attack);
}

void lesson0924::TestMap()
{
	std::map<CharacterType, CharacterStatus> Characters;

	Characters[CharacterType::Warrior] = { 10,200,15 };
	Characters[CharacterType::Mage] = { 8,100,5 };
	Characters[CharacterType::Archer] = { 12,150,20 };

	if (Characters.contains(CharacterType::Mage))	// ���� Ű�� �����ϴ� ���� �����ϱ� ���� �ݵ�� üũ�ؾ� �Ѵ�.
	{
		// �ִ�.
		CharacterStatus& MageStatus = Characters[CharacterType::Mage]; // []�����ڷ� Value�� ����
		printf("\n[] ���ٹ� : %s", ToString(CharacterType::Mage).c_str());
		PrintStatus(MageStatus);
	}
	else
	{
		// ����
	}

	// ���� �׸� �����ϸ� �� �׸��� �����.
	CharacterStatus& ThiefStatus = Characters[CharacterType::Thief]; // Thief ���� �����, ���� �ʱⰪ���� ������ , ���� �ִ��� ������ Ȯ���ϰ�
	printf("[] ���� Ű ���� : %s", ToString(CharacterType::Thief).c_str());
	PrintStatus(ThiefStatus);

	printf("\n��ü ĳ���� ���\n");
	for (const auto& pair : Characters)
		//for( const std::pair<CharacterType, CharacterStatus>& pair : Characters)
	{
		printf("ĳ���� Ÿ�� : %6s", ToString(pair.first).c_str());
		PrintStatus(pair.second);	// first = Ű, second = value
	}

	printf("\n���� ����\n");
	Characters.erase(CharacterType::Thief);

	printf("\n��ü ĳ���� ���\n");
	for (const auto& pair : Characters)
	{
		printf("ĳ���� Ÿ�� : %6s", ToString(pair.first).c_str());
		PrintStatus(pair.second);	// first = Ű, second = value
	}

	printf("\n��ü ����\n");
	Characters.clear();
	printf("\n��ü ĳ���� ���\n");
	for (const auto& pair : Characters)
	{
		printf("ĳ���� Ÿ�� : %6s", ToString(pair.first).c_str());
		PrintStatus(pair.second);	// first = Ű, second = value
	}

}

void lesson0924::TestUnOrderedMap()
{
	std::unordered_map<CharacterType, CharacterStatus> Characters;

	Characters[CharacterType::Warrior] = { 10,200,15 };
	Characters[CharacterType::Mage] = { 8,100,5 };
	Characters[CharacterType::Archer] = { 12,150,20 };

	if (Characters.contains(CharacterType::Mage))	// ���� Ű�� �����ϴ� ���� �����ϱ� ���� �ݵ�� üũ�ؾ� �Ѵ�.
	{
		// �ִ�.
		CharacterStatus& MageStatus = Characters[CharacterType::Mage]; // []�����ڷ� Value�� ����
		printf("\n[] ���ٹ� : %s", ToString(CharacterType::Mage).c_str());
		PrintStatus(MageStatus);
	}
	else
	{
		// ����
	}

	// ���� �׸� �����ϸ� �� �׸��� �����.
	CharacterStatus& ThiefStatus = Characters[CharacterType::Thief]; // Thief ���� �����, ���� �ʱⰪ���� ������ , ���� �ִ��� ������ Ȯ���ϰ�
	printf("[] ���� Ű ���� : %s", ToString(CharacterType::Thief).c_str());
	PrintStatus(ThiefStatus);

	printf("\n��ü ĳ���� ���\n");
	for (const auto& pair : Characters)
		//for( const std::pair<CharacterType, CharacterStatus>& pair : Characters)
	{
		printf("ĳ���� Ÿ�� : %6s", ToString(pair.first).c_str());
		PrintStatus(pair.second);	// first = Ű, second = value
	}

	printf("\n���� ����\n");
	Characters.erase(CharacterType::Thief);

	printf("\n��ü ĳ���� ���\n");
	for (const auto& pair : Characters)
	{
		printf("ĳ���� Ÿ�� : %6s", ToString(pair.first).c_str());
		PrintStatus(pair.second);	// first = Ű, second = value
	}

	printf("\n��ü ����\n");
	Characters.clear();
	printf("\n��ü ĳ���� ���\n");
	for (const auto& pair : Characters)
	{
		printf("ĳ���� Ÿ�� : %6s", ToString(pair.first).c_str());
		PrintStatus(pair.second);	// first = Ű, second = value
	}
}
