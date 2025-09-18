#include "PracticeLinkedList.h"
#include <stdio.h>

PracticeLinkedList::~PracticeLinkedList()
{
}

void PracticeLinkedList::PracticeAdd(int32 InData)
{
	// 마지막에 추가

	PracticeListNode* NewNode = new PracticeListNode(InData); // 새로운 노드 생성

	if (Head == nullptr) // 리스트에 값이 없음
	{
		Head = NewNode;
		Tail = NewNode; // 값이 하나이면 헤드와 테일이 동일
	}
	else 
	{
		Tail->Next = NewNode; // 테일 다음으로 새로운 노드 연결
		Tail = NewNode; // 테일 뒤에 새 노드가 생겼으니 새 노드가 테일이 됨
	}

	Size++; // 노드가 추가되었으니까 크기 +1;
}

void PracticeLinkedList::PracticeAddAt(int32 InData, uint32 InPosition)
{
	// InPosition이 Size보다 크면 Size로 변경하기
	if (InPosition > Size) {
		InPosition = Size;
	}
	// InPosition이 Size와 같으면 맨 뒤에 추가하는거니까 PracticeAdd 함수와 일치
	if (InPosition == Size) {
		PracticeAdd(InData);
		return;
	}

	// 새 노드를 추가
	PracticeListNode* NewNode = new PracticeListNode(InData);
	
	// 맨앞에 추가하는 경우
	if (InPosition == 0) {

	NewNode->Next = Head;	// 새 노드에 원래 헤드 연결
	Head = NewNode; // 새 노드를 헤드로
	}
	// 중간에 추가
	else {
	// Poistion -1 이전 노드 찾기
		PracticeListNode* PrevNode = nullptr; // 이전 노드용
		PrevNode = Head; //헤드부터 시작

		for(uint32 i = 0; i < InPosition - 1;i++)
		{
			PrevNode = PrevNode->Next;
		}
		// 이전 노드를 찾았으면
		// 새 노드에 이전 노드의 다음 노드 연결
		NewNode->Next = PrevNode->Next;
		// 이전 노드에 새 노드 연결
		PrevNode->Next = NewNode;
	}
	Size++; // 노드 추가했으니까 사이즈 늘리기
	
}

void PracticeLinkedList::PracticeRemove(int32 InData)
{
	// 찾으면 삭제
	
	// 비어있으면 끝내기
	if (Head == nullptr) {
		return;
	}

	//삭제할 노드
	PracticeListNode* DeleteNode = nullptr;
	// 삭제할 노드의 앞 노드
	PracticeListNode* PrevDeleteNode = nullptr;

	// 삭제할 데이터가 Head인 경우
	if (Head->Data == InData) {
		DeleteNode = Head;
		//Head->Next = nullptr;
		Head = Head->Next;

		// 한개만 들어있었는데 그 노드를 삭제하는 경우
		if (Head == nullptr) {
			Tail = nullptr;
		}
	}
	// Head가 아닌 경우
	else {
		// 삭제할 노드의 이전 노드를 헤드부터 찾는다
		PrevDeleteNode = Head;

		while (PrevDeleteNode->Next != nullptr && PrevDeleteNode->Next->Data != InData) // 마지막 노드가 아니고 다음 노드의 값이 InData가 아니면 다음으로 넘어가서계속 찾기
		{
			PrevDeleteNode = PrevDeleteNode->Next;
		}
		if (PrevDeleteNode->Next != nullptr) { // 마지막 노드가 아니고 다음 노드의 값이 삭제하려는 노드일때
			
			DeleteNode = PrevDeleteNode->Next; // 다음 노드가 삭제할 노드
			PrevDeleteNode->Next = DeleteNode->Next; //이전 노드에 삭제할 노드의 다음 노드 연결

			//만약 마지막 노드가 삭제할 노드일수도 있으니까
			if (DeleteNode == Tail)
			{
				Tail = PrevDeleteNode; // 이전 노드를 테일로 설정해줌
			}
		}

		// 못 찾으면 에러 메세지 출력
		if (DeleteNode != nullptr) {
			delete DeleteNode;			// 삭제하려는 노드 삭제
			DeleteNode = nullptr;
			Size--;						// 삭제했으니까 사이즈 줄이기
		}
		else {
			printf("삭제할 노드를 찾지 못했습니다.\n");
		}

	}
}

void PracticeLinkedList::PracticeRemoveAt( uint32 InPosition)
{
	// Position이 Size의 크기를 벗어난 경우 에러 메세지 출력
	if (InPosition > Size) {
		printf("입력값이 리스트의 크기를 벗어났습니다. 크기 :%u", Size);
	}

	// 삭제될 노드 변수 생성
	PracticeListNode* DeleteNode = nullptr;

	// 만약 삭제될 노드가 헤드이면
	if (InPosition == 0)
	{
		// 다음 노드로 헤드를 옮기고
		DeleteNode = Head;
		Head = Head->Next;
		// 만약 리스트가 하나밖에 없었는데 삭제한경우 테일도 nullptr로 설정
		if (Head == nullptr)
		{
			Tail = nullptr;
		}
	}

	// 삭제될 노드가 중간이면
	else {
		// 이전 노드를 찾고
		PracticeListNode* PrevNode = Head;
		for (uint32 i = 0; i < InPosition - 1; i++) {
			PrevNode = PrevNode->Next;
		}
		// 삭제할 노드 변수에 노드 넣기
		 DeleteNode = PrevNode->Next;
		// 이전 노드에 삭제할 노드의 다음을 연결
		 PrevNode->Next = DeleteNode->Next;
		// 만약 삭제할 노드가 테일이면
		 if (DeleteNode == Tail) {
			// 이전 노드 테일 설정
			 Tail = PrevNode;
		}

	}

	// 삭제할 노드 삭제
	delete DeleteNode;
	DeleteNode = nullptr;
	Size--;	// 노드 삭제했으니까 사이즈 줄이기
}

PracticeListNode* PracticeLinkedList::PracticeSearch(int32 InData) const
{
//	// 입력한 데이터 찾기
//	
//	PracticeListNode* PrevSearchNode = nullptr;
//	PracticeListNode* Current = nullptr;
//	// 노드를 헤드부터 이동하면서 일치하는 데이터 찾기
//	for (uint32 i = 0; i < Size; i++) {
//		if (PrevSearchNode->Data == InData)
//		{
//			Current = PrevSearchNode;
//			printf("%u 찾았따\n",InData);
//		}
//		else {
//			// 다음 노드로 넘어가기
//			PrevSearchNode = PrevSearchNode->Next;
//		}
//	}
//			// 없으면 없다고 출력하기	
//			printf("%u 못 찾았따\n", InData);
//
//	return Current;

	// 찾은 변수가 들어갈 포인터 변수
	PracticeListNode* Result = nullptr;
	// 헤드부터 하나씩 진행해 나가기 위한 임시 변수
	PracticeListNode* Current = Head;
	// 임시 변수가 끝까지 돌기 위한 while문
	while (Current != nullptr) {
	// 데이터값이 InData와 동일하면 Result에 기록하고 while문 종료
		if (Current->Data == InData)
		{
			Result = Current;
			break;
		}
		Current = Current->Next;
	}
	// Result 값 리턴
	return Result;
}

void PracticeLinkedList::PracticeListPrint() const
{
	if (Head == nullptr)
	{
		printf("리스트가 비었습니다.\n");
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
