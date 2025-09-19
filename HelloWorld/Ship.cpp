#include "Ship.h"
#include <stdlib.h>

void Ship::RandomShipPosition()
{
	int ShipArray[10][10];

	for (int s = 5; s > 1; s--) {
		int ShipX = rand() % 10;
		int ShipY = rand() % 10;
		int WidthOrLength = rand() % 2;	// 0이면 가로 1이면 세로

		if (WidthOrLength == 0) 
		{ 
			// 함선을 가로로
		
			for (int i = ShipX; i < ShipX+s; i++) {
				if ((ShipArray[i][ShipY] == 'X') || i > 10)
				{
					// 중복된 위치에 함선이 있음 or 맵을 벗어남
					// 좌표 또 새로 뽑기
					int ShipX = rand() % 10;
					int ShipY = rand() % 10;
				}
				else {
					ShipArray[i][ShipY] = 'X';
				}
			}
		}
		else 
		{
			// 함선을 세로로
			for (int i = ShipX; i < ShipX + s; i++) {
				if ((ShipArray[ShipX][i] == 'X') || i > 10)
				{
					// 중복된 위치에 함선이 있음 or 맵을 벗어남
					// 좌표 또 새로 뽑기
					int ShipX = rand() % 10;
					int ShipY = rand() % 10;
				}
				else {
					ShipArray[ShipX][i] = 'X';
				}
			}
		}
	}
	
}
