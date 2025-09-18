#include "lesson0918.h"
#include "LinkedList.h"
#include "PracticeLinkedList.h"
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
	MyList.InsertAt(15, 5);
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

void lesson0918::PracticeLinkedListPrint()
{
	PracticeLinkedList PList;
	PList.PracticeListPrint();
	PList.PracticeAdd(10);
	PList.PracticeAdd(30);
	PList.PracticeAdd(50);
	PList.PracticeAdd(20);
	PList.PracticeListPrint();
	PList.PracticeRemove(40);
	PList.PracticeRemove(10);
	PList.PracticeListPrint();
	PList.PracticeRemove(50);
	PList.PracticeListPrint();
	PList.PracticeAdd(40);
	PList.PracticeListPrint();

	PList.PracticeAddAt(1, 0);
	PList.PracticeAddAt(2, 3);
	PList.PracticeAddAt(4, 4);
	PList.PracticeListPrint();
	
	PList.PracticeRemoveAt(3);
	PList.PracticeListPrint();

	PracticeListNode* Found = PList.PracticeSearch(40);
	if (Found)
	{
		printf("40을 찾았습니다. \n");
	}
	else
	{
		printf("40이 없습니다. \n");
	}
	Found = PList.PracticeSearch(999);
	if (Found)
	{
		printf("999를 찾았습니다. \n");

	}
	else
	{
		printf("999가 없습니다. \n");

	}
}
