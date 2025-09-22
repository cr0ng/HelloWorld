#include "PlayerMap.h"

void PlayerMap::PrintMap() const
{
	// 상단 출력
	printf("   ");
	for (int i = 0; i < Map::MapSize; i++)
	{
		printf("%2d ", i);
	}
	printf("\n");

	// 왼쪽 좌표 + 배 배치 상태
	for (int y = 0; y < Map::MapSize; y++)
	{
		printf("%2d ", y);	// 왼쪽 좌표
		for (int x = 0; x < Map::MapSize; x++)
		{
			switch (Cells[y][x])
			{
			case CellType::Hit:
				printf(" X ");
				break;
			case CellType::Miss:
				printf(" O ");
				break;
			default:
				break;
			}
			if (Cells[y][x] == CellType::Ship) // 셀 상태에 따라 배 배치 상태 찍기
			{
				printf(" S ");
			}
			else
			{
				printf(" . ");
			}

		}
		printf("\n");
	}
}
