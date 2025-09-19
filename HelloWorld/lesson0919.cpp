#include "lesson0919.h"
#include "FixedStack.h"
#include <stdio.h>

void lesson0919::TestStack()
{
	FixedStack Stack;

	// 1. �ʱ���� �׽�Ʈ
	// ������ ������� Ȯ���غ��� (IsEmpty�� GetSize ����ϰ� printf�� ����ϱ�)

	printf("1��\n");
	if (Stack.IsEmpty())
	{
		printf("������ ����ֽ��ϴ�.\n");
	}
	else
	{
		printf("������ ũ��� %d �Դϴ�.\n", Stack.GetSize());
	}

	// 2. Push �׽�Ʈ
	// ������(10) �ְ� Top ��ġ�� �ִ� ���� ���� ũ�� ����غ���
	// ������(20) �ְ� Top ��ġ�� �ִ� ���� ���� ũ�� ����غ���
	// ������(30) �ְ� Top ��ġ�� �ִ� ���� ���� ũ�� ����غ���

	printf("\n\n2��\n");
	printf("Push(10)\n");
	Stack.Push(10);
	printf("Top: %d, ���� ũ�� : %d \n", Stack.Top(), Stack.GetSize());
	printf("Push(20)\n");
	Stack.Push(20);
	printf("Top: %d, ���� ũ�� : %d \n", Stack.Top(), Stack.GetSize());
	printf("Push(30)\n");
	Stack.Push(30);
	printf("Top: %d, ���� ũ�� : %d \n", Stack.Top(), Stack.GetSize());

	// 3. Pop �׽�Ʈ
	// ������ �ϳ� ���� �� �� ����غ���, ������ ���� Top ��ġ���� ���� ũ�� ����غ���
	printf("\n\n3��\n");
	printf("Pop()\n");
	Stack.Pop();
	printf("Top: %d, ���� ũ�� : %d \n", Stack.Top(), Stack.GetSize());


	// 4. ���� �����÷ο� �׽�Ʈ
	// ���� ���� ä��� �ѹ� �� �־��
	printf("\n\n4��\n");
	while (Stack.GetSize() < 10) {
		Stack.Push(40);
	}
	printf("Top: %d, ���� ũ�� : %d \n", Stack.Top(), Stack.GetSize());
	printf("Push(120)\n");
	Stack.Push(120); // ���� ũ�� : 10
	printf("Top: %d, ���� ũ�� : %d \n", Stack.Top(), Stack.GetSize());

	// 5. ���� ����÷ο� �׽�Ʈ
	// ���� �� ���� �ѹ� �� ������
	printf("\n\n5��\n");
	while (Stack.GetSize() > 0) {
		Stack.Pop();
	}
	printf("���� ũ�� : %d \n",Stack.GetSize());
	printf("Pop()\n");
	Stack.Pop();
	printf("���� ũ�� : %d \n",Stack.GetSize());

}
