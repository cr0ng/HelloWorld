#include "lesson0910.h"
#include <stdio.h>
#include <iostream>
#include <direct.h>
#include <fstream>
#include <string>

void Lesson0910() {
	//char HelloString[] = { 'H','e','l','l','o','W','o','r','l','d','\n'};
	/*char HelloString[13];
	HelloString[0] = 'H';
	HelloString[1] = 'e';
	HelloString[2] = 'l';
	HelloString[3] = 'l';
	HelloString[4] = 'o';
	HelloString[5] = ' ';
	HelloString[6] = 'W';
	HelloString[7] = 'o';
	HelloString[8] = 'r';
	HelloString[9] = 'l';
	HelloString[10] = 'd';
	HelloString[11] = '\n';
	HelloString[12] = '\0';*/
	char HelloString[] = "Hello World\n";

	//printf("%s",HelloString); // 문자열 출력하기
	// \0 : 안 보이지만 들어있음. 글자 끝이 어딘지 알 수 없으니까

	//HelloString[5] = '\0';
	//printf("%s", HelloString);

	// 간단 문제
	//int Size = sizeof(HelloString) / sizeof(HelloString[0]);
	//int Count = 0;
	//for (int i = 0; i < 13; i++) {
	//	if (HelloString[i] == 'e') {
	//		printf("e는 배열의 %d번째에 있습니다.\n", i);
	//		Count++;
	//	}
	//}
	//if (Count == 0) {
	//	printf("해당 문자열에는 e가 존재하지 않습니다.");
	//}

	/*char Target = 'e';
	int Index = FindCharIndex(HelloString, Target);
	if (Index >= 0) 
	{
		printf("[%c]는 %d 번 인덱스에 있습니다.\n", Target, Index);
	}
	else {
		printf("[%c]는 찾을 수 없습니다.\n", Target);
	}*/

	// 연습문제1
	//int Length = MyStringLength(HelloString);
	//printf("%s문자열의 길이는 %d 입니다.\n", HelloString, Length);

	// 연습문제 2
	/*char Source[20] = "copy this sentence";
	char Destination[20] = "0";
	MyStringCopy(Source,Destination);*/

	// 연습문제 3
	/*char Source[20] = "Start";
	char Destination[20] = "End";
	MyStringCat(Source,Destination);*/

	// 연습문제 4
	/*char String1[10] = "String5";
	char String2[10] = "String2";
	int Result = MyStringCompare(String1, String2);
	printf("Result : %d", Result);*/
	
	// 연습문제 5
	/*const int Size = 32;
	char InputString[Size] = { 0 };
	printf("입력하세요 : ");
	std::cin.getline(InputString, Size);
	int Result = MyAtoI(InputString);
	printf("%d", Result);*/

	// 연습문제 6
	//const int Size = 32;
	//char InputString[Size] = { 0 };
	//printf("입력하세요 : ");
	//std::cin.getline(InputString, Size);
	//float Result = MyAtoF(InputString);
	//printf("%f", Result); 

	// 심화문제 1




	/*const int Size = 32;
	char InputString[Size];
	printf("문장을 입력하세요 : ");
	std::cin.getline(InputString, Size);
	printf("입력된 문장은 [%s]입니다. \n", InputString);*/

	// 간단 실습
	// 입력 문장 예시 : "Hello,World!"
	/*int Index = 0;
	int commma = 100;
	while (InputString[Index] != '\0') {
		if (InputString[Index] == ',') {
			commma = Index;
		}

		if (Index > commma) {
			InputString[Index] = InputString[Index] - 32;
		}
		Index++;
	}
	printf("대문자로 변경해보면 %s", InputString);*/

	/*SimpleParser(InputString, ',');
	printf("파싱된 문장은 [%s]입니다.\n", InputString);*/

	/*char Working[256];
	if (_getcwd(Working, 256) != nullptr)
	{
		printf("작업 디렉토리 : %s\n", Working);
	}
	ReadFile();*/
}

int FindCharIndex(const char* TargetString, const char TargetCharacter)
{
	int Index = 0;
	bool IsFind = false;

	while (TargetString[Index] != '\0')
	{
		if (TargetString[Index] == TargetCharacter)
		{
			IsFind = true;
			break;
		}
		Index++;
	}

	if (!IsFind)
	{
		Index = -1;
	}
	return Index;
}

int MyStringLength(const char* Target)
{
	int Length = 0;
	while (Target[Length] != '\0') {
		Length++;
	}
	return Length;
}

void MyStringCopy(const char* Source, char* Destination)
{
	printf("소스 : %s\n", Source);
	printf("복제중...\n\n");
	int Index = 0;
	while (Source[Index] != '\0') {
		Destination[Index] = Source[Index];
		Index++;
	}
	printf("복제한 소스 : %s\n", Destination);
}

void MyStringCat(char* Source, const char* Destination)
{
	int Index = 0;
	int Index2 = 0;
	char Sentence[40] = { 0 };
	while (Source[Index] != '\0') {
		Sentence[Index] = Source[Index];
		Index++;
	}

	while (Destination[Index2] != '\0') {
		Sentence[Index] = Destination[Index2];
		Index++;
		Index2++;
	}

	printf("합쳐진 문자열 : %s", Sentence);
}

int MyStringCompare(const char* String1, const char* String2)
{
	int Index = 0, Index2 = 0;
	int Match = 0;
	while (String1[Index] != '\0') {
		if (String1[Index] != String2[Index]) {
			int Result = String1[Index] - String2[Index];
			return Result;
		}
		Index++;
	}
	return 0;
}

int MyAtoI(const char* Source)
{
	int Index = 0;
	int AsciiToNumber = '1'-1;
	
	int Result = 0;

	while (Source[Index] != '\0') {
		Index++;
	}

	printf("Index : %d\n", Index);
	int Digit = 1;
	for (int i = 0; i < Index; i++) {
		//printf("%d", (int)Source[i]-AsciiToNumber);
		
		for (int j = Index - i-1; j > 0; j--) {
			Digit *= 10;
			if (j == 0) {
				Digit = 1;
			}
		}
		Result += (((int)Source[i] - AsciiToNumber) * Digit);
		Digit = 1;
	}
	return Result;
}

float MyAtoF(const char* Source)
{
	int Index = 0;
	int AsciiToNumber = '1' - 1;
	int DotIndex = FindCharIndex(Source, '.');
	float Result = 0.0f;

	while (Source[Index] != '\0') {
		Index++;
	}

	printf("Index : %d\n", Index);
	printf("DotIndex : %d\n", DotIndex);

	int Digit = 1;
	for (int i = 0; i < DotIndex; i++) {
		for (int j = DotIndex - i - 1; j > 0; j--) {
			Digit *= 10;
			if (j == 0) {
				Digit = 1;
			}
		}
		Result += (((int)Source[i] - AsciiToNumber) * Digit);
		Digit = 1;
	} // 정수 부분


	float FDigit = 1.0f;
	
	// 소수 부분
	for (int k = DotIndex + 1; k < Index; k++) {

			FDigit *= 0.1f;
			
		Result += (((int)Source[k] - AsciiToNumber) * FDigit);
		
	}

	return Result;
}

void SimpleParser(char* Source, const char Delimiter)
{
	int CommaIndex = FindCharIndex(Source, Delimiter);
	char* AfterComma = Source + CommaIndex + 1;
	const int ToUpperGap = 'a' - 'A';
	while ((*AfterComma) != '\0')
	{
		if ((*AfterComma) >= 'a' && (*AfterComma) <= 'z')
		{
			(*AfterComma) -= ToUpperGap;
		}
		AfterComma++;
	}
}

void ReadFile()
{
	//#include <fstream> #include <string> 필요
	const char* FilePath = ".\\Data\\TestData.txt"; // .은 현재 폴더를 나타냄
	
	std::ifstream InputFile(FilePath);
	if (!InputFile.is_open()) // 파일이 열렸는지 확인하는 함수
	{
		printf("파일을 열 수 없습니다.\n");
		printf("[%s] 경로를 확인하세요.\n", FilePath);
		return;
	}
	std::string FileContents(
		(std::istreambuf_iterator<char>(InputFile)),
		std::istreambuf_iterator<char>()); // InputFile에 있는 글자들을 모두 읽어서 FileContents에 저장하기

	printf("파일 내용은 다음과 같습니다. \n");
	printf("%s\n", FileContents.c_str()); // FileContents 안에 있는 문자열을 const char*로 돌려주는 함수
}

void TestString()
{
	//#include <string>
	std::string str1 = "Hello";
	std::string str2("World"); // str1보다 이 쪽이 더 바람직하다.

	const char* Temp1 = "Hello";
	char Temp2[32] = { 0 };
	//Temp2 = Temp1;	// 
	//char* Temp3 = Temp1 // Temp1이 const라서

	std::string str3 = str1;		// 복사
	size_t Length = str3.length();	// 길이 확인
	//int Size = Length; // 크기가 안 맞아서 짤릴 수 있다.
	Length = str3.size();

	std::string str4 = str1 + " " + str2; // str4 = "Hello World", + 방식은 성능에 문제가 있을 수 있다.
	str4 += "!";

	if (str1 == str2)
	{

	}
	if (str1 != str2)
	{

	}
	if (str1 > str2)	// 사전 순서대로 비교
	{

	}

	size_t Position = str1.find('e');
	// 발견을 못했으면 std::string::npos 리턴
	Position = str1.find('e', Position + 1);	// 두번째 e를 찾을 때 (첫번째 e가 발견되었다는 전체하에)

	str1[1] = 'E'; // 특정 위치의 글자에 접근하기. 인덱스 범위 확인을 안함. 런타임 에러가 뜰 수 있음
	//str1[10] = 'E'; // 터짐
	str1.at(1);	// 안전하게 접근

	str1.c_str(); //C스타일 문자열 접근하기

}




