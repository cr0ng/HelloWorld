#pragma once // �� ���� �е����ؼ� �ߺ� ����, �� ������ ���߿� ��ġ����

// ������Ͽ��� ������ �ۼ��Ѵ�.
// Ctrl + K + O : Cpp�� h�� �̵�

void PrintHelloWorld();	// �����ϴ� ���� ���� (void) �̸��� PrintHelloWorld�� �Ķ���͵� ����.


/// <summary>
/// ���� �Լ�
/// </summary>
/// <param name="Test1"></param>
/// <param name="Test2"></param>
/// <returns></returns>
int Sum(int Test1, int Test2); // ����Ÿ���� int�� �̸��� Sum�̰� �Ķ���ʹ� int 2���� �Լ��� �����ߴ�.
//int Sum(int, int);	// �� �Լ��� ����, ������ ���� ���� �Ķ���� �̸��� ���� ����

float Sum(float Test1, float Test2); // ����� ���� �Ķ���Ϳ� ���� Ÿ���� �ٸ��ϱ� ����

template <typename T> //���ø��� ������ �����!
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

// �Ķ���� 2���� ���ؼ� �����ִ� �Լ�
int Multiply(int Number1, int Number2 = 2); // ����Ʈ �Ķ���� ��� ����
											// �ش� �Ķ���� ���� �Լ��� ȣ���ϸ� �⺻������ ������ ���� ��� ����.
											// ����ο� ���� �����Ѵ�.
											// ����Ʈ �Ķ���ʹ� �׻� �ڿ������� �־�� �Ѵ�.

int Divide(int Test1, int Test2);
int Minuse(int Test1, int Test2);

int TestRecurcive(int Number);

inline int Square(int Number) 
// �̷��� �ٷ� �����ϴ°� �������� ����
{
	return Number * Number;
}

