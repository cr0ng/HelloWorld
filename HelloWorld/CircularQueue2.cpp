#include "CircularQueue2.h"

void CircularQueue2::Enqueue(int InValue)
{
	if (IsFull())
	{
		printf("오류 : 큐가 가득 찼습니다!\n");
		return;
	}

	if (IsEmpty()) // 비었을 때 넣는 경우라면 Front도 0으로 설정
	{
		Front = 0;
	}
	Rear = (Rear + 1) % MaxSize;	// Rear는 1증가. MaxSize를 넘어서 다시 0으로 
	Data[Rear] = InValue;
}

int CircularQueue2::Dequeue()
{
	if (IsEmpty())
	{
		printf("오류 : 큐가 비어있습니다!\n");
		return Empty;
	}
	int Result = Data[Front];

	if (Front != Rear)
	{
		//일반적인 상황
		Front = (Front + 1) % MaxSize;
	}
	else
	{
		// 마지막으로 1개만 남은 상황
		Front = Empty;
		Rear = Empty;
	}

	return Result;
}

void CircularQueue2::TestPrintQueue()
{
	// Front부터 Rear까지 출력하기
	// 큐의 크기도 출력

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

	printf("큐의 크기는 : %d \n", MaxSize);*/


	// 선생님 코드
	printf("Queue : ");
	for (int i = 0; i < GetSize(); i++)
	{
		printf("[%d] ", Data[(i + Front) % MaxSize]);
	}
	printf("\n");

	printf("Queue Size : %d", GetSize());
}