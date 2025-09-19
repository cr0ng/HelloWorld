#include "lesson0919.h"
#include "FixedStack.h"
#include "CircularQueue.h"
#include <stdio.h>
#include <iostream>

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

void lesson0919::TestQueue()
{
	// �޴� �����
	// 1. Enqueue
	// 2. Dequeue
	// 3. Peek
	// 4. TestPrintQueue
	// 5. ����
	
	CircularQueue Queue;
	int ChooseMenu = -1;
	int InData = 0;
	printf(" �޴��� ������ \n");
	printf("1.Enqueue\t2.Dequeue\t3.Peek\t4.TestPrintQueue\t5.����\n");
	std::cin >> ChooseMenu;

	while (ChooseMenu != 5) {
		if (ChooseMenu == 1) {
			printf("1. Enqueue ����, ť�� ���� ���� �Է��ϼ���.\n");
			std::cin >> InData;
			Queue.Enqueue(InData);
		}
		else if (ChooseMenu == 2) {
			printf("2. Dequeue ����, ť�� �ϳ� �����մϴ�.\n");
			Queue.Dequeue();
		}
		else if (ChooseMenu == 3) {
			printf("3. Peek ����, Front�� �ִ� ���� Ȯ���մϴ�.\n");
			int ChoosePeek = Queue.Peek();
			printf("%d \n", ChoosePeek);
		}
		else if (ChooseMenu == 4) {
			printf("4. TestPrintQueue ����, ť ���θ� ��� ����մϴ� .\n");
			Queue.TestPrintQueue();
		}
		printf("\n\n�޴��� ������ \n");
		printf("1.Enqueue\t2.Dequeue\t3.Peek\t4.TestPrintQueue\t5.����\n");
		std::cin >> ChooseMenu;
	}
	
}

void lesson0919::TestQueue2()
{
	// 2.Circular Queue2 �����
	// �����ڿ��� �Ķ��Ƽ�� �޾� ũ�⸦ ���� �����ϰ� �����
	int QueueSize = 0;

}
