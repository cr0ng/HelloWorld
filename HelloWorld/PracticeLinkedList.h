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

	// �����͸� ����Ʈ�� �ϳ� �߰��ϴ� �Լ� (����Ʈ�� �������� �߰�)
	void PracticeAdd(int32 InData);

	// Position ��ġ�� ������ �߰�
	void PracticeAddAt(int32 InData,uint32 InPosition );

	// �����͸� �����ϴ� �Լ� (InData�� ���� ���� ������ ��带 �����ϴ� �Լ�. �ߺ� ����)
	void PracticeRemove(int32 InData);

	// Position ��ġ ������ ����
	void PracticeRemoveAt (uint32 InPosition);

	// InData ����Ʈ ã�� (������ nullptr ����)
	PracticeListNode* PracticeSearch(int32 InData) const;

	// ����Ʈ ����ϱ�
	void PracticeListPrint() const;

private:
	PracticeListNode* Head = nullptr;
	PracticeListNode* Tail = nullptr;
	uint32 Size = 0;

};
