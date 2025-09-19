#include "lesson0919.h"
#include "FixedStack.h"
#include "CircularQueue.h"
#include "CircularQueue2.h"
#include <stdio.h>
#include <iostream>

void lesson0919::TestStack()
{
	FixedStack Stack;

	// 1. 초기상태 테스트
	// 스택이 비었는지 확인해보기 (IsEmpty와 GetSize 사용하고 printf로 출력하기)

	printf("1번\n");
	if (Stack.IsEmpty())
	{
		printf("스택이 비어있습니다.\n");
	}
	else
	{
		printf("스택의 크기는 %d 입니다.\n", Stack.GetSize());
	}

	// 2. Push 테스트
	// 데이터(10) 넣고 Top 위치에 있는 값과 스택 크기 출력해보기
	// 데이터(20) 넣고 Top 위치에 있는 값과 스택 크기 출력해보기
	// 데이터(30) 넣고 Top 위치에 있는 값과 스택 크기 출력해보기

	printf("\n\n2번\n");
	printf("Push(10)\n");
	Stack.Push(10);
	printf("Top: %d, 스택 크기 : %d \n", Stack.Top(), Stack.GetSize());
	printf("Push(20)\n");
	Stack.Push(20);
	printf("Top: %d, 스택 크기 : %d \n", Stack.Top(), Stack.GetSize());
	printf("Push(30)\n");
	Stack.Push(30);
	printf("Top: %d, 스택 크기 : %d \n", Stack.Top(), Stack.GetSize());

	// 3. Pop 테스트
	// 데이터 하나 빼고 뺀 값 출력해보기, 스택의 남은 Top 위치값과 스택 크기 출력해보기
	printf("\n\n3번\n");
	printf("Pop()\n");
	Stack.Pop();
	printf("Top: %d, 스택 크기 : %d \n", Stack.Top(), Stack.GetSize());


	// 4. 스택 오버플로우 테스트
	// 스택 가득 채우고 한번 더 넣어보기
	printf("\n\n4번\n");
	while (Stack.GetSize() < 10) {
		Stack.Push(40);
	}
	printf("Top: %d, 스택 크기 : %d \n", Stack.Top(), Stack.GetSize());
	printf("Push(120)\n");
	Stack.Push(120); // 스택 크기 : 10
	printf("Top: %d, 스택 크기 : %d \n", Stack.Top(), Stack.GetSize());

	// 5. 스택 언더플로우 테스트
	// 스택 다 비우고 한번 더 빼보기
	printf("\n\n5번\n");
	while (Stack.GetSize() > 0) {
		Stack.Pop();
	}
	printf("스택 크기 : %d \n",Stack.GetSize());
	printf("Pop()\n");
	Stack.Pop();
	printf("스택 크기 : %d \n",Stack.GetSize());

}

void lesson0919::TestQueue()
{
	// 메뉴 만들기
	// 1. Enqueue
	// 2. Dequeue
	// 3. Peek
	// 4. TestPrintQueue
	// 5. 종료
	
	CircularQueue Queue;
	int ChooseMenu = -1;
	int InData = 0;
	printf(" 메뉴를 고르세요 \n");
	printf("1.Enqueue\t2.Dequeue\t3.Peek\t4.TestPrintQueue\t5.종료\n");
	std::cin >> ChooseMenu;

	while (ChooseMenu != 5) {
		if (ChooseMenu == 1) {
			printf("1. Enqueue 선택, 큐에 넣을 값을 입력하세요.\n");
			std::cin >> InData;
			Queue.Enqueue(InData);
		}
		else if (ChooseMenu == 2) {
			printf("2. Dequeue 선택, 큐를 하나 삭제합니다.\n");
			Queue.Dequeue();
		}
		else if (ChooseMenu == 3) {
			printf("3. Peek 선택, Front에 있는 값을 확인합니다.\n");
			int ChoosePeek = Queue.Peek();
			printf("%d \n", ChoosePeek);
		}
		else if (ChooseMenu == 4) {
			printf("4. TestPrintQueue 선택, 큐 내부를 모두 출력합니다 .\n");
			Queue.TestPrintQueue();
		}
		printf("\n\n메뉴를 고르세요 \n");
		printf("1.Enqueue\t2.Dequeue\t3.Peek\t4.TestPrintQueue\t5.종료\n");
		std::cin >> ChooseMenu;
	}
	
}

void lesson0919::TestQueue2()
{
	CircularQueue2 queue;
	queue.Enqueue(10);
	queue.Enqueue(20);
	queue.Enqueue(30);
	queue.Enqueue(40);
	queue.Enqueue(50);
	queue.Enqueue(60);
	queue.Enqueue(70);
	queue.Enqueue(80);
	queue.Enqueue(90);
	queue.Enqueue(100);

	queue.Dequeue();
	queue.Dequeue();
	queue.Dequeue();
	queue.Dequeue();

	queue.Enqueue(110);
	queue.Enqueue(120);
}

void lesson0919::TestSwallowCopy()
{
	// 얕은 복사:복사를 할 때 완전한 사본을 만드는 것이 아니라 주소만 복사하는 복사

	CircularQueue2 a(5);
	a.Enqueue(10);
	a.Enqueue(20);

	//CircularQueue2 b(a);	// 복사 생성자로 a의 사본을 만든 것
	//CircularQueue2 c = a;	// 대입 연산자로 a의 사본을 만든 것

	//a.Enqueue(30);
	//
	//printf("a\n");
	//a.TestPrintQueue();
	//printf("\nb\n");
	//b.TestPrintQueue();
	//printf("\nc\n");
	//c.TestPrintQueue();

	//TestSwallowCopy(a);			// 참조 넘기기
	//TestSwallowCopy(&a);		// 주소 넘기기


}

//void lesson0919::TestSwallowCopy(CircularQueue2* temp)
//{
//	temp->TestPrintQueue();
//}
//
//void lesson0919::TestSwallowCopy(CircularQueue2& temp)
//{
//	temp.TestPrintQueue();
//}