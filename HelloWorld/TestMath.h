#pragma once // 한 번만 읽도록해서 중복 방지, 안 넣으면 나중에 골치아픔

// 헤더파일에는 선언을 작성한다.
// Ctrl + K + O : Cpp와 h를 이동

void PrintHelloWorld();	// 리턴하는 값이 없고 (void) 이름은 PrintHelloWorld고 파라미터도 없다.


/// <summary>
/// 덧셈 함수
/// </summary>
/// <param name="Test1"></param>
/// <param name="Test2"></param>
/// <returns></returns>
int Sum(int Test1, int Test2); // 리턴타입이 int고 이름은 Sum이고 파라미터는 int 2개인 함수를 선언했다.
//int Sum(int, int);	// 위 함수와 동일, 선언할 때는 수의 파라미터 이름은 생략 가능

float Sum(float Test1, float Test2); // 기능이 같고 파라미터와 리턴 타입이 다르니까 가능

template <typename T> //템플릿은 무조건 헤더에!
T Add(T Number1, T Number2)
{
	return Number1 + Number2;
}

template <typename T>
T Min(T Number1, T Number2)
{
	return Number1 - Number2;
}

template <typename T>
T Mul(T Number1, T Number2)
{
	return Number1 * Number2;
}

template <typename T>
T Div(T Number1, T Number2)
{
	return Number1 / Number2;
}

// 파라미터 2개를 곱해서 돌려주는 함수
int Multiply(int Number1, int Number2 = 2); // 디폴트 파라미터 사용 예시
											// 해당 파라미터 없이 함수를 호출하면 기본적으로 설정된 값이 대신 들어간다.
											// 선언부에 값을 설정한다.
											// 디폴트 파라미터는 항상 뒤에서부터 있어야 한다.

int Divide(int Test1, int Test2);
int Minuse(int Test1, int Test2);

int TestRecurcive(int Number);

inline int Square(int Number) 
// 이렇게 바로 구현하는건 권장하지 않음
{
	return Number * Number;
}

