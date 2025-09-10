#pragma once
#include <string>
void Lesson0910();

/// <summary>
/// TargetString에서 TargetCharacter가 몇 번째에 있는지 찾아주는 함수
/// </summary>
/// <param name="TargetString">찾아질 문자열</param>
/// <param name="TargetCharacter">찾을 글자</param>
/// <returns>-1이면 못 찾음, 그 외는 TargetCharacter의 인덱스</returns>
int FindCharIndex(const char* TargetString,const char TargetCharacter);

/// <summary>
/// 문자열의 길이를 측정하는 함수 만들기
/// </summary>
/// <param name="Target"></param>
/// <returns></returns>
int MyStringLength(const char* Target);

/// <summary>
/// 문자열을 복사하는 함수 만들기
/// </summary>
/// <param name="Source"></param>
/// <param name="Destination"></param>
void MyStringCopy(const char* Source, char* Destination);

/// <summary>
/// 문자열을 합치는 함수 만들기 (Source 뒤에 Destination의 내용을 붙이기)
/// </summary>
/// <param name="Source"></param>
/// <param name="Destination"></param>
void MyStringCat(char* Source, const char* Destination);

/// <summary>
/// 문자열 두 개를 비교하는 함수 만들기
/// </summary>
/// <param name="String1"></param>
/// <param name="String2"></param>
/// <returns>리턴 값이 두 문자열이 같으면 0, 첫 번째가 작으면 음수, 두 번째가 작으면 양수</returns>
int MyStringCompare(const char* String1, const char* String2);

/// <summary>
/// 문자열을 입력 받아 정수를 리턴하는 함수 만들기
/// </summary>
/// <param name="Source"></param>
/// <returns></returns>
int MyAtoI(const char* Source);

/// <summary>문자열을 입력 받아 실수를 리턴하는 함수 만들기
/// </summary>
/// <param name="Source"></param>
/// <returns></returns>
float MyAtoF(const char* Source);

void SimpleParser(char* Source, const char Delimiter);
void ReadFile();
void TestString();