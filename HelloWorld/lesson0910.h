#pragma once
#include <string>
void Lesson0910();

/// <summary>
/// TargetString���� TargetCharacter�� �� ��°�� �ִ��� ã���ִ� �Լ�
/// </summary>
/// <param name="TargetString">ã���� ���ڿ�</param>
/// <param name="TargetCharacter">ã�� ����</param>
/// <returns>-1�̸� �� ã��, �� �ܴ� TargetCharacter�� �ε���</returns>
int FindCharIndex(const char* TargetString,const char TargetCharacter);

/// <summary>
/// ���ڿ��� ���̸� �����ϴ� �Լ� �����
/// </summary>
/// <param name="Target"></param>
/// <returns></returns>
int MyStringLength(const char* Target);

/// <summary>
/// ���ڿ��� �����ϴ� �Լ� �����
/// </summary>
/// <param name="Source"></param>
/// <param name="Destination"></param>
void MyStringCopy(const char* Source, char* Destination);

/// <summary>
/// ���ڿ��� ��ġ�� �Լ� ����� (Source �ڿ� Destination�� ������ ���̱�)
/// </summary>
/// <param name="Source"></param>
/// <param name="Destination"></param>
void MyStringCat(char* Source, const char* Destination);

/// <summary>
/// ���ڿ� �� ���� ���ϴ� �Լ� �����
/// </summary>
/// <param name="String1"></param>
/// <param name="String2"></param>
/// <returns>���� ���� �� ���ڿ��� ������ 0, ù ��°�� ������ ����, �� ��°�� ������ ���</returns>
int MyStringCompare(const char* String1, const char* String2);

/// <summary>
/// ���ڿ��� �Է� �޾� ������ �����ϴ� �Լ� �����
/// </summary>
/// <param name="Source"></param>
/// <returns></returns>
int MyAtoI(const char* Source);

/// <summary>���ڿ��� �Է� �޾� �Ǽ��� �����ϴ� �Լ� �����
/// </summary>
/// <param name="Source"></param>
/// <returns></returns>
float MyAtoF(const char* Source);

void SimpleParser(char* Source, const char Delimiter);
void ReadFile();
void TestString();