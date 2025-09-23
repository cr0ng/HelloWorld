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
	// #include <vector> 필수
	std::vector<int> Scores;	// int 배열 scores 만듦
	Scores.reserve(5);			// 내가 사용할 것으로 예상되는 최대 크기를 적는 것이 좋음

	Scores.push_back(10);		// vector의 뒤에 추가
	Scores.push_back(20);
	Scores.push_back(30);

	// 특정 값으로 초기화 된 vector를 만들고 싶을 때 (3개가 "무명"으로 초기화된 vector)
	std::vector<std::string> Names(3, "무명");	

	printf("첫번째 점수 : %d\n", Scores[0]);	// 배열 사용하듯이 사용. 다만 범위를 벗어나면 터진다.
	//printf("4번째 점수 : %d\n", Scores[3]);
	printf("두번째 점수 : %d\n", Scores.at(1));	// 두 번째 요소에 접근
	//printf("네번째 점수 : %d\n", Scores.at(3));	// 네 번째 요소에 접근(=예외를 발생)
	printf("마지막 점수 : %d\n", Scores.back());	// 마지막 요소에 접근
	printf("첫번째 점수 : %d\n", Scores.front());	// 첫번째 요소에 접근

	// 일반적인 순회 방식
	printf("모든 점수 : ");
	for (int i = 0; i < Scores.size(); i++) {
		printf("%d ",Scores[i]);
	}
	printf("\n");

	// 반복자를 통한 순회 방식
	for (auto iter = Scores.begin(); iter != Scores.end(); iter++) 
	//for (std::vector<int>::iterator iter = Scores.begin(); iter != Scores.end(); iter++) 
	{
		printf("%d ", *iter);	// 현재 iter 위치에 있는 값을 출력
	}
	printf("\n");

	// 용량 확인(Size, Capacity)
	// Size : 현재 vector에서 실제 사용되는 값이 들어있는 개수
	// Capacity : 현재 vector에 할당된 메모리 개수 (실제 사용하지 않은 것도 포함)
	printf("현재 점수 개수(Size) : %d\n", static_cast<unsigned int>(Scores.size()));
	printf("할당된 메모리(Capacity) : %u\n", static_cast<unsigned int>(Scores.capacity()));

	// 삭제하기 : 뒤에서 삭제하는 것이 좋다.
	Scores.pop_back();	// 마지막 원소 하나 제거

	printf("모든 점수 : ");
	for (int i = 0; i < Scores.size(); i++) {
		printf("%d ", Scores[i]);
	}
	printf("\n");

	Scores.clear();	// 모든 원소 제거(Size는 0, Capacity는 그대로)
	printf("모든 점수 : ");
	for (int i = 0; i < Scores.size(); i++) {
		printf("%d ", Scores[i]);
	}
	printf("\n");
	printf("현재 점수 개수(Size) : %d\n", static_cast<unsigned int>(Scores.size()));
	printf("할당된 메모리(Capacity) : %u\n", static_cast<unsigned int>(Scores.capacity()));

	if (Scores.empty())
	{
		printf("Scores가 비었다. \n");
	}
	
	// 중간에 추가 삭제하는 함수. (어지간하면 쓰지 말 것)
	//Scores.insert();
	//Scores.erase();

	// 스왑 앤 팝
	// - 벡터의 원소들의 순서가 중요하지 않을 때  사용가능
	// - 중간에 있는 원소를 삭제할 때 마지막에 있는 서로 교환하고 pop_back으로 제거하는 전략

	std::vector<int> Numbers = { 10,20,30,40,50 };
	int DeleteNumber = 20;

	//auto FindIter = std::find(Numbers.begin(), Numbers.end(), DeleteNumber);
	std::vector<int>::iterator FindIter = std::find(Numbers.begin(), Numbers.end(), DeleteNumber);
	if (FindIter != Numbers.end())
	{
		// 찾았다.
		*FindIter = Numbers.back();	// 찾은 위치에 마지막 값을 넣어라.
		Numbers.pop_back();			// 마지막 요소 제거
	}
	else
	{

	}
	int i = 0;
}

void lesson0923::TestVectorPracice()
{
	//std::vector 연습하기
	/* 
	* 1. 정수 입력받고 출력하기
	2. 최대, 최소 구하기
	3. 정렬하기 (std::sort)
	4. 특정 값 찾기	(std::find 없이)
	5. 중복 제거하기
	6. 벡터 합치기
	7. 문자열 뒤집어서 출력학기
	8.모든 요소 더하기
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

		printf("정수를 입력하세요(멈추려면 0) ");
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

	printf("Vector1 배열의 최대값은 %d, 최소값은 %d 입니다.\n\n",Max,Min);

	std::sort(Vector1.begin(), Vector1.end());
	printf("Vector1 정렬하기: ");
	printVector(Vector1);
	printf("\n\n");

	int FindValue = 0,FindCount = 0;
	printf("찾을 값을 입력하세요 : ");
	std::cin >> FindValue;
	for (int i = 0; i < Vector1.size(); i++) {

		if (Vector1[i] == FindValue) {
		printf("%d는 Vector1의 %d번째에 있습니다.\n", FindValue,i);
		FindCount++;
		break;
		}
	}
	if (FindCount == 0) {
		printf("찾는 값이 Vector1에 존재하지 않습니다.\n");
	}
	printf("\n");

	printf("Vector1에서 중복값 제거 : ");
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

	printf("벡터 합치기. Vector2 = {10, 20, 30}\n");

	std::vector<int> VectorSum;
	for (int i = 0; i < Vector1.size(); i++) {
		VectorSum.push_back(Vector1[i]);
	}
	for (int i = 0; i < Vector2.size(); i++) {
		VectorSum.push_back(Vector2[i]);
	}
	printf("결과 VectorSum : ");
	printVector(VectorSum);
	printf("\n\n");

	printf("Vector1 뒤집어서 출력하기 : ");
	for (int i = Vector1.size()-1; i >= 0 ; i--) {

		printf("%d ", Vector1[i]);
	}
	printf("\n\n");

	printf("모든 요소 더하기 ");
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
