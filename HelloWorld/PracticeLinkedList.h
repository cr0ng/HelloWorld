#pragma once
#include <cstdint>

using int32 = int32_t;
using uint32 = uint32_t;

struct PracticeListNode {
	int32 Data = 0;
	PracticeListNode* Next = nullptr;

	PracticeListNode(int32 InData) : Data(InData) {};
};

class PracticeLinkedList {
public:
	PracticeLinkedList() = default;
	~PracticeLinkedList();

	// 데이터를 리스트에 하나 추가하는 함수 (리스트의 마지막에 추가)
	void PracticeAdd(int32 InData);

	// Position 위치에 데이터 추가
	void PracticeAddAt(int32 InData,uint32 InPosition );

	// 데이터를 삭제하는 함수 (InData와 같은 값을 가지는 노드를 삭제하는 함수. 중복 없음)
	void PracticeRemove(int32 InData);

	// Position 위치 데이터 삭제
	void PracticeRemoveAt (uint32 InPosition);

	// InData 리스트 찾기 (없으면 nullptr 리턴)
	PracticeListNode* PracticeSearch(int32 InData) const;

	// 리스트 출력하기
	void PracticeListPrint() const;

private:
	PracticeListNode* Head = nullptr;
	PracticeListNode* Tail = nullptr;
	uint32 Size = 0;

};
