#include "lesson0918.h"
#include "LinkedList.h"
#include <stdio.h>
void lesson0918::TestSingleLinkedList() {
	LinkedList MyList;

	// Add 테스트
	printf("--------------------Add 테스트--------------------\n");
	MyList.Add(10);
	MyList.Add(20);
	MyList.Add(30);
	MyList.PrintList();

	//InsertAt 테스트
	printf("\n--------------------InsertAt 테스트--------------------\n");
	MyList.InsertAt(40, 100);
	MyList.PrintList();
	MyList.InsertAt(5, 0);
	MyList.PrintList();
	MyList.InsertAt(15, 2);
	MyList.PrintList();

	//Remove 테스트
	printf("\n--------------------Remove 테스트--------------------\n");
	MyList.Remove(20);
	MyList.PrintList();
	MyList.Remove(123);
	MyList.PrintList();

	// RemoveAt 테스트
	printf("\n--------------------RemoveAt 테스트--------------------\n");
	MyList.RemoveAt(10);			// 없는거 삭제
	MyList.PrintList();
	MyList.Remove(1);
	MyList.PrintList();

	// Search test
	printf("\n--------------------Search 테스트--------------------\n");
	ListNode* Found = MyList.Search(15);
	if (Found)
	{
		printf("15를 찾았습니다. \n");
	}
	else
	{
		printf("15가 없습니다. \n");
	}
	Found = MyList.Search(999);
	if (Found)
	{
		printf("999를 찾았습니다. \n");

	}
	else
	{
		printf("999가 없습니다. \n");

	}
}