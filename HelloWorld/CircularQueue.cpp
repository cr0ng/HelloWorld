#include "CircularQueue.h"

void CircularQueue::Enqueue(int InValue)
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

int CircularQueue::Dequeue()
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

void CircularQueue::TestPrintQueue()
{
	// Front���� Rear���� ����ϱ�
	// ť�� ũ�⵵ ���


	/*for (int i = 0; i < MaxSize; i++) {
		printf("%d ", Data[i]);
	}*/

	

	if (Rear < Front) {
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
}
