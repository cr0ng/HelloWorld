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

	//printf("%s",HelloString); // ���ڿ� ����ϱ�
	// \0 : �� �������� �������. ���� ���� ����� �� �� �����ϱ�

	//HelloString[5] = '\0';
	//printf("%s", HelloString);

	// ���� ����
	//int Size = sizeof(HelloString) / sizeof(HelloString[0]);
	//int Count = 0;
	//for (int i = 0; i < 13; i++) {
	//	if (HelloString[i] == 'e') {
	//		printf("e�� �迭�� %d��°�� �ֽ��ϴ�.\n", i);
	//		Count++;
	//	}
	//}
	//if (Count == 0) {
	//	printf("�ش� ���ڿ����� e�� �������� �ʽ��ϴ�.");
	//}

	/*char Target = 'e';
	int Index = FindCharIndex(HelloString, Target);
	if (Index >= 0) 
	{
		printf("[%c]�� %d �� �ε����� �ֽ��ϴ�.\n", Target, Index);
	}
	else {
		printf("[%c]�� ã�� �� �����ϴ�.\n", Target);
	}*/

	// ��������1
	//int Length = MyStringLength(HelloString);
	//printf("%s���ڿ��� ���̴� %d �Դϴ�.\n", HelloString, Length);

	// �������� 2
	/*char Source[20] = "copy this sentence";
	char Destination[20] = "0";
	MyStringCopy(Source,Destination);*/

	// �������� 3
	/*char Source[20] = "Start";
	char Destination[20] = "End";
	MyStringCat(Source,Destination);*/

	// �������� 4
	/*char String1[10] = "String5";
	char String2[10] = "String2";
	int Result = MyStringCompare(String1, String2);
	printf("Result : %d", Result);*/
	
	// �������� 5
	/*const int Size = 32;
	char InputString[Size] = { 0 };
	printf("�Է��ϼ��� : ");
	std::cin.getline(InputString, Size);
	int Result = MyAtoI(InputString);
	printf("%d", Result);*/

	// �������� 6
	//const int Size = 32;
	//char InputString[Size] = { 0 };
	//printf("�Է��ϼ��� : ");
	//std::cin.getline(InputString, Size);
	//float Result = MyAtoF(InputString);
	//printf("%f", Result); 

	// ��ȭ���� 1




	/*const int Size = 32;
	char InputString[Size];
	printf("������ �Է��ϼ��� : ");
	std::cin.getline(InputString, Size);
	printf("�Էµ� ������ [%s]�Դϴ�. \n", InputString);*/

	// ���� �ǽ�
	// �Է� ���� ���� : "Hello,World!"
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
	printf("�빮�ڷ� �����غ��� %s", InputString);*/

	/*SimpleParser(InputString, ',');
	printf("�Ľ̵� ������ [%s]�Դϴ�.\n", InputString);*/

	/*char Working[256];
	if (_getcwd(Working, 256) != nullptr)
	{
		printf("�۾� ���丮 : %s\n", Working);
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
	printf("�ҽ� : %s\n", Source);
	printf("������...\n\n");
	int Index = 0;
	while (Source[Index] != '\0') {
		Destination[Index] = Source[Index];
		Index++;
	}
	printf("������ �ҽ� : %s\n", Destination);
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

	printf("������ ���ڿ� : %s", Sentence);
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
	} // ���� �κ�


	float FDigit = 1.0f;
	
	// �Ҽ� �κ�
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
	//#include <fstream> #include <string> �ʿ�
	const char* FilePath = ".\\Data\\TestData.txt"; // .�� ���� ������ ��Ÿ��
	
	std::ifstream InputFile(FilePath);
	if (!InputFile.is_open()) // ������ ���ȴ��� Ȯ���ϴ� �Լ�
	{
		printf("������ �� �� �����ϴ�.\n");
		printf("[%s] ��θ� Ȯ���ϼ���.\n", FilePath);
		return;
	}
	std::string FileContents(
		(std::istreambuf_iterator<char>(InputFile)),
		std::istreambuf_iterator<char>()); // InputFile�� �ִ� ���ڵ��� ��� �о FileContents�� �����ϱ�

	printf("���� ������ ������ �����ϴ�. \n");
	printf("%s\n", FileContents.c_str()); // FileContents �ȿ� �ִ� ���ڿ��� const char*�� �����ִ� �Լ�
}

void TestString()
{
	//#include <string>
	std::string str1 = "Hello";
	std::string str2("World"); // str1���� �� ���� �� �ٶ����ϴ�.

	const char* Temp1 = "Hello";
	char Temp2[32] = { 0 };
	//Temp2 = Temp1;	// 
	//char* Temp3 = Temp1 // Temp1�� const��

	std::string str3 = str1;		// ����
	size_t Length = str3.length();	// ���� Ȯ��
	//int Size = Length; // ũ�Ⱑ �� �¾Ƽ� ©�� �� �ִ�.
	Length = str3.size();

	std::string str4 = str1 + " " + str2; // str4 = "Hello World", + ����� ���ɿ� ������ ���� �� �ִ�.
	str4 += "!";

	if (str1 == str2)
	{

	}
	if (str1 != str2)
	{

	}
	if (str1 > str2)	// ���� ������� ��
	{

	}

	size_t Position = str1.find('e');
	// �߰��� �������� std::string::npos ����
	Position = str1.find('e', Position + 1);	// �ι�° e�� ã�� �� (ù��° e�� �߰ߵǾ��ٴ� ��ü�Ͽ�)

	str1[1] = 'E'; // Ư�� ��ġ�� ���ڿ� �����ϱ�. �ε��� ���� Ȯ���� ����. ��Ÿ�� ������ �� �� ����
	//str1[10] = 'E'; // ����
	str1.at(1);	// �����ϰ� ����

	str1.c_str(); //C��Ÿ�� ���ڿ� �����ϱ�

}




