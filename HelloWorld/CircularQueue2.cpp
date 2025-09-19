#include "CircularQueue2.h"

void CircularQueue2::Enqueue(int InValue)
{
	if (IsFull())
	{
		printf("���� : ť�� ���� á���ϴ�!\n");
		return;
	}

	if (IsEmpty()) // ����� �� �ִ� ����� Front�� 0���� ����
	{
		Front = 0;
	}
	Rear = (Rear + 1) % MaxSize;	// Rear�� 1����. MaxSize�� �Ѿ �ٽ� 0���� 
	Data[Rear] = InValue;
}

int CircularQueue2::Dequeue()
{
	if (IsEmpty())
	{
		printf("���� : ť�� ����ֽ��ϴ�!\n");
		return Empty;
	}
	int Result = Data[Front];

	if (Front != Rear)
	{
		//�Ϲ����� ��Ȳ
		Front = (Front + 1) % MaxSize;
	}
	else
	{
		// ���������� 1���� ���� ��Ȳ
		Front = Empty;
		Rear = Empty;
	}

	return Result;
}

void CircularQueue2::TestPrintQueue()
{
	// Front���� Rear���� ����ϱ�
	// ť�� ũ�⵵ ���

	/*if (Rear < Front) {
		for (int j = 0; j < Rear+1; j++) {
			printf("%d ", Data[j]);
		}
		for (int i = Front; i < MaxSize; i++) {
			printf("%d ", Data[i]);
		}
	}
	else if(Front < Rear){
		for (int i = Front; i < MaxSize; i++) {
			printf("%d ", Data[i]);
		}
	}

	printf("ť�� ũ��� : %d \n", MaxSize);*/


	// ������ �ڵ�
	printf("Queue : ");
	for (int i = 0; i < GetSize(); i++)
	{
		printf("[%d] ", Data[(i + Front) % MaxSize]);
	}
	printf("\n");

	printf("Queue Size : %d", GetSize());
}