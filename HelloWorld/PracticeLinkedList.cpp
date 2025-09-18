#include "PracticeLinkedList.h"
#include <stdio.h>

PracticeLinkedList::~PracticeLinkedList()
{
}

void PracticeLinkedList::PracticeAdd(int32 InData)
{
	// �������� �߰�

	PracticeListNode* NewNode = new PracticeListNode(InData); // ���ο� ��� ����

	if (Head == nullptr) // ����Ʈ�� ���� ����
	{
		Head = NewNode;
		Tail = NewNode; // ���� �ϳ��̸� ���� ������ ����
	}
	else 
	{
		Tail->Next = NewNode; // ���� �������� ���ο� ��� ����
		Tail = NewNode; // ���� �ڿ� �� ��尡 �������� �� ��尡 ������ ��
	}

	Size++; // ��尡 �߰��Ǿ����ϱ� ũ�� +1;
}

void PracticeLinkedList::PracticeAddAt(int32 InData, uint32 InPosition)
{
	// InPosition�� Size���� ũ�� Size�� �����ϱ�
	if (InPosition > Size) {
		InPosition = Size;
	}
	// InPosition�� Size�� ������ �� �ڿ� �߰��ϴ°Ŵϱ� PracticeAdd �Լ��� ��ġ
	if (InPosition == Size) {
		PracticeAdd(InData);
		return;
	}

	// �� ��带 �߰�
	PracticeListNode* NewNode = new PracticeListNode(InData);
	
	// �Ǿտ� �߰��ϴ� ���
	if (InPosition == 0) {

	NewNode->Next = Head;	// �� ��忡 ���� ��� ����
	Head = NewNode; // �� ��带 ����
	}
	// �߰��� �߰�
	else {
	// Poistion -1 ���� ��� ã��
		PracticeListNode* PrevNode = nullptr; // ���� ����
		PrevNode = Head; //������ ����

		for(uint32 i = 0; i < InPosition - 1;i++)
		{
			PrevNode = PrevNode->Next;
		}
		// ���� ��带 ã������
		// �� ��忡 ���� ����� ���� ��� ����
		NewNode->Next = PrevNode->Next;
		// ���� ��忡 �� ��� ����
		PrevNode->Next = NewNode;
	}
	Size++; // ��� �߰������ϱ� ������ �ø���
	
}

void PracticeLinkedList::PracticeRemove(int32 InData)
{
	// ã���� ����
	
	// ��������� ������
	if (Head == nullptr) {
		return;
	}

	//������ ���
	PracticeListNode* DeleteNode = nullptr;
	// ������ ����� �� ���
	PracticeListNode* PrevDeleteNode = nullptr;

	// ������ �����Ͱ� Head�� ���
	if (Head->Data == InData) {
		DeleteNode = Head;
		//Head->Next = nullptr;
		Head = Head->Next;

		// �Ѱ��� ����־��µ� �� ��带 �����ϴ� ���
		if (Head == nullptr) {
			Tail = nullptr;
		}
	}
	// Head�� �ƴ� ���
	else {
		// ������ ����� ���� ��带 ������ ã�´�
		PrevDeleteNode = Head;

		while (PrevDeleteNode->Next != nullptr && PrevDeleteNode->Next->Data != InData) // ������ ��尡 �ƴϰ� ���� ����� ���� InData�� �ƴϸ� �������� �Ѿ����� ã��
		{
			PrevDeleteNode = PrevDeleteNode->Next;
		}
		if (PrevDeleteNode->Next != nullptr) { // ������ ��尡 �ƴϰ� ���� ����� ���� �����Ϸ��� ����϶�
			
			DeleteNode = PrevDeleteNode->Next; // ���� ��尡 ������ ���
			PrevDeleteNode->Next = DeleteNode->Next; //���� ��忡 ������ ����� ���� ��� ����

			//���� ������ ��尡 ������ ����ϼ��� �����ϱ�
			if (DeleteNode == Tail)
			{
				Tail = PrevDeleteNode; // ���� ��带 ���Ϸ� ��������
			}
		}

		// �� ã���� ���� �޼��� ���
		if (DeleteNode != nullptr) {
			delete DeleteNode;			// �����Ϸ��� ��� ����
			DeleteNode = nullptr;
			Size--;						// ���������ϱ� ������ ���̱�
		}
		else {
			printf("������ ��带 ã�� ���߽��ϴ�.\n");
		}

	}
}

void PracticeLinkedList::PracticeRemoveAt( uint32 InPosition)
{
	// Position�� Size�� ũ�⸦ ��� ��� ���� �޼��� ���
	if (InPosition > Size) {
		printf("�Է°��� ����Ʈ�� ũ�⸦ ������ϴ�. ũ�� :%u", Size);
	}

	// ������ ��� ���� ����
	PracticeListNode* DeleteNode = nullptr;

	// ���� ������ ��尡 ����̸�
	if (InPosition == 0)
	{
		// ���� ���� ��带 �ű��
		DeleteNode = Head;
		Head = Head->Next;
		// ���� ����Ʈ�� �ϳ��ۿ� �����µ� �����Ѱ�� ���ϵ� nullptr�� ����
		if (Head == nullptr)
		{
			Tail = nullptr;
		}
	}

	// ������ ��尡 �߰��̸�
	else {
		// ���� ��带 ã��
		PracticeListNode* PrevNode = Head;
		for (uint32 i = 0; i < InPosition - 1; i++) {
			PrevNode = PrevNode->Next;
		}
		// ������ ��� ������ ��� �ֱ�
		 DeleteNode = PrevNode->Next;
		// ���� ��忡 ������ ����� ������ ����
		 PrevNode->Next = DeleteNode->Next;
		// ���� ������ ��尡 �����̸�
		 if (DeleteNode == Tail) {
			// ���� ��� ���� ����
			 Tail = PrevNode;
		}

	}

	// ������ ��� ����
	delete DeleteNode;
	DeleteNode = nullptr;
	Size--;	// ��� ���������ϱ� ������ ���̱�
}

PracticeListNode* PracticeLinkedList::PracticeSearch(int32 InData) const
{
//	// �Է��� ������ ã��
//	
//	PracticeListNode* PrevSearchNode = nullptr;
//	PracticeListNode* Current = nullptr;
//	// ��带 ������ �̵��ϸ鼭 ��ġ�ϴ� ������ ã��
//	for (uint32 i = 0; i < Size; i++) {
//		if (PrevSearchNode->Data == InData)
//		{
//			Current = PrevSearchNode;
//			printf("%u ã�ҵ�\n",InData);
//		}
//		else {
//			// ���� ���� �Ѿ��
//			PrevSearchNode = PrevSearchNode->Next;
//		}
//	}
//			// ������ ���ٰ� ����ϱ�	
//			printf("%u �� ã�ҵ�\n", InData);
//
//	return Current;

	// ã�� ������ �� ������ ����
	PracticeListNode* Result = nullptr;
	// ������ �ϳ��� ������ ������ ���� �ӽ� ����
	PracticeListNode* Current = Head;
	// �ӽ� ������ ������ ���� ���� while��
	while (Current != nullptr) {
	// �����Ͱ��� InData�� �����ϸ� Result�� ����ϰ� while�� ����
		if (Current->Data == InData)
		{
			Result = Current;
			break;
		}
		Current = Current->Next;
	}
	// Result �� ����
	return Result;
}

void PracticeLinkedList::PracticeListPrint() const
{
	if (Head == nullptr)
	{
		printf("����Ʈ�� ������ϴ�.\n");
		return;
	}

	PracticeListNode* Current = Head;
	while (Current)
	{
		printf("%d, ", Current->Data);
		Current = Current->Next;
	}
	printf("\n");
}
