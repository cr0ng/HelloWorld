#include "Ship.h"
#include <stdlib.h>

//Ship::Ship() {}

void Ship::RandomShipPosition(char ShipMap[10][10])
{
	bool NothingHere = true;

	int ShipSize[4] = { 5,4,3,2 }; // 함선 크기들
	int ShipSizeSize = sizeof(ShipSize) / sizeof(ShipSize[0]); // 함선 크기들 배열의 크기

	for (int Ship = 0; Ship < ShipSizeSize; Ship++) {

	
	while (NothingHere) {

		int ShipX = rand() % 10;
		int ShipY = rand() % 10;
		int WidthOrLength = rand() % 2;	// 0이면 가로 1이면 세로

		if (WidthOrLength == 0)
		{
			// 함선을 가로로
			if (ShipX + ShipSize[Ship]-1 > 10) { // 10 넘기면 다시 뽑기
				continue;
			}
			
			for (int s = 0; s < ShipSize[Ship]; s++) {

				if (ShipMap[ShipX][ShipY + s] == 'S') {
					continue;
				}
				ShipMap[ShipX][ShipY+s] = 'S';	// "S"는 타입이 const char*이라 못쓴다고 한다

		
			}

			NothingHere = false;
			
		}
		else
		{
			// 함선을 세로로
			if (ShipY + ShipSize[Ship]-1 > 10) { // 10 넘기면 다시 뽑기
				continue;
			}
			for (int s = 0; s < ShipSize[Ship]; s++) {
				if (ShipMap[ShipX+s][ShipY] == 'S') {
					continue;
				}
				ShipMap[ShipX+s][ShipY] = 'S';	// "S"는 타입이 const char*이라 못쓴다고 한다
				
			
			}
			NothingHere = false;
		}
	}
	}
	}
	
	// 함선이 크기 하나씩밖에 저장이 안됨..
