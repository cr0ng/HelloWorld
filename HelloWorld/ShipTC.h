#pragma once
#include "Position.h"

class ShipTC
{
public:
	// �谡 ���� �� �ִ� �ִ� ũ��
	static constexpr int MaxShipSize = 5;

	ShipTC() = default;

	// �Լ� ��ġ�ϴ� �Լ� (InPosition�� ��ġ�� ��ǥ���� �����ּ�, InSize�� ��ǥ���� ����)
	void Place(const Position* InPosition, int InSize);

	// ���� ���θ� üũ�ϰ� ���� ó���� �ϴ� �Լ�
	// return : ���� ���� (�̹� ħ���� ��� ���߾ȵ� ������ ���)
	// InAttackPos : ������ ���� ��ǥ
	bool CheckAndProcessHit(const Position& InAttackPos);
	
	// ���� Ƚ���� ������� ũ�ų� ������ �� ��� ���� �ɴ´�.
	inline bool IsSunk() const { return Hits >= Size; }

private:
	// ���� ũ��
	int Size = 0;

	// �谡 ��ġ�� ��ǥ�� ( ���� ũ�⿡ ���� ����Ǵ� �κ��� ������ ���� ���Ǽ��� ���� ����)
	Position Positions[MaxShipSize];

	// ���� Ƚ��
	int Hits = 0;
};

