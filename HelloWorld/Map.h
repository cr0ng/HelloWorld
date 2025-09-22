#pragma once
#include <cstdint>
//#include <stdint.h>
#include "Position.h"
#include <stdio.h>

using uint8 = uint8_t;

enum class CellType : uint8 // �ʿ� ��ġ�Ǵ� �͵��� ������ ��Ÿ���� enum. 8bit�� ǥ��
{
	Empty = 0,	// ��ĭ�̴�
	Ship,		// �谡 ��ġ�Ǿ� �ִ�.
	Hit,		// �����ߴ�.
	Miss		// ��������.
};

class Map
{
public:
	static constexpr int MapSize = 10;	// �� ũ��. ���� ���������� �����Ǿ� ������ �̷��� ����.
	Map()
	{
		for (int y = 0; y < MapSize; y++)
		{
			for (int x = 0; x < MapSize; x++)
			{
				Cells[y][x] = CellType::Empty; // �ϴ��� ���� ��ĭ���� ����
			}
		}
	}
	virtual ~Map() = default;  // ����� �� ���� ������ ���� �Լ�

	// ���� ����ϴ� �Լ�.
	// ��ӹ��� Ŭ�������� �ݵ�� �����ؾ��Ѵ�. ( ��³����� �ٸ��ϱ�)
	// Map�� �߻� Ŭ������ ���� �ν��Ͻ�ȭ �� ��Ű�� �Ѵ�. ( ���� ���ӿ����� �����ϱ�)
	virtual void PrintMap() const = 0; // �� �ΰ��� �ٸ��� ����ؾ��ϴϱ� ���� ���� �Լ���

	// ������ ��ǥ�� ���� �����ϴ� �Լ�
	//inline CellType GetCellType(int InX, int InY) const
	//{
	//	if (IsValidPosition(InX, InY) == false)
	//	{
	//			return CellType::Empty; //�� ������ ����� �׳� ������� ó��
	//	}
	//	return Cells[InY][InX]; // ������ ������ �ȵǼ� ����
	//}

	// ������ ��ǥ�� ���� ����ִ��� Ȯ���ϴ� �Լ�(ĸ��ȭ�� ���� �ִ��� �����͸� ����� ���� ���� ����)
	inline bool IsCellEmpty(int InX, int InY) const 
	{
		if (IsValidPosition(InX, InY))
			return Cells[InX][InY] == CellType::Empty;
		return false;
	}

	/*inline CellType GetCellType(Position& InPosition) const
	{
		return GetCellType(InPosition.x, InPosition.y);
	}*/

	inline void SetCellType(Position InPosition, CellType InType)
	{
		SetCellType(InPosition.x, InPosition.y, InType);
	}

	inline void SetCellType(int InX, int InY, CellType InType)
	{
		if (IsValidPosition(InX, InY)) {
			Cells[InY][InX] = InType;
		}
	}


	// ��ǥ�� �� ���� ������ üũ�ϴ� �Լ�
	// ��Ÿ�Ӱ��� �ʿ� ���� ������ static���� �ϳ��� �����ϰ� �����.
	inline static bool IsValidPosition(int InX, int InY)
	{
		//Cells[1][2]; // static ���� X
		return InX >= 0 && InX < MapSize && InY >= 0 && InY < MapSize;
	}


protected:
	CellType Cells[MapSize][MapSize]; // �ٸ������� �� ������ ����ϴϱ� getter/setter ������ֱ�
};