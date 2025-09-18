#include "lesson0918.h"
#include "LinkedList.h"
#include <stdio.h>
void lesson0918::TestSingleLinkedList() {
	LinkedList MyList;

	// Add �׽�Ʈ
	printf("--------------------Add �׽�Ʈ--------------------\n");
	MyList.Add(10);
	MyList.Add(20);
	MyList.Add(30);
	MyList.PrintList();

	//InsertAt �׽�Ʈ
	printf("\n--------------------InsertAt �׽�Ʈ--------------------\n");
	MyList.InsertAt(40, 100);
	MyList.PrintList();
	MyList.InsertAt(5, 0);
	MyList.PrintList();
	MyList.InsertAt(15, 2);
	MyList.PrintList();

	//Remove �׽�Ʈ
	printf("\n--------------------Remove �׽�Ʈ--------------------\n");
	MyList.Remove(20);
	MyList.PrintList();
	MyList.Remove(123);
	MyList.PrintList();

	// RemoveAt �׽�Ʈ
	printf("\n--------------------RemoveAt �׽�Ʈ--------------------\n");
	MyList.RemoveAt(10);			// ���°� ����
	MyList.PrintList();
	MyList.Remove(1);
	MyList.PrintList();

	// Search test
	printf("\n--------------------Search �׽�Ʈ--------------------\n");
	ListNode* Found = MyList.Search(15);
	if (Found)
	{
		printf("15�� ã�ҽ��ϴ�. \n");
	}
	else
	{
		printf("15�� �����ϴ�. \n");
	}
	Found = MyList.Search(999);
	if (Found)
	{
		printf("999�� ã�ҽ��ϴ�. \n");

	}
	else
	{
		printf("999�� �����ϴ�. \n");

	}
}