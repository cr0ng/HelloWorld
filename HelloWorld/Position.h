#pragma once

struct Position
{
	int x = 0;
	int y = 0;

	// �򰥸� �� �ִ� ��Ȳ�̸� ��������� �̾߱� ���ִ� ���� ����.
	Position() = default; // �ڵ����� �����Ǵ� �⺻�����ڿ� ����.
	Position(int InX, int InY)
		:x(InX), y(InY)
	{
		// �߰� ����� �ʿ��� ���. ���ʿ� ���� �����ϱ�
	}

	Position& operator +=(const Position& other)
	{
		//return Position(x + other.x, y + other.y);
		x += other.x;
		y += other.y;
		return *this;
	}
};

// ���׿����ڴ� ����ü �ۿ� ���� ���� �Ϲ����̴�.
Position operator+(const Position& a, const Position& b);
Position operator-(const Position& a, const Position& b);
bool operator == (const Position& a, const Position& b);
bool operator != (const Position& a, const Position& b);